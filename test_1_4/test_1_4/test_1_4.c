#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d\n", &a, &b);
//	int m = max(a, b);
//	printf("%d\n", m);
//	//if (a > b)
//	//{
//	//	printf("%d\n", a);
//	//}
//	//else
//	//{
//	//	printf("%d\n", b);
//	//}
//	return 0;
//}



//分支语句
//if 语句
//分号隔开的就是一个语句

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}
//	else if (age >= 18 && age < 26)
//		printf("青年\n");
//	else if (age >= 26 && age < 40)
//		printf("中年\n");
//	else if (age >= 40 && age < 60)
//		printf("壮年\n");
//	else if (age >= 60 && age < 100)
//		printf("老年\n");
//	else
//		printf("老不死\n");
//	return 0;
//}



    //悬空else 就近匹配

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}



//判断一个数是否是奇数,并打印100以内的奇数
//while 方法

//int main()
//{
//	int num = 0;
//	while (num < 100)
//	{
//		if (num % 2 == 1)
//		{
//			printf("%d\n", num);
//		}
//		num++;
//	}
//	return 0;
//}

//for 方法

//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		if (i % 2 == 1)
//			printf("%d", i);
//	}
//	return 0;
//}





