#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//整型存储
//int main()
//{
//	int a = -10;
//	//原码
//	//10000000 00000000 00000000 00001010-原码
//	//11111111 11111111 11111111 11110101-反码
//	//11111111 11111111 11111111 11110110-补码
//	//FF FF FF F6
//	return 0;
//}

//数组在内存中以二进制形式存储
//对于整数来说
//整数的二进制表示有3种形式：原码、反码、补码
// 正整数：原码、反码、补码相同
// 负整数：原码、反码、补码要进行计算
// 按照数据数值直接写出的二进制序列就是原码
// 原码符号位不变，其他位按位取反，得到的就是反码
// 反码+1，得到的就是补码
// 
// 整数在内存中以补码形式存储
//

//int main()
//{
//	// 1-1
//	// 1+（-1）
//	// 00000000 00000000 00000000 00000001 - 1
//	// 11111111 11111111 11111111 11111111 - (-1)
//	// (1)0000000 00000000 00000000 00000000
//
//	return 0;
//}

//大端字节序和小端字节序
// 大端字节序：
// 把数据的低位字节序内容存放在高地址处，高位字节序内容存放在低地址处
// 小端字节序：
// 把数据的低位字节序内容存放在低地址处，高位字节序内容存放在高地址处
//
//int main()
//{
//	//写代码判断当前机器字节序
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}

//int main()
//{
//	char = -1;
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	//11111111
//	signed char b = -1;
//	//11111111
//	unsigned char c = -1;
//	//11111111
//	printf("%d %d %d", a, b, c);
//	//-1 -1 255
//	return 0;
//}

//补充
// 1.char是signed char还是unsigned char
// C语言并没有规定，取决于编译器
// 
// int是signed int
// short是signed short
//

//int main()
//{
//	char a = -128;
//	//10000000000000000000000010000000
//	//11111111111111111111111101111111
//	//11111111111111111111111110000000
//	//10000000
//	//11111111111111111111111110000000
//	//由于打印无符号整型，高位被忽略，不是符号位
//	printf("%u\n", a);
//	return 0;
//}

//int main()
//{
//	char a = 128;
//	//00000000000000000000000010000000
//	//10000000
//	//11111111111111111111111110000000
//	printf("%u\n", a);
//	return 0;
//}
//有符号的char取值范围 -128~127


//int main()
//{
//	int i = -20;
//	//10000000000000000000000000010100
//	//11111111111111111111111111101011
//	//11111111111111111111111111101100
//	unsigned int j = 10;
//	//00000000000000000000000000001010
//	printf("%d\n", i + j);
//	//11111111111111111111111111110110
//	//11111111111111111111111111110101
//	//10000000000000000000000000001010
//	return 0;
//}

//死循环 无符号，恒大于0
//int main()
//{
//	unsigned int i;
//	for (i = 9;i >= 0;i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}

#include <string.h>
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0;i < 1000;i++)
//	{
//		a[i] = -1 - i;
//	}
//	//128+127=255
//	//-1 -2 -3 ....-127 -128 127 ....2 1 0 -1
//	printf("%d", strlen(a));//找到\0 -> 0
//	return 0;
//}

//unsigned char i = 0;
//int main()
//{
//	for (i = 0;i <= 255;i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}