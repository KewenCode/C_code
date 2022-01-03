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

int main()
{
	//int arr[10];//栈区

	//动态内存开辟
	int* p = (int*)malloc(10 * sizeof(int));
	//使用这些空间的时候
	if (p == NULL)
	{
		perror("main");
		return 1;
	}
	//使用
	int i = 0;
	for (i = 0;i < 10;i++)
	{
		*(p + i) = 5;
	}
	//这里需要p指向的空间更大，需要20个int空间
	//realloc调整
	int* ptr = realloc(p, 20 * sizeof(int));
	if (ptr != NULL)
	{
		p = ptr;
	}

	//回收空间
	free(p);
	p = NULL;
	return 0;
}


int main()
{
	int* p = (int*)realloc(NULL, 40);//功能类似于malloc，直接在堆区开辟40空间
	return 0;
}