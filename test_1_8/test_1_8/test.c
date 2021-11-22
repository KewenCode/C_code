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

int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	char* pc = arr;
	printf("%p\n", p);
	printf("%p\n", p+1);

	printf("%p\n", pc);
	printf("%p\n", pc+1);

	//1 2 3 4 5 6 7 8 9 a b c d e f
	//11111111
	//    8421 -> 加起来15 = 16进制下的f - 一个0x占4个二进制位
	/*int a = 0x11223344;*///共占有32个二进制位，八个二进制位为一个字节，共有四个字节
	//int* pa = &a;
	//*pa = 0;

	/*char* pa = &a;
	*pa = 0;*/
	return 0;
}