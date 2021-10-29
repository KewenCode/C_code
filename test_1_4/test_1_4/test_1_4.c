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
//	int num = 0;  //初始化
//	while (num < 100)  //判断部分
//	{
//		if (num % 2 == 1)
//		{
//			printf("%d\n", num);
//		}
//		num++;  // 调整部分
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

//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        putchar(ch);
//        
//    }
//    return 0;
//}

        //查询密码

//int main()
//{
//    char password[20] = { 0 };
//    printf("请输入密码：");
//    scanf("%s", password);//123456
//    printf("请确认密码：（Y/N）");
//    //清理缓冲区
//    int tmp = 0;
//    while ((tmp = getchar()) != '\n')//getchar();处理‘\n’
//    {
//        ;
//    }
//    //清理缓冲区中多个字符
//    int ch = getchar();
//    if (ch = 'Y')
//    {
//        printf("确认成功\n");
//    }
//    else
//    {
//        printf("确认失败\n");
//    }
//    return 0;
//}

  //for 语句

//int main()
//{
//    int i = 0;
//    //判断部分的省略 - -判断部分恒为真
//    for (i = 1;i <= 10;i++)
//    {
//        if (i == 5)
//            break;
//        printf("%d ", i);
//    }
//    return 0;
//}

// do while 语句
//循环至少执行一次

//int main()
//{
//    int i = 1;
//    do
//    {
//        if (i == 5)
//            break;
//        printf("%d ", i);
//        i++;
//    } while (i <= 10);
//
//    return 0;
//}


//计算n的阶乘

//int main()
//{
//    int i = 0;
//    int n = 0;
//    int ret = 1;
//    scanf("%d",&n);
//    for (i = 1;i <= n;i++)
//    {
//        ret *= i;//ret = ret * i;
//    }
//    printf("%d", ret);
//    return 0;
//}


//计算1！+2！+3!......+10!(!是阶乘)

//int main()
//{
//    int i = 0;
//    int n = 0;
//    int ret = 1;
//    int sum = 0;
//    for (n = 1;n <= 10; n++)
//    {
//        ret = 1;//计算n的阶乘之前，把ret初始为1
//        for (i = 1;i <= n;i++)
//        {
//            ret *= i;//ret = ret * i;
//        }
//        sum += ret;
//    }
//    printf("%d", sum);
//    return 0;
//}

//int main()
//{
//    int n = 0;
//    int ret = 1;
//    int sum = 0;
//    for (n = 1;n <= 10; n++)
//    {
//        ret *= n;
//        sum += ret; 
//    }
//    printf("%d", sum);
//    return 0;
//}


//在一个有序数组中查找某个具体数字n
//折半查找 二分查找

int main()
{
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    int k = 7;//要查找的数字
    //在arr这个有序的数组中查找k（7）的值
    int sz = sizeof(arr) / sizeof(arr[0]);//数组的元素个数
    int left = 0;
    int right = sz-1;

    while (left<=right)
    {
        int mid = (right + left) / 2;
        if (arr[mid] < k)
        {
            left = mid + 1;
        }
        else if (arr[mid] > k)
        {
            right = mid - 1;
        }
        else
        {
            printf("找到了，下标是：%d\n", mid);
            break;
        }
    }
    if (left > right)
    {
        printf("找不到\n");
    }
    return 0;
}
