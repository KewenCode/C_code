#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//int my_strlen(const char* arr)
//{
//	
//	int count = 0;
//	assert(arr != NULL);
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//int main()
//{
//	//char arr[] = "abc";
//	char arr[] = { 'a','b','c' };
//	int len = my_strlen(arr);//strlen����޷�������
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	char arr[20] = { 0 };
//	strcpy(arr, "hello");
//
//	char arr2[] = { 'a','b','c' };//err - ����ȷ��\0λ��
//	strcpy(arr, arr2);
//
//	printf("%s\n", arr);
//	return 0;
//}

char* my_strcat(char* dest, const char* src)
{
	int* ret = dest;
	//1.�ҵ�Ŀ���ַ����е�\0
	while (*dest)
	{
		dest++;
	}
	//2.����׷��
	while (*dest++ = *src++)
	{

	}
	return ret;
}
int main()
{
	char arr[20] = "hello ";
	char arr2[] = "world";
	my_strcat(arr, arr2);//�ַ���׷�ӣ����ӣ�
	return 0;
}