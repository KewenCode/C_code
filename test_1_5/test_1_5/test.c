#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�⺯�� - ����ʹ�õĺ���

#include<string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello world";
//	strcpy(arr1, arr2);
//	printf("%s",arr1); //��ӡarr1����ַ���%s - ���ַ�����ʽ��ӡ
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