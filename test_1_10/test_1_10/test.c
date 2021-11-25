#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//void test()
//{
//	int a = 10;
//	int b = 20;
//	int c = a + b;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		arr[i] = i + 1;
//	}
//	for (i = 0;i < sz;i++)
//	{
//		test();
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sum = 0;
//	int j = 0;
//	for (i = 1;j <= n;j++)
//	{
//		int ret = 1;
//		for (i = 1;i <= n;i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0;i <= 12;i++)//¿ÉÄÜËÀÑ­»·
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//
//	}
//	return 0;

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')//Óö»»ÐÐÍ£Ö¹
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest=*src//¿½±´¡°\0¡±
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')//Óö»»ÐÐÍ£Ö¹
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src//¿½±´¡°\0¡±
//}
void my_strcpy(char* dest, char* src)
{
	while (*dest++ = *src++;)//"\0" = 0 ¼È¿½±´ÁË\0£¬ÓÖÊ¹Ñ­»·Í£Ö¹
	{
		
	}
}
int main()
{
	char arr1[20] = "xxxxxxxxxx";
	char arr2[] = "hello";
	my_strcpy(arr1, arr2);
	//strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}
