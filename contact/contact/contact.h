#pragma once

#include <stdio.h>
#include <string.h>

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

//��ʼ��ͨѶ¼
void InitContact(Contact* pc);

//������ϵ��
void AddContact(Contact* pc);

//��ӡ��ϵ��
void PrintContact(const Contact* pc);

//ɾ����ϵ��
void DelContact(Contact* pc);

//������ϵ��
void SearchContact(const Contact* pc);

//�޸�ָ����ϵ��
void ModifyContact(Contact* pc);