#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int* pa = &a;//拿到的是1的4个字节中第一个字节的地址
//	*pa = 20;
//
//	return 0;
//}

//int main()
//{
//	int* pa;
//	char* pc;
//	float* pf;
//
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(pc));
//	printf("%d\n", sizeof(pf));
//
//	return 0;
//}

//指针类型的意义
//1.指针类型决定了：指针解引用的权限有多大
//2.指针类型决定了，指针走一步，能走多远（步长）

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	char* pc = arr;
//	printf("%p\n", p);
//	printf("%p\n", p+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//
//	//1 2 3 4 5 6 7 8 9 a b c d e f
//	//11111111
//	//    8421 -> 加起来15 = 16进制下的f - 一个0x占4个二进制位
//	/*int a = 0x11223344;*///共占有32个二进制位，八个二进制位为一个字节，共有四个字节
//	//int* pa = &a;
//	//*pa = 0;
//
//	/*char* pa = &a;
//	*pa = 0;*/
//	return 0;
//}


//野指针：指针指向的位置是不可知的
//int main()
//{
//	//1.指针未初始化
//		//int* p;//p是一个局部的指针变量，局部变量不初始化的话，默认是随机值
//		//*p = 20;//非法访问内存
//
//	//2.越界访问
//		//int arr[10] = { 0 };
//		//int* p = arr;
//		//int i = 0;
//		//for (i = 0;i <= 10;i++)
//		//{
//		//	*p = i;
//		//	p++;
//		//}
//	return 0;
//}
//    //3.指针指向的空间释放
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}


//int main()
//{
//	//当不知道p应该初始化为什么地址的时候，直接初始化为NULL
//	//int* p = NULL;
//	//明确知道初始化的值
//	//int a = 10;
//	//int* ptr = &a;
//
//	//c语言本身是不会检查数据越界行为的
//	int* p = NULL;
//
//	if (p != NULL)
//		*p = 10;
//	return 0;
//}

//指针加减运算
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//	while (p <= pend)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//指针和指针相减的前提：
//	//两个指针指向同一块空间
//	printf("%d\n", &arr[9] - &arr[9]);
//	return 0;
//}

//指针相减
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n",arr);//数组名是数组首元素的地址
//	printf("%p\n", &arr[0]);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%p = %p\n", &arr[i], p + i);
//		*(p + i) = i;
//	}
//	return 0;
//}

//数组组合
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;//数组名
//	//[ ]是一个操作符 2和arr是俩个操作数
//	// 
//	printf("%d\n", 2[arr]);
//	printf("%d\n", 2[p]);
//	printf("%d\n", arr[2]);
//	//arr[2] --> *(arr+2)
//
//	//arr[2] == *(arr+2) == *(p+2) == *(2+p) == *(2+arr) ==2[arr]
//	//2[arr] == *(2+arr)
//	return 0;
//}

//二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是指针变量，一级指针
//	//ppa就是一个二级指针变量
//	int* *ppa = pa;//pa也是个变量，&pa取出pa在内存中起始地址
//	return 0;
//}

//指针数组
//int main()
//{
//	int arr[10];//整型数组 - 存放整型的数组就是整型数组
//	char ch[5];//字符数组 - 存放的是字符
//	//指针数组 - 存放指针的数组
//	int* parr[5];//整型指针数组
//
//	return 0;
//}