#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//struct Book
//{
//	char name[20];
//	int price;
//	char id[12];
//}b4,b5;//b4,b5是全局的
//
//int main()
//{
//	//这里是局部的
//	struct Book b1;
//
//	return 0;
//}


//匿名结构体类型
//struct
//{
//	char c;
//	int i;
//}s;



//struct S
//{
//	char c;
//	int i;
//
//}s1, s2;
//struct B
//{
//	double d;
//	struct S s;
//	char c;
//};
//int main()
//{
//	/*struct S s3 = { 'x',20 };*/
//	struct B sb = { 3.14,('w',100),'q' };
//	printf("%lf %c %d %c\n", sb.d, sb.s.c, sb.s.i, sb.c);
//	return 0;
//}


//结构体内存对齐

//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//int main()
//{
//	struct S s = { 0 };
//
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//对齐原因
//1.保证一次性读取 2.保证不同平台兼容



//把默认对齐数改为2
//#pragma pack(2)
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	return 0;
//}


//位段类型
//struct A
//{
//	int _a : 2;//_a成员占2个比特位
//	int _b : 5;//_b成员占5个比特位
//	int _c : 10;//_c成员占10个比特位
//	int _d : 30;//_d成员占30个比特位
//
//};

//枚举
//enum Colour
//{
//	RED,
//	GREEN,
//	BLUE
//};
//int main()
//{
//	enum Colour c = BLUE;
//	return 0;
//}


//联合（共用体）
int check_sys()
{
	union Un
	{
		char c;//1
		int i;//4
	}u;
	u.i = 1;
	return u.c;
	//返回1就是小端
	//返回0就是大端
}
int main()
{
	int ret = check_sys();
	return 0;
}