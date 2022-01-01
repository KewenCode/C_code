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

	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact();
			break;
		case DEL:
			break;
		case SEARCH:
			break;
		case MODIFY:
			break;
		case SORT:
			break;
		case PRINT:
			break;
		case EXIT:
			break;
		default:
			break;
		}
	} while (input);
	return 0;
}