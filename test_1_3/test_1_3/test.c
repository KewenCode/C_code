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

int main()
{
	//sizeof是个操作符
	// 不是函数
	// 计算类型或变量大小的
	//
	int a = 5;
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof a);

	return 0;
}