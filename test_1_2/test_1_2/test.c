#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//作用域和生命周期
//局部变量作用域：变量所在的局部范围


//int  main()
//{
//	int a = 10;
//	{
//		printf("%d\n",a)
//	}
//	return 0;
//}


//声明变量
extern int g_val;

int main()
{
	printf("%d\n", g_val);

	return 0;
}


//变量的生命周期：变量的创建和销毁之间的时间段
//局部变量的生命周期：进入范围局部生命开始，出局部范围生命结束
//全局变量的生命周期：整个程序的生命周期