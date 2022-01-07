#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	//int arr[10];//栈区
//
//	//动态内存开辟
//	int* p = (int*)malloc(10 * sizeof(int));
//	//使用这些空间的时候
//	if (p == NULL)
//	{
//		perror("main");//main:xxxxxx
//		printf("malloc error\n");
//		return 0;
//	}
//	//使用
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", p[i]);
//	}
//	//回收空间
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
//	//int arr[10];//栈区
//
//	//动态内存开辟
//	int* p = (int*)malloc(10 * sizeof(int));
//	//使用这些空间的时候
//	if (p == NULL)
//	{
//		perror("main");
//		return 1;
//	}
//	//使用
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		*(p + i) = 5;
//	}
//	//这里需要p指向的空间更大，需要20个int空间
//	//realloc调整
//	int* ptr = realloc(p, 20 * sizeof(int));
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//
//	//回收空间
//	free(p);
//	p = NULL;
//	return 0;
//}


//int main()
//{
//	int* p = (int*)realloc(NULL, 40);//功能类似于malloc，直接在堆区开辟40空间
//	return 0;
//}



//动态内存开辟常见错误
//1.对NULL指针的解引用操作
//int main()
//{
//	int* p = malloc(1000000000);
//	//对malloc进行判空操作
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}

//malloc注意野指针与指针引用



//柔性数组
struct S
{
	int n;
	int arr[0];//大小未知
};
int main()
{
	//期望arr的大小是10个整型
	struct S* ps = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(int));
	ps->n = 10;
	int i = 0;
	for (i = 0;i < 10;i++)
	{
		ps->arr[i] = i;
	}
	//增加
	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S)) + 20 * sizeof(int));
	if (ptr != NULL)
	{
		ps = ptr;
	}
	//释放
	free(ps);
	ps = NULL;
	//struct S n = { 0 };
	//printf("%d", sizeof(n));//柔性数组计算大小不包括最后未至大小
	return 0;
}