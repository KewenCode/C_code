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

//int main()
//{
//	int a = 10;
//	int b = 20;
//	//��������һ�� - ��֪
//	int Add(int, int);
//	
//	int c = Add(a, b);
//	printf("%d", c);
//	return 0;
//}
////�����Ķ���
//int Add(int x, int y)
//{
//	return x + y;
//}


//������ �ݹ�  - ���»�С
//int main()
//{
//	printf("hehe\n");
//	main();
//
//	return 0;
//}

//����һ������ֵ���޷��ţ�����˳���ӡ����ÿһλ���磺����1234����� 1 2 3 4
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
//	//�ݹ� - �����Լ������Լ�
//	print(num);//print�������Դ�ӡ�����������ֵ�ÿһλ
//	return 0;
//}


//��д��������������ʱ���������ַ������ȡ�
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
//	//ģ��ʵ��һ��strlen����
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

//�׳�
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
//��һЩ���ܣ������õ����ķ�����Ҳ�����õݹ�ķ���

//���n��쳲�������
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


//1��100�����������г��ֶ��ٸ�����9
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

//����1/1-1/2....1/100��ֵ
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

//��10���������ֵ
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

//���9*9�˷��ھ���
int main()
{
	int i = 1;
	//��������
	for (i = 1;i <= 9; i++)
	{
		//��ӡһ��
		int j = 0;
		for (j = 1;j <= i; j++)
		{
			printf("%d*%d=%2d ", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}