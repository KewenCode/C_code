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

int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	char* pc = arr;
	printf("%p\n", p);
	printf("%p\n", p+1);

	printf("%p\n", pc);
	printf("%p\n", pc+1);

	//1 2 3 4 5 6 7 8 9 a b c d e f
	//11111111
	//    8421 -> ������15 = 16�����µ�f - һ��0xռ4��������λ
	/*int a = 0x11223344;*///��ռ��32��������λ���˸�������λΪһ���ֽڣ������ĸ��ֽ�
	//int* pa = &a;
	//*pa = 0;

	/*char* pa = &a;
	*pa = 0;*/
	return 0;
}