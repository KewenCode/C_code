#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//算数操作符

//int main()
//{
//	/*int a = 6 / 5;
//	printf("%d", a);*/
//
//	/*float a = 6 / 5;
//	printf("%f", a);*/
//	
//	float a = 6.0 / 5;//打印小数，至少保证除数和被除数有一个是浮点数
//	printf("%f", a);
//
//	return 0;
//}

//int main()
//{
//	int a = 7 % 3;//模两端必须是整数
//	return 0;
//
//}


//int main()
//{
//	int a = 2;
//	//把a的二进制位向左移动一位
//	int b = a << 1;
//	//当前右移操作符是：算术右移
//	printf("b=%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	// ^ - 按（2进制）位异或
//	//对应二进制位异或
//	//规则：相同为0，相异为1
//	int c = a ^ b;
//	// 
//	//00000000 00000000 00000000 00000011 - 3
//	//00000000 00000000 00000000 00000101 - 5
//	//00000000 00000000 00000000 00000110 - 6
//	
//	// | - 按（2进制）位或 - 合并（有1为1，都为0为0）
//	//int c = a | b;
//	// 
//	//00000000 00000000 00000000 00000011 - 3
//	//00000000 00000000 00000000 00000101 - 5
//	//00000000 00000000 00000000 00000111 - 7
//
//	//& - 按（2进制）位与 - 合并（有0为0，都为1为1）
//	//int c = a & b;
//	// 
//	//00000000 00000000 00000000 00000011 - 3
//	//00000000 00000000 00000000 00000101 - 5
//	//00000000 00000000 00000000 00000001 - 1
//
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d", a);
//	//00000000 00000000 00000000 00001101
//	//
//	int i = 0;
//	for (i = 1;i <= 32;i++)
//	{
//		int b = a & 1;
//		if (b == 1)
//		{
//			n++;
//		}
//		a = a >> 1;
//	}
//	printf("二进制含1的个数为：%d", n);
//	return 0;
//
//}


//int main()
//{
//	int flag = 5;
//	//flag为真
//	if (flag)
//	{
//		printf("hehe");
//	}
//	//flag为假
//	if (!flag)
//	{
//		printf("hehe");
//	}
//	return 0;
//}

//int main()
//{
//	short s = 5;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 2));
//	printf("%d\n", s);
//	//sizeof的表达式是不参与运算的
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	//10000000000000000000000000000001 - 原码
//	//11111111111111111111111111111110 - 反码
//	//11111111111111111111111111111111 - 补码
//	//~按位取反
//	//00000000000000000000000000000000
//	int b = ~a;;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 13;
//	//把a的二进制中的第5为置成1
//	a = a | (1 << 4);
//	//00000000000000000000000000001101
//	// 1<<4
//	//00000000000000000000000000010000
//	//00000000000000000000000000011101
//	printf("a=%d\n", a);
//	//把a的二进制中的第5为置成0
//	a = a & ~(1 << 4);
//	//00000000000000000000000000011101
//	//11111111111111111111111111101111
//	//00000000000000000000000000001101
//	printf("a=%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++;//后置++，先使用，再++
//	printf("%d\n", a);//11
//	printf("%d\n", b);//10
//	int a_after = 10;
//	int b_after = ++a_after;//前置++，先++，再使用
//	printf("%d\n", a_after);//11
//	printf("%d\n", b_after);//11
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%d\n", a--);//10
//	printf("%d\n", a);//9
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);//& - 取地址操作符
//	int *pa = &a;//pa是用来存放地址的 - pa就是一个指针变量
//	*pa = 20;//* - 解引用操作符 - 间接访问操作符
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//强制类型转换
//
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;//1,2,3,4  && - 遇假即停
//	i = a++ || ++b || d++;//2,2,3,4  || - 遇真即停
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	int b = 0;
//	if (a > 5)
//		b = 1;
//	else
//		b = -1;
//	//三目操作符
//	b = (a > 5 ? 1 : -1);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	//逗号表达式 - 要从左向右依次计算，但整个表达式的结果是最后一个表达式的结果
//	int d = (c = 5, a = c + 3, b = a - 4, c += 5);
//	printf("d=%d\n", d);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[4]);//[] - 下标引用操作符
//	//{ } 的操作数是2个，arr,4
//	return 0;
//}


//函数的定义
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数的调用
//	int ret = Add(a, b);// ( ) - 函数调用操作符
//
//	return 0;
//}

//结构成员访问操作符
//.
//->

//结构体
//

//struct Book
//{
//	char name[20];
//	char id[20];
//	int price;
//};
//
//int main()
//{
//	//结构体变量名.成员名
//	struct Book b = { "C语言","c20211119", 55 };
//	//printf("书名：%s\n",b.name);
//	//printf("书号：%s\n",b.id);
//	//printf("价格：%d\n",b.price);
//
//	struct Book* pb = &b;
//	printf("书名：%s\n",(*pb).name);
//	printf("书号：%s\n",(*pb).id);
//	printf("价格：%d\n",(*pb).price);
//
//	//结构体指针->成员名
//	printf("书名：%s\n", pb->name);
//	printf("书号：%s\n", pb->id);
//	printf("价格：%d\n", pb->price);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a + b * 7;
//	return 0;
//}

//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011 - a
//
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111 - b
//
//	char c = a + b;
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//	
//	//10000010 - c
//	//发现a和b都是char类型，都没有达到一个int大小
//	//这里就会发生 整型提升
//
//	printf("%d\n", c);//打印时c是int类型，需要再次整型提升
//	//11111111111111111111111110000010
//	//11111111111111111111111110000001
//	//10000000000000000000000001111110 - 126
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d", ret);
//	return 0;
//}

//int main()
//{
//	char str[] = "hello bit";
//	//[hello bit\0] - 0是转义字符，只有一个字符
//	printf("%d %d\n", sizeof(str), strlen(str));
//	//10 9
//	//strlen - 函数 - 求字符串长度的，找\0之前出现的字符个数
//	//sizeof - 操作符 - 计算变量/类型所占的内存大小，单位是字节
//	return 0;
//}


//void init(int arr[ ], int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[ ], int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[ ], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	init(arr, sz);
//	print(arr, sz);
//	return 0;
//}

int main()
{
	int arr1[] = { 1,3,5,7,9 };
	int arr2[] = { 2,4,6,8,10 };
	
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;

	for (i = 0;i < sz;i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	return 0;

}