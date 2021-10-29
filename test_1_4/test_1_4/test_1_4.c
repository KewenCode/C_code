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

//switch语句
//defult没有顺序问题

//int main()
//{
//    int day = 0;
//    scanf("%d", &day);
//    switch (day)
//    {
//    case 1:
//        printf("星期一\n");
//        break;
//    case 2:
//        printf("星期二\n");
//        break;
//    case 3:
//        printf("星期三\n");
//        break;
//    case 4:
//        printf("星期四\n");
//        break;
//    case 5:
//        printf("星期五\n");
//        break;
//    case 6:
//        printf("星期六\n");
//        break;
//    case 7:
//        printf("星期天\n");
//        break;
//    default:
//        printf("输入错误\n");
//        break;
//    }
//    return 0;
//}
//


//while  语句

//int main()
//{
//    int i = 1;
//    //在while循环中，break用于永久的终止循环
//    //在while循环中，continue跳过本次循环continue后边的代码，直接去判断区域，看是否进行下一次循环
//    while (i <= 10)
//    {
//        if (i == 5)
//            break;
//
//        printf("%d ",i);
//        i++;
//    }
//    return 0;
//}

//getchar putchar EOF=enf of file 值是-1
//CTRL+Z - getchar 读取结束

int main()
{
    int ch = 0;
    while ((ch = getchar()) != EOF)
    {
        putchar(ch);
    }
    return 0;
}



