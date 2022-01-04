#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TEL 12
#define MAX_ADDR 30
#define MAX 1000

#define DESAULT_SZ 3
#define INT_SZ 2

//类型的定义
typedef struct PeopleInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tel[MAX_TEL];
	char addr[MAX_ADDR];
}PeopleInfo;

//通讯录
typedef struct Contact
{
	PeopleInfo *date;//存放进来的人的信息，指向动态申请的空间
	int sz;//记录当前通讯录中有效信息的个数
	int capacity;//记录当前通讯录最大容量
}Contact;

//初始化通讯录
void InitContact(Contact* pc);

//增加联系人
void AddContact(Contact* pc);

//打印联系人
void PrintContact(const Contact* pc);

//删除联系人
void DelContact(Contact* pc);

//查找联系人
void SearchContact(Contact* pc);

//修改指定联系人
void ModifyContact(Contact* pc);

//销毁通讯录
void DestoryContact(Contact* pc);
