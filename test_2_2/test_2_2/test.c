#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int main()
//{
//	/*char ch = 'q';
//	char* pc = &ch;*/
//
//	//本质上是吧“hello bit”这个字符串的首字符的地址存储在了ps中
//	char* ps = "hello bit";
//	printf("%c\n", *ps);
//
//	return 0;
//}

//int main()
//{
//	//指针数组
//	//数组- 数组中存放的是指针（地址）
//	//int* arr[4];//存放整型指针的数组
//
//	int a[5] = { 1,2,3,4,5 };
//	int b[] = { 2,3,4,5,6 };
//	int c[] = { 3,4,5,6,7 };
//	int* arr[3] = { a,b,c };
//	int i = 0;
//	for (i = 0;i < 3;i++)
//	{
//		int j = 0;
//		for (j = 0;j < 5;j++)
//		{
//			//printf("%d ", *(arr[i] + j));
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//数组指针
//指向数组的指针
// 
// 是一种指针
// 整型指针：int*p - 指向整型的指针
// 字符指针 - 指向字符的指针
//

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char ch = 'w';
//	char* pc = &ch;
//
//	int arr[10] = { 1,2,3,4,5 };
//	int (*parr)[10] = &arr;
//	//parr就是一个数组指针 - 存放的是数组的地址
//
//	double* d[5];
//	double* (*pd)[5] = &d;
//
//	//arr - 数组首元素的地址 - arr[0]的地址
//	return 0;
//}


//数组名是首元素地址
//2个例外
// 1.sizeof(数组名) - 数组名表示整个数组，计算的是整个数组的大小，单位是字节
// 2.数组名 - 数组名表示整个数组，取出的是整个数组的地址
//

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0;i < 10 ;i++)
//	{
//		printf("%d\n", *((*pa) + i));
//	}
//	return 0;
//}


//void print(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < r;i++)
//	{
//		for (j = 0;j < c;j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
////p是数组指针
//void print2(int(*p)[5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < r;i++)
//	{
//		for (j = 0;j < c.j++)
//		{
//			printf("%d ", *(*(p + i)+j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	//int a[5];
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	/*print(arr, 3, 5);*/
//	print2(arr, 3, 5);//arr数组名，表示数组首元素地址
//	return 0;
//}


//int i;
//int main()
//{
//	i--;
//	//sizeof这个操作符，返回的结果是unsigned int
//	if (i > sizeof(i))
//	{
//		printf(">")
//	}
//	else
//	{
//		printf("<")
//	}
//	return 0;
//}

//求sn=a+aa+aaa+aaaa+aaaaa的前五项之和，其中a是一个数字
//int main()
//{
//	//计算由a组成的前n项之和
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int ret = 0;
//	for (i = 0;i < n;i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//打印arr数组
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//求1-100000之间所有的水仙花数
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0;i <= 100000;i++)
//	{
//		int n = 1;
//		int tmp = i;
//		while (tmp / 10)
//		{
//			n++;
//			tmp = tmp / 10;
//		}
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			//pow是用来求次方
//			sum += pow(tmp % 10, n);
//			tmp = tmp / 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


#include <assert.h>
//void reverse(char* str)
//{
//	assert(str != NULL);
//	int len = strlen(str);
//	char* left = str;
//	char* right = (str + len - 1);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//打印菱形
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	for (i = 0;i < line;i++)
//	{
//		int j = 0;
//		for (j = 0;j < line - 1 - i;j++)
//		{
//			printf(" ");
//		}
//		for (j = 0;j < i * 2 + 1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0;i < line - 1;i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0;j < 2 * (line - 1 - i) - 1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//一瓶汽水一元，两个瓶盖换一瓶，20元多少
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = 0;
//	if (money > 0)
//	{
//		total = 2 * money - 1;
//	}
//
//	//int total = money;
//	//int empty = total;
//	//while (empty >= 2)
//	//{
//	//	total += empty / 2;
//	//	empty = empty / 2 + empty % 2;
//	//}
//	//printf("%d\n", total);
//
//	return 0;
//}

