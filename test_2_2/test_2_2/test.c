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


//void print(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < r;i++)
//	{
//		for (j = 0;j < c;j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
////p是数组指针
//void print2(int(*p)[5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < r;i++)
//	{
//		for (j = 0;j < c.j++)
//		{
//			printf("%d ", *(*(p + i)+j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	//int a[5];
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	/*print(arr, 3, 5);*/
//	print2(arr, 3, 5);//arr数组名，表示数组首元素地址
//	return 0;
//}


//int i;
//int main()
//{
//	i--;
//	//sizeof这个操作符，返回的结果是unsigned int
//	if (i > sizeof(i))
//	{
//		printf(">")
//	}
//	else
//	{
//		printf("<")
//	}
//	return 0;
//}

//求sn=a+aa+aaa+aaaa+aaaaa的前五项之和，其中a是一个数字
//int main()
//{
//	//计算由a组成的前n项之和
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int ret = 0;
//	for (i = 0;i < n;i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//打印arr数组
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//求1-100000之间所有的水仙花数
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0;i <= 100000;i++)
//	{
//		int n = 1;
//		int tmp = i;
//		while (tmp / 10)
//		{
//			n++;
//			tmp = tmp / 10;
//		}
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			//pow是用来求次方
//			sum += pow(tmp % 10, n);
//			tmp = tmp / 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


#include <assert.h>
void reverse(char* str)
{
	assert(str != NULL);
	int len = strlen(str);
	char* left = str;
	char* right = (str + len - 1);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[] = "abcdef";
	reverse(arr);
	printf("%s\n", arr);
	return 0;
}