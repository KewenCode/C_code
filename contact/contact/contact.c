#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "contact.h"

void InitContact(Contact* pc)
{
	pc->sz = 0;
	//memset() - �ڴ�����
	memset(pc->date, 0, sizeof(pc->date));
}

void AddContact(Contact* pc)
{
	if (pc->sz == MAX)
	{
		printf("ͨѶ¼�������޷����\n");
		return;
	}
	//����һ���˵���Ϣ
	printf("����������:>");
	scanf("%s", pc->date[pc->sz].name);
	printf("����������:>");
	scanf("%d", &(pc->date[pc->sz].age));
	printf("�������Ա�:>");
	scanf("%s", pc->date[pc->sz].sex);
	printf("������绰:>");
	scanf("%s", pc->date[pc->sz].tel);
	printf("�������ַ:>");
	scanf("%s", pc->date[pc->sz].addr);
	pc->sz++;
	printf("���ӳɹ���\n");
}

void PrintContact(const Contact* pc)
{
	int i = 0;
	//��ӡ����
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	return -1;//�Ҳ���
}

void DelContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ�����ɾ��\n");
		return;
	}
	printf("������Ҫɾ���˵�����:>");
	scanf("%s", name);
	//������
	int pos = FindBuName(pc,name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
		return;
	}
	//ɾ��
	int i = 0;
	for (i = pos;i < pc->sz-1;i++)
	{
		pc->date[i] = pc->date[i + 1];
	}
	pc->sz--;
	printf("ɾ���ɹ���\n");
}

void SearchContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ�����˵�����:>");
	scanf("%s", name);
	int pos = FindBuName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
		return;
	}
	else
	{
		printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("������Ҫ�޸��˵�����:>");
	scanf("%s", name);
	int pos = FindBuName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
		return;
	}
	else
	{
		printf("����������:>");
		scanf("%s", pc->date[pos].name);
		printf("����������:>");
		scanf("%d", &(pc->date[pos].age));
		printf("�������Ա�:>");
		scanf("%s", pc->date[pos].sex);
		printf("������绰:>");
		scanf("%s", pc->date[pos].tel);
		printf("�������ַ:>");
		scanf("%s", pc->date[pos].addr);
		printf("�޸ĳɹ���\n");
	}
}