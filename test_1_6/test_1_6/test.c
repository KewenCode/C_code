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

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 1;i < 10;i++)
//	{
//		printf("arr[%d]=%p\n", i, &arr[i]);//%p��ר��������ӡ��ַ - 16����
//	}
//	return 0;
//}
//1��һά�������ڴ�����������ŵ�
//2�����������±����������ַ���ɵ���߱仯��
//


//��ά����
//int main()
//{
	//����
	/*int arr[3][4];*/
	//��ʼ�� - ������ͬʱ����ֵ
	//int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	//int arr[3][4] = { 1,2,3,4,5,6,7 };//����ȫ��ʼ�� - ���油0
//	int arr[3][4] = { { 1,2 }, { 3, 4 }, { 4, 5 } };
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < 3;i++)
//	{
//		for (j = 0;j < 4;j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//��ά�����������еĴ洢
//int main()
//{
//	int arr[3][4] = { { 1,2 }, { 3, 4 }, { 4, 5 } };
//	int i = 0;
//	int j = 0;
//	int* p = &arr[0][0];
//	for (i = 0;i < 12;i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	/*for (i = 0;i < 3;i++)
//	{
//		for (j = 0;j < 4;j++)
//		{
//			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
//		}
//	}*/
//	return 0;
//}

