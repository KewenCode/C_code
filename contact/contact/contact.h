#pragma once

#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TEL 12
#define MAX_ADDR 30
#define MAX 1000

//���͵Ķ���
typedef struct PeopleInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tel[MAX_TEL];
	char addr[MAX_ADDR];
}PeopleInfo;

//ͨѶ¼
typedef struct Contact
{
	PeopleInfo date[MAX];//��Ž������˵���Ϣ
	int sz;//��¼��ǰͨѶ¼����Ч��Ϣ�ĸ���
}Contact;