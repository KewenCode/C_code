#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�⺯�� - ����ʹ�õĺ���

#include<string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello world";
//	strcpy(arr1, arr2);
//	printf("%s",arr1); //��ӡarr1����ַ���%s - ���ַ�����ʽ��ӡ
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

//дһ����������ȡ�ϴ�ֵ��

//int get_max(int x,int y)//intָget_max�᷵��һ�����͵�ֵ
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
//	//�����ĵ���
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}

//дһ��������������λλ��

////�����⣬�޷�ִ��
//void swap(int x, int y)//void �����������͵ĵط�,��ʾ��������������κ�ֵ��Ҳ����Ҫ����
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
//	printf("����ǰ��a=%d,b=%d\n", a, b);
//	swap(a, b);
//	printf("������a=%d,b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 10;//4���ֽڵĿռ�
//	int* pa = &a;//pa����һ��ָ�����
//	*pa
//
//	return 0;
//}

//swap�ڱ����õ�ʱ��ʵ�δ����βΣ���ʵ�β���ʵ�ε�һ����ʱ����
//�ı��βΣ����ܸı�ʵ��

//void swap(int* pa, int* pb)//void �����������͵ĵط�,��ʾ��������������κ�ֵ��Ҳ����Ҫ����
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
//	printf("����ǰ��a=%d,b=%d\n", a, b);
//	swap(&a, &b);
//	printf("������a=%d,b=%d\n", a, b);
//	return 0;
//}

//дһ���������ж��Ƿ�������

//int is_prime(int n)
//{
//	//2->n-1֮�������
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
//		//�ж�i�Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//�ж�����
//һ��������д�������ͣ�Ĭ��int����

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

//�������飬������ֲ���
//����arr���Σ�ʵ�ʴ��ݵĲ������鱾��
// ��������ȥ������Ԫ�صĵ�ַ
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
//	//�ҵ��˾ͷ����ҵ�λ�õ��±�
//	int ret = binary_search(arr, key, sz);
//	if (-1 == ret)
//	{
//		printf("�Ҳ���");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}

//����û��һ�Σ�num+1

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

//������Ƕ�׵��ú���ʽ����

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
//	////��ʽ����
//	//printf("%d\n", strlen("abc"));
//
//	printf("%d", printf("%d", printf("%d", 43)));//����ֵ��4321
//	//printf���ص����ַ�����,��ӡ�������ַ�������һ��
//	return 0;
//}

int main()
{
	int a = 10;
	int b = 20;
	//��������һ�� - ��֪
	int Add(int, int);
	
	int c = Add(a, b);
	printf("%d", c);
	return 0;
}
//�����Ķ���
int Add(int x, int y)
{
	return x + y;
}