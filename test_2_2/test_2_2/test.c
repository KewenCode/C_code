#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int main()
//{
//	/*char ch = 'q';
//	char* pc = &ch;*/
//
//	//本质上是吧“hello bit”这个字符串的首字符的地址存储在了ps中
//	char* ps = "hello bit";
//	printf("%c\n", *ps);
//
//	return 0;
//}

//int main()
//{
//	//指针数组
//	//数组- 数组中存放的是指针（地址）
//	//int* arr[4];//存放整型指针的数组
//
//	int a[5] = { 1,2,3,4,5 };
//	int b[] = { 2,3,4,5,6 };
//	int c[] = { 3,4,5,6,7 };
//	int* arr[3] = { a,b,c };
//	int i = 0;
//	for (i = 0;i < 3;i++)
//	{
//		int j = 0;
//		for (j = 0;j < 5;j++)
//		{
//			//printf("%d ", *(arr[i] + j));
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//数组指针
//指向数组的指针
// 
// 是一种指针
// 整型指针：int*p - 指向整型的指针
// 字符指针 - 指向字符的指针
//

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char ch = 'w';
//	char* pc = &ch;
//
//	int arr[10] = { 1,2,3,4,5 };
//	int (*parr)[10] = &arr;
//	//parr就是一个数组指针 - 存放的是数组的地址
//
//	double* d[5];
//	double* (*pd)[5] = &d;
//
//	//arr - 数组首元素的地址 - arr[0]的地址
//	return 0;
//}


//数组名是首元素地址
//2个例外
// 1.sizeof(数组名) - 数组名表示整个数组，计算的是整个数组的大小，单位是字节
// 2.数组名 - 数组名表示整个数组，取出的是整个数组的地址
//

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0;i < 10 ;i++)
//	{
//		printf("%d\n", *((*pa) + i));
//	}
//	return 0;
//}


void print(int arr[3][5], int r, int c)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < r;i++)
	{
		for (j = 0;j < c;j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
//p是数组指针
void print2(int(*p)[5], int r, int c)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < r;i++)
	{
		for (j = 0;j < c.j++)
		{
			printf("%d ", *(*(p + i)+j));
		}
		printf("\n");
	}
}
int main()
{
	//int a[5];
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	/*print(arr, 3, 5);*/
	print2(arr, 3, 5);//arr数组名，表示数组首元素地址
	return 0;
}