#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int main()
//{
//	/*char ch = 'q';
//	char* pc = &ch;*/
//
//	//�������ǰɡ�hello bit������ַ��������ַ��ĵ�ַ�洢����ps��
//	char* ps = "hello bit";
//	printf("%c\n", *ps);
//
//	return 0;
//}

//int main()
//{
//	//ָ������
//	//����- �����д�ŵ���ָ�루��ַ��
//	//int* arr[4];//�������ָ�������
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

//����ָ��
//ָ�������ָ��
// 
// ��һ��ָ��
// ����ָ�룺int*p - ָ�����͵�ָ��
// �ַ�ָ�� - ָ���ַ���ָ��
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
//	//parr����һ������ָ�� - ��ŵ�������ĵ�ַ
//
//	double* d[5];
//	double* (*pd)[5] = &d;
//
//	//arr - ������Ԫ�صĵ�ַ - arr[0]�ĵ�ַ
//	return 0;
//}


//����������Ԫ�ص�ַ
//2������
// 1.sizeof(������) - ��������ʾ�������飬���������������Ĵ�С����λ���ֽ�
// 2.������ - ��������ʾ�������飬ȡ��������������ĵ�ַ
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
////p������ָ��
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
//	print2(arr, 3, 5);//arr����������ʾ������Ԫ�ص�ַ
//	return 0;
//}


//int i;
//int main()
//{
//	i--;
//	//sizeof��������������صĽ����unsigned int
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

//��sn=a+aa+aaa+aaaa+aaaaa��ǰ����֮�ͣ�����a��һ������
//int main()
//{
//	//������a��ɵ�ǰn��֮��
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

//��ӡarr����
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

//��1-100000֮�����е�ˮ�ɻ���
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
//			//pow��������η�
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


//��ӡ����
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

//һƿ��ˮһԪ������ƿ�ǻ�һƿ��20Ԫ����
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

//�������飬��������λ
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
//		//��ǰ������ż��
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//�Ӻ���ǰ������
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

//32λ���ģʽ�������ϱ���b
//int main()
//{
//	unsigned int a = 0x1234;
//	// 00 00 12 34
//	//ǿ������ת����ֻȡ��һ����ַ 00
//	unsigned char b = *(unsigned char*)&a;;
//	return 0;
//}

//��ӡ�������
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


//һ��ָ�봫��
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
//	//p��һ��ָ��
//	print(p, sz);
//	return 0;
//}

//����ָ�봫��
//void test(int** p2)
//{
//	**p2 = 20;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;//һ��ָ��
//	int** ppa = &pa;//����ָ��
//	
//	test(ppa);
//	test(&pa);
//
//	int* arr[10] = { 0 };
//	test(arr);//�����һ��ָ�������
//
//	return 0;
//}

//����ָ�룺ָ������ָ�룡
//��ź�����ַ��ָ��
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
//	int (*parr)[10] = &arr;//ȡ�������ַ
//	//parr��ָ�������ָ�� - ���������ĵ�ַ
//
//	//����ָ�� - ��ź�����ַ
//	//&������ - ȡ���ľ��Ǻ����ĵ�ַ
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
//	//pt����һ��������ָ�����
//	int (*pt)(int, int) = &Add;
//	int (*pt)(int, int) = Add;//Add == pt
//	int ret = (*pt)(3, 5);
//	// * �ǰ��� 
//	int ret = Add(3, 5);
//	int ret = pt(3, 5);
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	(*(void(*)())0)();
//	//����0��ַ���ĺ���
//	//�ú����޲Σ�����������void
//	// 1.void(*)() - ����ָ������
//	// 2.��void(*)())0 - ��0����ǿ������ת����������Ϊһ��������ַ
//	// 3.*��void(*)()��0 - ��0��ַ�����˽����ò���
//	// 4.(*(void(*)())0)() - ����0��ַ���ĺ��� 
//	//
//	return 0;
//}

//void(*signal(int, void(*)(int)))(int);
////typedef - �����ͽ����ض���
//typedef void(*pfun_t)(int);//��void(*)(int)�ĺ���ָ������������Ϊpyin_t
//pfun_t signal(int, pfun_t);
//
//// 1.signal�ͣ����Ƚ�ϣ�˵��signnal�Ǻ�����
//// 2.signal�����ĵ�һ��������������int���ڶ��������������Ǻ���ָ��
//// �ú���ָ�룬ָ��һ������Ϊint������������void�ĺ���
//// 3.signal�����ķ�������Ҳ��һ������ָ��
//// �ú���ָ�룬ָ��һ������Ϊint������������void�ĺ���
//// signal��һ����������
////

//����ָ������
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
//	int(*pfArr[2])(int, int) = { Add,Sub };//����ָ������
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
//	//������ - �������ͼӼ��˳�
//	int input = 0;
//	do {
//		menu();
//		
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//
//		printf("��ѡ��\n");
//		scanf("%d", &input);
//
//		if (input >= 1 && input <= 4)
//		{
//
//			//pfArr�Ǻ���ָ��
//			//ת�Ʊ� - ��c��ָ�롷
//			int (*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };//���±��Ӧ
//			printf("����������������\n");
//			scanf("%d %d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("ret=%d\n", ret);
//		}
//		else if(input==0)
//		{
//			printf("�˳�����\n");
//			break;
//		}
//		else
//		{
//			printf("����ѡ��\n");
//		}
//		/*switch (input)
//		{
//		case 1:
//			printf("����������������\n");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 2:
//			printf("����������������\n");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 3:
//			printf("����������������\n");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 4:
//			printf("����������������\n");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("����ѡ��\n");
//			break;
//		}*/
//	} while (input);
//	return 0;
//}
////�ص�����
//int calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("����������������\n");
//	scanf("%d %d", &x, &y);
//	return pf(x, y);
//}

//ð������
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//ð����������
//	for (i = 0;i < sz - 1;i++)
//	{
//		//һ��ð������
//		int j = 0;
//		for (j = 0;j < sz - 1 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//����
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
//	//����
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
//	//qsort�Խṹ������
//	struct Stu s[3] = { {"zhangsan",30} ,{"lisi",23},{"wangwu",45} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//����������
//	qsort(s, sz, sizeof(s[0]), sort_age);
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}

//ʹ��qsortʵ��һ��ð������
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
//	//����
//	for (i = 0;i < sz - 1;i++)
//	{
//		//һ�˵�����
//		int j = 0;
//		for (j = 0;j < sz - 1;j++)
//		{
//			//����Ԫ�رȽ�
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				//����
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

//sizeof(a[0]) - ������a[0]�������������ڲ�
//a[0]��ʾ����
//sizeof(a[0])����������еĴ�С

//struct Test
//{
//	int Name;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////����p��ֵΪ0x100000.���±��ʽֵ�ֱ�Ϊ���٣�
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
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
////�軭ͼ���
////����cpp��cp��c��print�󲢲�����ʧ����̳�����
////


//int* p = malloc(40);
////ʹ��pָ���40���ֽڵĿռ�
//free(p);


//���Ͼ���
//ʱ�临�Ӷ�С��O(N)
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
	//����ҵ�����1���Ҳ�������0
	int ret = find_num(arr, 3, 3, k);
	if (ret == 1)
	{
		printf("�ҵ���\n");
	}
	else
	{
		printf("�Ҳ�����\n");
	}
	return 0;
}