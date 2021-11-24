#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//结构体

struct B
{
	char c;
	short s;
	double d;
};
struct Stu
{
	struct B sb;
	//结构的成员变量
	char name[20];
	int age;
	char id[20];
} s1,s2;//s1和s2也是结构体变量
//s1和s2是全局变量

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
	//s是局部变量
	struct Stu s = { {'w',20,3.14},"张三",20,"20211124" };//对象
	//访问操作符 . ->

	/*printf("%d\n", s.sb.s);*/

	/*struct Stu* ps = &s;
	printf("%d\n", (*ps).sb.s);
	printf("%d\n", ps->sb.s);*/

	//写一个函数打印s的内容
	print1(s);//传值调用
	print2(&s);//传址调用

	return 0;
}


//压栈 - 栈（先进后出，后进先出，层层堆叠）
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