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

  //strcat不能给自己追加
//char* my_strcat(char* dest, const char* src)
//{
//	int* ret = dest;
//	//1.找到目标字符串中的\0
//	while (*dest)
//	{
//		dest++;
//	}
//	//2.数据追加
//	while (*dest++ = *src++)
//	{
//
//	}
//	return ret;
//}
//int main()
//{
//	char arr[20] = "hello ";
//	char arr2[] = "world";
//	my_strcat(arr, arr2);//字符串追加（链接）
//	return 0;
//}

  //strcmp - 字符串比较大小
//int main()
//{
//	int ret = strcmp("abbb", "abc");//<0
//	printf("%d\n", ret);
//	return 0;
//}
//
//
//int my_strcmp(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//	while (*s1 == *s2)
//	{
//		*s1++;
//		*s2++;
//	}
//	/*return s1 - s2;*/
//	if (*s1 > *s2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}
//int main()
//{
//	char* p = "obc";
//	char* q = "abcdef";
//	int ret = my_strcmp(p, q);
//	if (ret > 0)
//	{
//		printf("p>q\n");
//	}
//	else if (ret < 0)
//	{
//		printf("p<q\n");
//	}
//	else
//	{
//		printf("p==q\n");
//	}
//	return 0;
//}

  //strncpy
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "qwer";
//	strncpy(arr1, arr2, 2);
//	return 0;
//}

 //strncmp
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 3);
//	return 0;
//}

 //strncmp
//int main()
//{
//	char* p = "abcdef";
//	char* q = "ancqwert";
//	int ret = strncmp(p, q, 3);
//	return 0;
//}