#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int main()
//{
//	/*char ch = 'q';
//	char* pc = &ch;*/
//
//	//�������ǰɡ�hello bit������ַ��������ַ��ĵ�ַ�洢����ps��
//	char* ps = "hello bit";
//	printf("%c\n", *ps);
//
//	return 0;
//}

//int main()
//{
//	//ָ������
//	//����- �����д�ŵ���ָ�루��ַ��
//	//int* arr[4];//�������ָ�������
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

//����ָ��
//ָ�������ָ��
// 
// ��һ��ָ��
// ����ָ�룺int*p - ָ�����͵�ָ��
// �ַ�ָ�� - ָ���ַ���ָ��
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
//	//parr����һ������ָ�� - ��ŵ�������ĵ�ַ
//
//	double* d[5];
//	double* (*pd)[5] = &d;
//
//	//arr - ������Ԫ�صĵ�ַ - arr[0]�ĵ�ַ
//	return 0;
//}


//����������Ԫ�ص�ַ
//2������
// 1.sizeof(������) - ��������ʾ�������飬���������������Ĵ�С����λ���ֽ�
// 2.������ - ��������ʾ�������飬ȡ��������������ĵ�ַ
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
//p������ָ��
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
	print2(arr, 3, 5);//arr����������ʾ������Ԫ�ص�ַ
	return 0;
}