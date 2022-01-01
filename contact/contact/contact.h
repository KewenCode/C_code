#pragma once

#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TEL 12
#define MAX_ADDR 30
#define MAX 1000

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
	PeopleInfo date[MAX];//存放进来的人的信息
	int sz;//记录当前通讯录中有效信息的个数
}Contact;