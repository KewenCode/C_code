#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 1
//int cnt = 0;
//int fib(int n) {
//	cnt++;
//	if (n == 0)
//		return 1;
//	else if(n == 1)
//		return 2;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//
//void main()
//{
//	fib(8);
//	printf("%d", cnt);
//}


  //����С������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = a > b ? a : b;//��ʾ��С������
//	int i = 0;
//	for (i = 1; ;i++)
//	{
//		if ((a * i) % b == 0)
//		{
//			printf("%d\n", a * i);
//	      break;
//		}
//	}
//	
//	//while(1)
//	//{
//	//	if (m % a == 0 && m % b == 0)
//	//	{
//	//		printf("%d\n", m);
//	//		break;
//	//	}
//	//	m++;
//	//}
//
//	return 0;
//}

  //�����ַ���
#include <string.h>
void reverse(char* left, char* right)
{
	while (left < right)
	{
		char tmp = 0;
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[100] = { 0 };
	gets(arr);
	//������ת��
	//1���ַ������巭ת
	int len = strlen(arr);
	reverse(arr, arr + len - 1);
	//2��ÿ����������
	char* start = arr;
	while (*start)
	{
		char* end = start;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end = ' ')
			start = end + 1;
		else
			start = end;
	}
	printf("%s\n", arr);
	return 0;

}