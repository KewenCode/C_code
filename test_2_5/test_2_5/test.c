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
//struct S
//{
//	int n;
//	int arr[0];//��Сδ֪
//};
//int main()
//{
//	//����arr�Ĵ�С��10������
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(int));
//	ps->n = 10;
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		ps->arr[i] = i;
//	}
//	//����
//	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S)) + 20 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	//�ͷ�
//	free(ps);
//	ps = NULL;
//	//struct S n = { 0 };
//	//printf("%d", sizeof(n));//������������С���������δ����С
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 0;i < n;i++)
//		{
//			int j = 0;
//			for (j = 0;j < n;j++)
//			{
//				if (i == j)
//					printf("*");
//				else if (i + j == n - 1)
//					printf("*");
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

int main()
{
	int arr[51] = { 0 };
	//����
	int n = 0;
	//n������
	scanf("%d", &n);
	int i = 0;
	//n����������
	for (i = 0;i < n;i++)
	{
		scanf("%d", &arr[i]);
	}
	//����Ҫ���������
	int m = 0;
	scanf("%d", &m);
	//��������
	for (i = n - 1;i >= 0;i--);
	{
		if (arr[i] > m)
			arr[i + 1] = arr[i];
		else
		{
			arr[i + 1] = m;
			break;
		}
	}
	if (i < 0)
		arr[0] = m;
	//���
	for (i = 0;i < n + 1;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}