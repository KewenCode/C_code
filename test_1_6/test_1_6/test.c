#define _CRT_SECURE_NO_WARNINGS 1
//����
#include<stdio.h>
#include<string.h>

//int arr[] = { 1,2,3,4,5 };
//int arr1[10] = { 1,2,3,4,5 };
//int arr2[5] = { 1,2,3,4,5 };

//char ch[5] = { 'b','i','t' };
//char ch1[] = { 'b','i','t' };
//
//char ch3[5] = "bit";// b i t \0 0
//char ch4[] = "bit";//b i t \0

int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 1;i < 10;i++)
	{
		printf("arr[%d]=%p\n", i, &arr[i]);//%p��ר��������ӡ��ַ - 16����
	}
	return 0;
}
//1��һά�������ڴ�����������ŵ�
//2�����������±����������ַ���ɵ���߱仯��
//