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

//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int k = 7;//要查找的数字
//    //在arr这个有序的数组中查找k（7）的值
//    int sz = sizeof(arr) / sizeof(arr[0]);//数组的元素个数
//    int left = 0;
//    int right = sz-1;
//
//    while (left<=right)
//    {
//        int mid = (right + left) / 2;
//        if (arr[mid] < k)
//        {
//            left = mid + 1;
//        }
//        else if (arr[mid] > k)
//        {
//            right = mid - 1;
//        }
//        else
//        {
//            printf("找到了，下标是：%d\n", mid);
//            break;
//        }
//    }
//    if (left > right)
//    {
//        printf("找不到\n");
//    }
//    return 0;
//}

//welcome to nanjing!!!
//w###################!
//we#################!!
//...

//#include<string.h>
//#include<windows.h>
//int main()
//{
//    char arr1[] = "welcome to nanjing!!!";
//    char arr2[] = "#####################";
//    int left = 0;
//    int right = strlen(arr1) - 1;
//
//    while (left <= right)
//    {
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        printf("%s\n", arr2);
//        Sleep(1000);//睡眠1秒 windows.h
//        system("cls");//清空屏幕
//        left++;
//        right--;
//    }
//    printf("%s\n", arr1);
//    return 0;
//}


//最多登陆三次
 
//#include<string.h>
//int main()
//{
//    int i = 0;
//    char password[20] = { 0 };
//    for (i = 0;i < 3;i++)
//    {
//        printf("请输入密码：");
//        scanf("%s", password);
//        //两个字符串比较，不能使用==，应该使用strcmp
//        if (strcmp(password, "123456")==0)
//        {
//            printf("登陆成功\n");
//            break;
//        }
//        else
//        {
//            printf("密码错误，重新输入\n");
//        }
//    }
//    if (i == 3)
//    {
//        printf("三次密码均错误，退出程序\n");
//    }
//
//    return 0;
//}


//猜数字游戏
//1、自动产生一个1-100之间的随机数
//2、猜数字
//   a.猜对了
//   b.猜错了
// 3、一直玩
//

//#include<stdlib.h>
//#include<time.h>
//#include<windows.h>
//void menu()
//{
//    printf("******************\n");
//    printf("*** 猜数字游戏 ***\n");
//    printf("***  1.  play  ***\n");
//    printf("***  0.  exit  ***\n");
//    printf("******************\n");
//}
//void game()
//{
//    //猜数字游戏实现
//    //1.生成随机数字
//    //rand函数返回了一个0-32767之间数字
//    //时间 - 时间戳
//    int ret = rand()%100+1;//%100的余数是0-99，然后+1，范围就是1-100
//    //2.猜数字
//    int guess = 0;
//    while (1)
//    {
//        printf("请猜数字(0-100)：");
//        scanf("%s", &guess);
//        if (guess < ret)
//        {
//            printf("猜小了\n");
//        }
//        else if(guess > ret)
//        {
//            printf("猜大了\n");
//        }
//        else 
//        {
//            printf("恭喜你，猜对了\n");
//            break;
//        }
//    }
//}
//int main()
//{
//    int input = 0;
//    int input1 = 0;
//    srand((unsigned int)time(NULL));
//    do
//    {
//        menu();//打印菜单
//        printf("请选择：");
//        scanf("%d", &input);
//        switch (input)
//        {
//        case 1:
//            //printf("猜数字：\n");
//            game();
//            break;
//        case 0:
//            printf("退出游戏\n");
//            break;
//        default:
//            printf("选择错误，重新选择\n");
//            break;
//        }
//    } while (input);
//    return 0;
//}


//go to 语句

//int main()
//{
//flag:
//    printf("hehe\n");
//    goto flag;
//    return 0;
//}

//关机程序
//只要运行起来，电脑就在1分钟内关机，如果输入：我是猪，就取消关机！

//#include<windows.h>
//#include<string.h>
//int main()
//{
//    //关机
//    char input[20] = { 0 };
//    system("shutdown -s -t 60");
// again:
//    printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//    scanf("%s", input);
//    if (strcmp(input,"我是猪")==0)
//    {
//        system("shutdown -a");
//    }
//    else
//    {
//        goto again;
//    }
//    return 0;
//}






//作业
//写代码讲三个整数从大到小输出

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//输入
//	scanf("%d%d%d", &a,&b,&c);
//	//调整输入顺序
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	//输出
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//写一个代码打印1-100之间所有3的倍数的数字

//int main()
//{
//	int i = 0;
//	//  for (i = 1;i <= 100;i++)
//	// {
//	//	if (i % 3 == 0)
//	//	{
//	//		printf("%d ", i);
//	//	}
//	//  }
//	for (i = 3;i <= 100;i+=3)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}


//给两个数，求最大公约数

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int max = 0;
//	if (m > n)
//		max = n;
//	else
//		max = m;
//
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("最大公约数就是：%d\n", max);
//			break;
//		}
//		max--;
//	}
//	return 0;
//}

//辗转相除法

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int t = 0;
//	while (t=m % n)
//	{
//		m = n;
//		n = t;
//	}
//	printf("%d\n", n);
//	return 0;
//}

//打印1000年到2000年之间的闰年

//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//判断y是不是闰年
//		//1.能被4整除，不能被1000整除是闰年
//		//2.能被400整除
//		if (y % 4 == 0)
//		{
//			if (y % 100 != 0)
//			{
//				printf("%d ", y);
//			}
//		}
//		if (y % 400 == 0)
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}

//打印100~200之间的素数

//int main()
//{
//	int i = 0;
//	for (i = 100;i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)//2 -> i-1之间的数字去除i，看能不能整除
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//#include<math.h>
//int main()
//{
//    int i = 0;
//    for (i = 101;i <= 200; i += 2)
//    {
//        int j = 0;
//        int flag = 1;//假设i就是素数
//        for (j = 2; j <= sqrt(i); j++)//2 -> i-1之间的数字去除i，看能不能整除
//        {
//            if (i % j == 0)
//            {
//                flag = 0;//不是素数
//                break;
//            }
//        }
//        if (flag == 1)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}