#define _CRT_SECURE_NO_WARNINGS 1
 
#include<stdio.h>

//int main()
//{
//	/*printf("c:\test\test.c");
//	printf("ab\ncd");
//	printf("\a\a\a");*/
//	//  \t :转义字符 转变了原来的意思
//	//   (are you ok??) -->(are you ok]  ??)-->三字母词  使用  \?\?  解决
//	//   printf("%c\n",'\'')  -->  \'  输出  '
//	//	 
//	//
//	// 
//	//   printf在打印数据时候，可以指定打印的格式
//	//   %d 整数  %c 单个字符  %s 字符串
//	//
//	return 0;
//}

//int main()
//{
//	printf("%c\n", '\130');//8进制的130
//	//X  --- ASCII码值88
//	printf("%c\n",'\101')//A - 65 - 8进制:101
//	printf("%c\n",'\x30')//十六进制下 48 - 0
//
//	return 0;
//}

//
//注释是用来解释复杂代码的
//
//int a = 10; //C++注释风格
//{ int main()
//int b = 0;
//*/ //C语言的注释风格 - 不支持嵌套注释
//*/
//	   }


//选择语句
//int main() 
//{
//	int input = 0; //输入值
//	printf("学习！\n");
//	printf("你好好学习了吗（1/0）？：");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好样的");
//	else
//		printf("不可以");
//
//	return 0;
//}


//循环语句
//int main() 
//{
//	int line = 0;
//	while (line < 300)
//	{
//		printf("写代码:%d\n", line);
//		line++;
//	}
//	if (line == 300)
//		printf("好样的");
//
//	return 0;
//}



//函数解决问题
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1,&num2);
//
//	/*int sum =num1 + num2;*/
//	//函数的方式解决
//	int sum = Add(num1, num2);
//
//	printf("%d\n", sum);
//	return 0;
//}


//数组 --一组相同类型的元素的集合
//10个整形1-10存起来
//数组是用下标访问的
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	//char ch[5] = { 'a','b','c' };//不完全初始化，剩余的默认为0
//	return 0;
//}



//int main()
//{
//	////int a = 9 / 2;
//	////初号两端都是整数执行整除法，一边有小数，则有小数。
//	//int a = 9 % 2;//% -- 取模（余）
//	//printf("%d\n", a);
//
//	int a = 2;
//	int b = a << 1;
//	//  <<  - 左移操作符，移动的是二进制位
//	// a - 2
//	// 000010  --> 000100
//	printf("%d\n",b);
//
//
//	// &按位与
//	// |按位或
//	// ^按位异或
//	//
//
//	return 0;
//
//}


//int main()
//{
//	//0表示假，非0就是真
//	int a = 10;
//	printf("%d\n", !a);
//
//	return 0;
//}

//int main()
//{
//	//sizeof是个操作符
//	// 不是函数
//	// 计算类型或变量大小的
//	//
//	int a = 5;
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof a);
//
//	return 0;
//}


//int main()
//{
//	//int a = 0;
//	//printf("%d\n", ~a);
//	//	//按位取反 把所有二进制位中的数字，把1变成0，0变成1
//	////一个整数的二进制表示有3种 
//	//// 针对负数
//	//// -1
//	//// 原码（100000000000000000000001）
//	//// 反码（111111111111111111111110）
//	//// 补码（111111111111111111111111）反码+1 内存中储存的是补码
//	//// 
//	//// 正整数：原码、反码、补码相同
//	////
//
//
//
//
//	//int a = 10;
//	//int b = ++a;
//	////前置++ 先++，后使用
//
//	int a = 10;
//	int b = a++;
//	//后置++ 先使用，后++
//
//	printf("%d\n", b);
//	printf("%d\n", a);
//
//	return 0;
//
//}

//int main()
//{
//	//强制类型转换
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	//&&并且 为真   ||或
//	int a = 3;
//	int b = 5;
//	int c = a && b;
//	printf("%d\n", c);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 3;
//	int max = 0;
//	max = a > b ? a : b;
//	//三目操作符 适用于简单的情况
//	printf("%d\n", b);
//
//	return 0;
//}


//int main()
//{
//	(2, 4 + 5, 6);//逗号表达式，逗号隔开的表达式
//	int a = 0;
//	int b = 3;
//	int c = 5;
//	int d = (a = b + 2, c = a - 2, b = c - 2);
//			//a=5        c=1       b=3
//	//从左向右依次计算
//	//整个表达式结果是最后一个表达式的结果
//	return 0;
//
//}

//int main()
//{
//	//[]下标引用操作符
//	int arr[4] = { 1,2,3,4 };
//	printf("%d", arr[2]);
//
//
//	//函数调用操作符
//	//调用函数的时候，函数名后边的 （） 就是函数调用操作符
//	printf("dede\n");
//
//	return 0;
//}




//关键字
//auto 自动变量 平时省略
// extern 声明外部符号的
// register 寄存器关键字
// (un)signed （无）有符号的
// static 静态的
// 
//


//typedef unsigned int u_int;
//int main()
//{
//	unsigned int unm = 100;
//	u_int num2 = 100;
//	//类型重定义
//	return 0;
//}

//static 静态的
//1、static修饰局部变量
// 2、static修饰全局变量
// 3、修饰函数
// 
//

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int u = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
////static修饰局部变量，改变了局部变量的生命周期（本质上是改变了变量的存储类型）


//extern声明外部符号
//extern int g_val;
////全局变量在整个工程中都可以用
////static声明的全局变量只能在本.c文件中使用
//int main()
//{
//	printf("%d", g_val);
//	return 0;
//}

//声明函数
//extern int Add(int ,int);
//int main()
//{
//	int a = 20;
//	int b = 10;
//	int sum = Add(a, b);
//	printf("%d ", sum);
//	return 0;
//}


//define是一个预处理指令
//1、define定义符号


//#define Max 1000
//int main()
//{
//	printf("%d", Max);
//	return 0;
//}

////2、define定义宏
//#define ADD(X,Y) ((X)+(Y))
//
//int main()
//{
//	printf("%d\n", 4*ADD(2, 3));
//
//	return 0;
//}


//int main()
//{
//	int a = 10;//a在内存中要分配空间 - 4个字节
//	printf("%p\n", &a);//%p专门用来打印地址
//
//	int * pa = &a;//pa是用来存放地址的，在C语言中pa叫指针变量
//	//*说明 pa是指针变量
//	//int 说明pa执行的对象是int类型的
//
//	*pa = 20;// * 解引用操作，*pa就是通过pa里面的地址，找到a
//
//	return 0;
//}

//结构体可以让C语言创建新的类型出来
//创建一个学生
struct Stu
{
	char name[20];//成员变量
	int age;
	double score;
};
int main()
{
	struct Stu s = {"张三",20,85.5};//结构体的创建和初始化
	printf("%s %d %lf\n", s.name, s.age, s.score);//结构体变量.成员变量

	struct Stu* ps = &s;
	printf("%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);

	printf("%s %d %lf\n", ps->name, ps->age, ps->score);//  结构体指针->成员变量名
	return 0;
}