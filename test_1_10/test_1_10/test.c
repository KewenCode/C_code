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
//	for (i = 0;i <= 12;i++)//������ѭ��
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//
//	}
//	return 0;

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')//������ֹͣ
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest=*src//������\0��
//}
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')//������ֹͣ
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src//������\0��
//}
//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++;)//"\0" = 0 �ȿ�����\0����ʹѭ��ֹͣ
//	{
//		
//	}
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxx";
//	char arr2[] = "hello";
//	my_strcpy(arr1, arr2);
//	//strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


////ģ��ʵ��strcopy
//#include <string.h>
////const ���α�������������ͱ���Ϊ�����������ܱ��޸ģ����������Ǳ���
//void my_strcpy(char* dest, const char* src)
//{
//	assert(src != NULL);//����
//	assert(dest != NULL);//����
//	while (*dest++ = *src++;)
//	{
//		
//	}
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxx";
//	char arr2[] = "hello";
//	my_strcpy(arr1,arr2);//1.Ŀ��ռ����ʼ��ַ 2.Դ�ռ����ʼ��ַ
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	const int num = 10;
//	//num = 20;//err
//	const int* p = &num;
//	//const����ָ�������ʱ��
//	//const�������*����ߣ����ε���*p����ʾָ��ָ������ݣ��ǲ���ͨ��ָ��ı��
//	//����ָ����������ǿ����޸ĵ�
//	//const�������*���ұߣ����ε���ָ�����p����ʾָ��������ܱ��ı�
//	//����ָ��ָ������ݿ����޸ĵ�
//	*p = 20;
//	return 0;
//}

//strcopy��������Ŀ��ռ����ʼ��ַ

//strlen ���ַ�������
// my_strlen
// 1.const
// 2,assert
//

#include <assert.h>
//size_t - unsigned int

//size_t my_strlen(const char* str)
//{
//	//assert(str != NULL);
//	assert(str);
//	int count = 0;
//	while (*str++ != '\0')
//	{
//		//str++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

      //NumberOf1���������n�Ķ����Ʋ����м���1
////int NumberOf1(unsigned int n)
////{
////	//15%2=1
////	//15/2=7
////	//7%2=1
////	//7/2=3
////	//����
////	int count = 0;
////	while (n)
////	{
////		if (n % 2 == 1)
////		{
////			count++;
////		}
////		n /= 2;
////	}
////	return count;
////}
//
//int NumberOf1(unsigned int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0;i < 32;i++)
//	{
//		if ((n >> 1) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
////n = n&(n-1)
////n = 15
//// 1111 n
//// 1110 n-1
//// 1110 n
//// 1101 n-1
//// 1100 n
//// 1001 n-1
//// 1000 n
//// 0111 n-1
//// 0000 n
//// 
////
//
//int main()
//{
//	int n = 0;
//	int ret = NumberOf1(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}


     //����������ͬλ����
//int main()
//{
//    int m = 0;
//    int n = 0;
//    int i = 0;
//    int count = 0;
//    scanf("%d %d", &m, &n);
//    int ret = m ^ n;//��ͬΪ0������Ϊ1
//   /* for (i = 0;i < 32;i++)
//    {
//        if ((m >> 1) & 1 != (n >> 1) & 1)
//        {
//            count++;
//        }
//    }*/
//    printf("%d\n", count);
//    return 0;
//}


int main()
{
    int n = 0;
    scanf("%d", &n);
    //��ȡn�Ķ������е�����λ��ż��λ
    int i = 0;
    //��ӡż��λ
    for (i = 31;i >= 1;i -= 2)
    {
        printf("%d ", (n >> i) & 1);
    }
    printf("\n");
    //��ӡ����λ
    for (i = 30;i >= 0;i -= 2)
    {
        printf("%d ", (n >> i) & 1);
    }
    return 0;
}