//输入数组，调整奇数位
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0;i <= sz;i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		//从前方后找偶数
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//从后往前找奇数
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right++;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	print(arr, sz);
//	return 0;
//}

//32位大端模式处理器上变量b
//int main()
//{
//	unsigned int a = 0x1234;
//	// 00 00 12 34
//	//强制类型转换后，只取第一个地址 00
//	unsigned char b = *(unsigned char*)&a;;
//	return 0;
//}

//打印杨辉三角
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < 10;i++)
//	{
//		for(j = 0;j <= i;j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (j == i)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0;i < 10;i++)
//	{
//		for (j = 0;j <= i;j++)
//		{
//			printf("%3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int killer = 0;
//	for (killer = 'A';killer <= 'D';killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		{
//			printf("%c\n", killer);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1;a <= 5;a++)
//	{
//		for (b = 1;b <= 5;b++)
//		{
//			for (c = 1;c <= 5;c++)
//			{
//				for (d = 1;d <= 5;d++)
//				{
//					for (e = 1;e <= 5;e++)
//					{
//						if (((b == a) + (a == 3) == 1)
//							&& ((b == 2) + (e == 4) == 1)
//							&& ((c == 1) + (d == 2) == 1)
//							&& ((c == 5) + (d == 3) == 1)
//							&& ((e == 4) + (a == 1) == 1)
//							)
//						{
//							if (a* b* c* d* e == 120)
//							{
//								printf("a=%d b==%d c=%d d=%d e=%d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


//一级指针传参
//void print(int* ptr, int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", *(ptr + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / ssizeof(arr[0]);
//	//p是一级指针
//	print(p, sz);
//	return 0;
//}

//二级指针传参
//void test(int** p2)
//{
//	**p2 = 20;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;//一级指针
//	int** ppa = &pa;//二级指针
//	
//	test(ppa);
//	test(&pa);
//
//	int* arr[10] = { 0 };
//	test(arr);//传存放一级指针的数组
//
//	return 0;
//}

//函数指针：指向函数的指针！
//存放函数地址的指针
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	char ch = 'W';
//	char* pc = &ch;
//
//	int arr[10] = { 0 };
//	int (*parr)[10] = &arr;//取出数组地址
//	//parr是指向数组的指针 - 存放是数组的地址
//
//	//函数指针 - 存放函数地址
//	//&函数名 - 取到的就是函数的地址
//	/*printf("%p\n", &arr);*/
//	int (*pf)(int, int) = &Add;
//	return 0;
//}

//int Add(int x,int y)
//{
//	return x + y;
//}
//int main()
//{
//	//pt就是一个函数的指针变量
//	int (*pt)(int, int) = &Add;
//	int (*pt)(int, int) = Add;//Add == pt
//	int ret = (*pt)(3, 5);
//	// * 是摆设 
//	int ret = Add(3, 5);
//	int ret = pt(3, 5);
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	(*(void(*)())0)();
//	//调用0地址处的函数
//	//该函数无参，返回类型是void
//	// 1.void(*)() - 函数指针类型
//	// 2.（void(*)())0 - 对0进行强制类型转换，被解释为一个函数地址
//	// 3.*（void(*)()）0 - 对0地址进行了解引用操作
//	// 4.(*(void(*)())0)() - 调用0地址处的函数 
//	//
//	return 0;
//}

//void(*signal(int, void(*)(int)))(int);
////typedef - 对类型进行重定义
//typedef void(*pfun_t)(int);//对void(*)(int)的函数指针类型重命名为pyin_t
//pfun_t signal(int, pfun_t);
//
//// 1.signal和（）先结合，说明signnal是函数名
//// 2.signal函数的第一个参数的类型是int。第二个参数的类型是函数指针
//// 该函数指针，指向一个参数为int，返回类型是void的函数
//// 3.signal函数的返回类型也是一个函数指针
//// 该函数指针，指向一个参数为int，返回类型是void的函数
//// signal是一个函数声明
////

