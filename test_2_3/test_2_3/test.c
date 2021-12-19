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
//	int len = my_strlen(arr);//strlen输出无符号整型
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	char arr[20] = { 0 };
//	strcpy(arr, "hello");
//
//	char arr2[] = { 'a','b','c' };//err - 不能确定\0位置
//	strcpy(arr, arr2);
//
//	printf("%s\n", arr);
//	return 0;
//}

char* my_strcat(char* dest, const char* src)
{
	int* ret = dest;
	//1.找到目标字符串中的\0
	while (*dest)
	{
		dest++;
	}
	//2.数据追加
	while (*dest++ = *src++)
	{

	}
	return ret;
}
int main()
{
	char arr[20] = "hello ";
	char arr2[] = "world";
	my_strcat(arr, arr2);//字符串追加（链接）
	return 0;
}