#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int* pa = &a;//�õ�����1��4���ֽ��е�һ���ֽڵĵ�ַ
//	*pa = 20;
//
//	return 0;
//}

//int main()
//{
//	int* pa;
//	char* pc;
//	float* pf;
//
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(pc));
//	printf("%d\n", sizeof(pf));
//
//	return 0;
//}

//ָ�����͵�����
//1.ָ�����;����ˣ�ָ������õ�Ȩ���ж��
//2.ָ�����;����ˣ�ָ����һ�������߶�Զ��������

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	char* pc = arr;
//	printf("%p\n", p);
//	printf("%p\n", p+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//
//	//1 2 3 4 5 6 7 8 9 a b c d e f
//	//11111111
//	//    8421 -> ������15 = 16�����µ�f - һ��0xռ4��������λ
//	/*int a = 0x11223344;*///��ռ��32��������λ���˸�������λΪһ���ֽڣ������ĸ��ֽ�
//	//int* pa = &a;
//	//*pa = 0;
//
//	/*char* pa = &a;
//	*pa = 0;*/
//	return 0;
//}


//Ұָ�룺ָ��ָ���λ���ǲ���֪��
//int main()
//{
//	//1.ָ��δ��ʼ��
//		//int* p;//p��һ���ֲ���ָ��������ֲ���������ʼ���Ļ���Ĭ�������ֵ
//		//*p = 20;//�Ƿ������ڴ�
//
//	//2.Խ�����
//		//int arr[10] = { 0 };
//		//int* p = arr;
//		//int i = 0;
//		//for (i = 0;i <= 10;i++)
//		//{
//		//	*p = i;
//		//	p++;
//		//}
//	return 0;
//}
//    //3.ָ��ָ��Ŀռ��ͷ�
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}


//int main()
//{
//	//����֪��pӦ�ó�ʼ��Ϊʲô��ַ��ʱ��ֱ�ӳ�ʼ��ΪNULL
//	//int* p = NULL;
//	//��ȷ֪����ʼ����ֵ
//	//int a = 10;
//	//int* ptr = &a;
//
//	//c���Ա����ǲ���������Խ����Ϊ��
//	int* p = NULL;
//
//	if (p != NULL)
//		*p = 10;
//	return 0;
//}

//ָ��Ӽ�����
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//	while (p <= pend)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//ָ���ָ�������ǰ�᣺
//	//����ָ��ָ��ͬһ��ռ�
//	printf("%d\n", &arr[9] - &arr[9]);
//	return 0;
//}

//ָ�����
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n",arr);//��������������Ԫ�صĵ�ַ
//	printf("%p\n", &arr[0]);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%p = %p\n", &arr[i], p + i);
//		*(p + i) = i;
//	}
//	return 0;
//}

//�������
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;//������
//	//[ ]��һ�������� 2��arr������������
//	// 
//	printf("%d\n", 2[arr]);
//	printf("%d\n", 2[p]);
//	printf("%d\n", arr[2]);
//	//arr[2] --> *(arr+2)
//
//	//arr[2] == *(arr+2) == *(p+2) == *(2+p) == *(2+arr) ==2[arr]
//	//2[arr] == *(2+arr)
//	return 0;
//}

//����ָ��
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa��ָ�������һ��ָ��
//	//ppa����һ������ָ�����
//	int* *ppa = pa;//paҲ�Ǹ�������&paȡ��pa���ڴ�����ʼ��ַ
//	return 0;
//}

//ָ������
//int main()
//{
//	int arr[10];//�������� - ������͵����������������
//	char ch[5];//�ַ����� - ��ŵ����ַ�
//	//ָ������ - ���ָ�������
//	int* parr[5];//����ָ������
//
//	return 0;
//}