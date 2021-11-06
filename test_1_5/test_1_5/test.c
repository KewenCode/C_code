#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//库函数 - 大量使用的函数

#include<string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello world";
//	strcpy(arr1, arr2);
//	printf("%s",arr1); //打印arr1这个字符串%s - 以字符串形式打印
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "hallo world";
//	memset(arr, 'x', 5);
//	printf("%s", arr);
//	return 0;
//}

//写一个函数，获取较大值。

//int get_max(int x,int y)//int指get_max会返回一个整型的值
//{
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数的调用
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}

//写一个函数，交换两位位置

////有问题，无法执行
//void swap(int x, int y)//void 函数返回类型的地方,表示这个函数不返回任何值，也不需要返回
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a=%d,b=%d\n", a, b);
//	swap(a, b);
//	printf("交换后：a=%d,b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 10;//4个字节的空间
//	int* pa = &a;//pa就是一个指针变量
//	*pa
//
//	return 0;
//}

//swap在被调用的时候，实参传给形参，其实形参是实参的一份临时拷贝
//改变形参，不能改变实参

//void swap(int* pa, int* pb)//void 函数返回类型的地方,表示这个函数不返回任何值，也不需要返回
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a=%d,b=%d\n", a, b);
//	swap(&a, &b);
//	printf("交换后：a=%d,b=%d\n", a, b);
//	return 0;
//}

//写一个函数，判断是否是素数

//int is_prime(int n)
//{
//	//2->n-1之间的数字
//	int j = 0;
//	for (j = 2;j < n;j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//判断闰年
//一个函数不写返回类型，默认int类型

//int is_leap_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int y = 0;
//	int x = 1;
//	for (y = 1000;y <= 2000;y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}

//整型数组，有序二分查找
//数组arr传参，实际传递的不是数组本身
// 仅仅传过去了数组元素的地址
//

//int binary_search(int a[], int k, int s)
//{
//	int left = 0;
//	int right = s - 1;
//	int mid = (left + right) / 2;
//	while(left <= right)
//	{
//		if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//找到了就返回找到位置的下标
//	int ret = binary_search(arr, key, sz);
//	if (-1 == ret)
//	{
//		printf("找不到");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}

//函数没用一次，num+1

//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	return 0;
//}

//函数的嵌套调用和链式访问

//void test3()
//{
//	printf("hehe\n");
//}
//int test2()
//{
//	test3();
//	return 0;
//}
//int main()
//{
//	test2();
//	return 0;
//}


//int main()
//{
//	//int len = strlen("abc");
//	//printf("%d\n", len);
//	////链式访问
//	//printf("%d\n", strlen("abc"));
//
//	printf("%d", printf("%d", printf("%d", 43)));//返回值：4321
//	//printf返回的是字符个数,打印跟返回字符个数不一样
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数声明一下 - 告知
//	int Add(int, int);
//	
//	int c = Add(a, b);
//	printf("%d", c);
//	return 0;
//}
////函数的定义
//int Add(int x, int y)
//{
//	return x + y;
//}


//函数的 递归  - 大事化小
//int main()
//{
//	printf("hehe\n");
//	main();
//
//	return 0;
//}

//接收一个整型值（无符号），按顺序打印它的每一位。如：输入1234，输出 1 2 3 4
// 1234%10=        4
// 1234/10=123%10 =3
// 123/10 =12/10  =2
// 12/10  =1%10   =1
// 1/10   =0

//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//1234
//	//递归 - 函数自己调用自己
//	print(num);//print函数可以打印参数部分数字的每一位
//	return 0;
//}


//编写函数不允许创建临时变量，求字符串长度。
//int my_strlen(char* str)
//{
//	//////int count = 0;
//	//////while (*str != '\0')
//	//////{
//	//////	count++;
//	//////	str++;
//	//////}
//	//////return count;
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	//['b'] ['i'] ['t'] ['\0']
//	//模拟实现一个strlen函数
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

//阶乘
//int Fac(int n);
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d", ret);
//	return 0;
//}
//有一些功能，可以用迭代的方法，也可以用递归的方法

//求第n个斐波那契数
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while(n>2)
//	{
//				c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}


//1到100的所有整数中出现多少个数字9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//计算1/1-1/2....1/100的值
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	///*for (i = 1;i <= 100;i++)
//	//{
//	//	if (i % 2 == 0)
//	//		sum -= 1.0 / i;
//	//	else
//	//		sum += 1.0 / i;
//	//}*/
//	int flag = 1;
//	for (i = 1;i <= 100;i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//求10个整数最大值
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int max = arr[0];
//	int i = 0;
//	for (i = 1;i < 10;i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("%d", max);
//	return 0;
//}

//输出9*9乘法口诀表
int main()
{
	int i = 1;
	//行数控制
	for (i = 1;i <= 9; i++)
	{
		//打印一行
		int j = 0;
		for (j = 1;j <= i; j++)
		{
			printf("%d*%d=%2d ", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}