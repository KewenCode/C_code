#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�ṹ��

struct B
{
	char c;
	short s;
	double d;
};
struct Stu
{
	struct B sb;
	//�ṹ�ĳ�Ա����
	char name[20];
	int age;
	char id[20];
} s1,s2;//s1��s2Ҳ�ǽṹ�����
//s1��s2��ȫ�ֱ���

void print1(struct Stu t)
{
	printf("%c %d %lf %s %d %s\n", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
}
void print2(struct Stu *ps)
{
	printf("%c %d %lf %s %d %s\n", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
}
int main()
{
	//s�Ǿֲ�����
	struct Stu s = { {'w',20,3.14},"����",20,"20211124" };//����
	//���ʲ����� . ->

	/*printf("%d\n", s.sb.s);*/

	/*struct Stu* ps = &s;
	printf("%d\n", (*ps).sb.s);
	printf("%d\n", ps->sb.s);*/

	//дһ��������ӡs������
	print1(s);//��ֵ����
	print2(&s);//��ַ����

	return 0;
}


//ѹջ - ջ���Ƚ����������ȳ������ѵ���
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 3;
	int b = b;
	int c = 0;
	c = Add(a, b);
}