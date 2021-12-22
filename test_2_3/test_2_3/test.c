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

  //strstr在一个字符串中找另一个字符串
//char* my_strstr(const char* arr1, const char* arr2)
//{
//	assert(arr1 && arr2);
//	const char* s1 = NULL;
//	const char* s2 = NULL;
//	const char* cp = arr1;
//
//	if (*arr2 == '\0')
//	{
//		return(char*)arr1;
//	}
//
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = arr2;
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		cp++;
//	}
//}
//int amin()
//{
//	char arr1[] = "abcdefabcdef";
//	char arr2[] = "bcd";
//	//在aar1中查找是否包含arr2数组
//	char* ret = my_strstr(arr1, arr2);
//	if (ret = NULL)
//	{
//		printf("没找到\n");
//	}
//	else
//	{
//
//	}
//	return 0;
//}

  //strtok - 切割字符串
//int main()
//{
//	char arr[] = "zpw@dedef.cht";
//	char* p = "@.";
//	char tmp[20] = {0};
//	strcpy(tmp, arr);
//
//	char* ret = NULL;
//	for (ret = strtok(tmp, p);ret != NULL;ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	//ret=strtok(tmp, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//
//
//	return 0;
//}

//使用库函数时候
// 调用库函数失败时，都会设置错误码
//全局错误码

  //strerror - 把错误码转换成错误信息
#include <errno.h>
//int main()
//{
//	printf("%s\n", strerror(errno));
//	return 0;
//}

  //perror - 直接返回错误信息
//int main()
//{
//	//打开文件失败的时候，会返回NULL
//	FILE* pf = fopen("test.tct", "r");
//	//0 "no error"
//	if (pf == NULL)
//	{
//		perror("fopen");//直接打印
//		return 1;
//	}
//	return 0;
//}

#include <ctype.h>
//int main()
//{
//	char* ch = '*';
//	int ret = isdigit(ch);
//	return 0;
//}

  //tolower - 大小写转换
//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", arr);
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		printf("%c", arr[i]);
//		i++;
//	}
//	return 0;
//}

//内存函数

//memcpy - 内存拷贝
void* my_memcpy(void*dest,const void*src,size_t num)
{
	void* ret = dest;
	assert(dest && src);
	while (num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}
int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[20] = { 0 };
	my_memcpy(arr2, arr2, 20);
	return 0;
}