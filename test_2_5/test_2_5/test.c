#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	//int arr[10];//ջ��
//
//	//��̬�ڴ濪��
//	int* p = (int*)malloc(10 * sizeof(int));
//	//ʹ����Щ�ռ��ʱ��
//	if (p == NULL)
//	{
//		perror("main");//main:xxxxxx
//		printf("malloc error\n");
//		return 0;
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", p[i]);
//	}
//	//���տռ�
//	free(p);
//	p = NULL;
//	return 0;
//}


//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//		free(p);
//		p = NULL;
//	return 0;
//}

//int main()
//{
//	//int arr[10];//ջ��
//
//	//��̬�ڴ濪��
//	int* p = (int*)malloc(10 * sizeof(int));
//	//ʹ����Щ�ռ��ʱ��
//	if (p == NULL)
//	{
//		perror("main");
//		return 1;
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		*(p + i) = 5;
//	}
//	//������Ҫpָ��Ŀռ������Ҫ20��int�ռ�
//	//realloc����
//	int* ptr = realloc(p, 20 * sizeof(int));
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//
//	//���տռ�
//	free(p);
//	p = NULL;
//	return 0;
//}


//int main()
//{
//	int* p = (int*)realloc(NULL, 40);//����������malloc��ֱ���ڶ�������40�ռ�
//	return 0;
//}



//��̬�ڴ濪�ٳ�������
//1.��NULLָ��Ľ����ò���
//int main()
//{
//	int* p = malloc(1000000000);
//	//��malloc�����пղ���
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}

//mallocע��Ұָ����ָ������



//��������
struct S
{
	int n;
	int arr[0];//��Сδ֪
};
int main()
{
	//����arr�Ĵ�С��10������
	struct S* ps = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(int));
	ps->n = 10;
	int i = 0;
	for (i = 0;i < 10;i++)
	{
		ps->arr[i] = i;
	}
	//����
	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S)) + 20 * sizeof(int));
	if (ptr != NULL)
	{
		ps = ptr;
	}
	//�ͷ�
	free(ps);
	ps = NULL;
	//struct S n = { 0 };
	//printf("%d", sizeof(n));//������������С���������δ����С
	return 0;
}