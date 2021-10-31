#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//库函数 - 大量使用的函数

#include<string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello world";
//	strcpy(arr1, arr2);
//	printf("%s",arr1); //打印arr1这个字符串%s - 以字符串形式打印
//
//	return 0;
//}

int main()
{
	char arr[] = "hallo world";
	memset(arr, 'x', 5);
	printf("%s", arr);
	return 0;
}