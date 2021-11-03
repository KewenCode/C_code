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

int main()
{
	int a = 10;
	int b = 20;
	//函数声明一下 - 告知
	int Add(int, int);
	
	int c = Add(a, b);
	printf("%d", c);
	return 0;
}
//函数的定义
int Add(int x, int y)
{
	return x + y;
}