#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "contact.h"

//ͨѶ¼
// 1.ͨѶ¼���ܹ����1000���˵���Ϣ
// ÿ���˵���Ϣ��
// ����+����+�Ա�+�绰+��ַ
// 2.�����˵���Ϣ
// 3.ɾ��ָ���˵���Ϣ
// 4.�޸�ָ���˵���Ϣ
// 5.����ָ���˵���Ϣ
// 6������ͨѶ¼����Ϣ
//
//	V2.0
// ��̬�����汾
// 1.ͨѶ¼��ʼ�����ܴ��3������Ϣ
// 2.�������ÿ������������Ϣ
//

void menu()
{
	printf("**********************************\n");
	printf("******    1.add    2.del    ******\n");
	printf("******    3.search 4.modify ******\n");
	printf("******    5.sort   6.print  ******\n");
	printf("******    0.exit            ******\n");
	printf("**********************************\n");
}

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	PRINT
};
int main()
{
	int input = 0;
	//����ͨѶ¼
	Contact con;//ͨѶ¼
	//��ʼ��ͨѶ¼
	//��date����һ�������Ŀռ��ڶ�����
	InitContact(&con);

	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			//�����˵���Ϣ
			AddContact(&con);
			break;
		case DEL:
			//ɾ����ϵ��
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			//�޸���ϵ��
			ModifyContact(&con);
			break;
		case SORT:
			break;
		case PRINT:
			//��ʾ��ϵ��
			PrintContact(&con);
			break;
		case EXIT:
			//�����ڴ�
			DestoryContact(&con);
			break;
		default:
			break;
		}
	} while (input);
	return 0;
}