//函数指针数组
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	int(*pf1)(int, int) = Add;
//	int(*pf2)(int, int) = Sub;
//	int(*pfArr[2])(int, int) = { Add,Sub };//函数指针数组
//
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("*** 1.add 2.sub ***\n");
//	printf("*** 3.mul 4.dic ***\n");
//	printf("*** 0.exit ***\n");
//}
//int main()
//{
//	//计算器 - 计算整型加减乘除
//	int input = 0;
//	do {
//		menu();
//		
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//
//		printf("请选择\n");
//		scanf("%d", &input);
//
//		if (input >= 1 && input <= 4)
//		{
//
//			//pfArr是函数指针
//			//转移表 - 《c和指针》
//			int (*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };//将下表对应
//			printf("请输入两个操作数\n");
//			scanf("%d %d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("ret=%d\n", ret);
//		}
//		else if(input==0)
//		{
//			printf("退出程序\n");
//			break;
//		}
//		else
//		{
//			printf("重新选择\n");
//		}
//		/*switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数\n");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 2:
//			printf("请输入两个操作数\n");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个操作数\n");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 4:
//			printf("请输入两个操作数\n");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("重新选择\n");
//			break;
//		}*/
//	} while (input);
//	return 0;
//}
////回调函数
//int calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数\n");
//	scanf("%d %d", &x, &y);
//	return pf(x, y);
//}

//冒泡排序
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//冒泡排序趟数
//	for (i = 0;i < sz - 1;i++)
//	{
//		//一趟冒泡排序
//		int j = 0;
//		for (j = 0;j < sz - 1 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//交换
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	//升序
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//	return 0;
//}

//#include <stdlib.h>
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int test2()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//	return 0;
//}
//
//int sort_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//struct Stu
//{
//	char name[20];
//	int age;
//};
//void test2()
//{
//	//qsort对结构体排序
//	struct Stu s[3] = { {"zhangsan",30} ,{"lisi",23},{"wangwu",45} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//按年龄排序
//	qsort(s, sz, sizeof(s[0]), sort_age);
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}

//使用qsort实现一个冒泡排序
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0;i < width;i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort(void* base,
//            	int sz,
//            	int width,
//            	int (*cmp)(const void* e1, const void* e2)
//)
//{
//	int i = 0;
//	//趟数
//	for (i = 0;i < sz - 1;i++)
//	{
//		//一趟的排序
//		int j = 0;
//		for (j = 0;j < sz - 1;j++)
//		{
//			//两个元素比较
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				//交换
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//void test3()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//int main()
//{
//	test3();
//	return 0;
//}

//p[0] -> *(p+0)

//sizeof(a[0]) - 数组名a[0]单独放在数组内部
//a[0]表示整行
//sizeof(a[0])计算的是整行的大小

//struct Test
//{
//	int Name;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p的值为0x100000.如下表达式值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	printf("%p\n", p + 0x1);//0x100014
//	printf("%p\n", (unsigned long)p + 0x1);//0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100004
//	return 0;


//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);//point
//	printf("%s\n", *--*++cpp+3);// ((*(--*(++cpp)))+3) - er
//	printf("%s\n", *cpp[-2]+3);// (*(*(cpp-2))+3) - st
//	printf("%s\n", cpp[-1][-1]+1);// (*(*(cpp-1)-1)+1)ew
//	return 0;
//}
////需画图解决
////这里cpp、cp、c在print后并不会消失，会继承属性
////


//int* p = malloc(40);
////使用p指向的40个字节的空间
//free(p);


//杨氏矩阵
//时间复杂度小于O(N)
int find_num(int arr[3][3], int r, int c, int k)
{
	int x = 0;
	int y = c-1;
	while (x < r && y >= 0)
	{
		if (arr[x][y] < k)
		{
			x++;
		}
		else if (arr[x][y] > k)
		{
			y--;
		}
		else
		{
			printf("%d %d\n", x, y);
			return 1;
		}
	}
	return 0;
}
int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int k = 7;
	//如果找到返回1，找不到返回0
	int ret = find_num(arr, 3, 3, k);
	if (ret == 1)
	{
		printf("找到了\n");
	}
	else
	{
		printf("找不到了\n");
	}
	return 0;
}