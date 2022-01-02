#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "contact.h"

void InitContact(Contact* pc)
{
	pc->sz = 0;
	//memset() - 内存设置
	memset(pc->date, 0, sizeof(pc->date));
}

void AddContact(Contact* pc)
{
	if (pc->sz == MAX)
	{
		printf("通讯录已满，无法添加\n");
		return;
	}
	//增加一个人的信息
	printf("请输入名字:>");
	scanf("%s", pc->date[pc->sz].name);
	printf("请输入年龄:>");
	scanf("%d", &(pc->date[pc->sz].age));
	printf("请输入性别:>");
	scanf("%s", pc->date[pc->sz].sex);
	printf("请输入电话:>");
	scanf("%s", pc->date[pc->sz].tel);
	printf("请输入地址:>");
	scanf("%s", pc->date[pc->sz].addr);
	pc->sz++;
	printf("增加成功！\n");
}

void PrintContact(const Contact* pc)
{
	int i = 0;
	//打印标题
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
	for (i = 0;i < pc->sz;i++)
	{
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n",
			pc->date[i].name,
			pc->date[i].age,
			pc->date[i].sex,
			pc->date[i].tel,
			pc->date[i].addr);
	}
}

static int FindBuName(Contact* pc, char name[])
{
	int i = 0;
	for (i = 0;i < pc->sz;i++)
	{
		if (strcmp(pc->date[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;//找不到
}

void DelContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	if (pc->sz == 0)
	{
		printf("通讯录为空，无需删除\n");
		return;
	}
	printf("请输入要删除人的名字:>");
	scanf("%s", name);
	//查找人
	int pos = FindBuName(pc,name);
	if (pos == -1)
	{
		printf("要查找的人不存在\n");
		return;
	}
	//删除
	int i = 0;
	for (i = pos;i < pc->sz-1;i++)
	{
		pc->date[i] = pc->date[i + 1];
	}
	pc->sz--;
	printf("删除成功！\n");
}

void SearchContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入要查找人的名字:>");
	scanf("%s", name);
	int pos = FindBuName(pc, name);
	if (pos == -1)
	{
		printf("要查找的人不存在\n");
		return;
	}
	else
	{
		printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n",
			pc->date[pos].name,
			pc->date[pos].age,
			pc->date[pos].sex,
			pc->date[pos].tel,
			pc->date[pos].addr);
	}
}

void ModifyContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入要修改人的名字:>");
	scanf("%s", name);
	int pos = FindBuName(pc, name);
	if (pos == -1)
	{
		printf("要修改的人不存在\n");
		return;
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", pc->date[pos].name);
		printf("请输入年龄:>");
		scanf("%d", &(pc->date[pos].age));
		printf("请输入性别:>");
		scanf("%s", pc->date[pos].sex);
		printf("请输入电话:>");
		scanf("%s", pc->date[pos].tel);
		printf("请输入地址:>");
		scanf("%s", pc->date[pos].addr);
		printf("修改成功！\n");
	}
}