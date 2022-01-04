#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "contact.h"

//通讯录
// 1.通讯录中能够存放1000个人的信息
// 每个人的信息：
// 姓名+年龄+性别+电话+地址
// 2.增加人的信息
// 3.删除指定人的信息
// 4.修改指定人的信息
// 5.查找指定人的信息
// 6。排序通讯录的信息
//
//	V2.0
// 动态增长版本
// 1.通讯录初始化后，能存放3个人信息
// 2.存放满后，每次增加两个信息
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
	//创建通讯录
	Contact con;//通讯录
	//初始化通讯录
	//给date申请一块连续的空间在堆区上
	InitContact(&con);

	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			//增加人的信息
			AddContact(&con);
			break;
		case DEL:
			//删除联系人
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			//修改联系人
			ModifyContact(&con);
			break;
		case SORT:
			break;
		case PRINT:
			//显示联系人
			PrintContact(&con);
			break;
		case EXIT:
			//销毁内存
			DestoryContact(&con);
			break;
		default:
			break;
		}
	} while (input);
	return 0;
}