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

//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//int main()
//{
//	struct S s = { 0 };
//
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//����ԭ��
//1.��֤һ���Զ�ȡ 2.��֤��ͬƽ̨����



//��Ĭ�϶�������Ϊ2
//#pragma pack(2)
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	return 0;
//}


//λ������
//struct A
//{
//	int _a : 2;//_a��Առ2������λ
//	int _b : 5;//_b��Առ5������λ
//	int _c : 10;//_c��Առ10������λ
//	int _d : 30;//_d��Առ30������λ
//
//};

//ö��
//enum Colour
//{
//	RED,
//	GREEN,
//	BLUE
//};
//int main()
//{
//	enum Colour c = BLUE;
//	return 0;
//}


//���ϣ������壩
int check_sys()
{
	union Un
	{
		char c;//1
		int i;//4
	}u;
	u.i = 1;
	return u.c;
	//����1����С��
	//����0���Ǵ��
}
int main()
{
	int ret = check_sys();
	return 0;
}