#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//struct Book
//{
//	char name[20];
//	int price;
//	char id[12];
//}b4,b5;//b4,b5��ȫ�ֵ�
//
//int main()
//{
//	//�����Ǿֲ���
//	struct Book b1;
//
//	return 0;
//}


//�����ṹ������
//struct
//{
//	char c;
//	int i;
//}s;



//struct S
//{
//	char c;
//	int i;
//
//}s1, s2;
//struct B
//{
//	double d;
//	struct S s;
//	char c;
//};
//int main()
//{
//	/*struct S s3 = { 'x',20 };*/
//	struct B sb = { 3.14,('w',100),'q' };
//	printf("%lf %c %d %c\n", sb.d, sb.s.c, sb.s.i, sb.c);
//	return 0;
//}


//�ṹ���ڴ����

struct S
{
	int i;
	char c;
};
int main()
{
	struct S s = { 0 };
	printf("%d\n", sizeof(s));
}