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

  //strcat���ܸ��Լ�׷��
//char* my_strcat(char* dest, const char* src)
//{
//	int* ret = dest;
//	//1.�ҵ�Ŀ���ַ����е�\0
//	while (*dest)
//	{
//		dest++;
//	}
//	//2.����׷��
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
//	my_strcat(arr, arr2);//�ַ���׷�ӣ����ӣ�
//	return 0;
//}

  //strcmp - �ַ����Ƚϴ�С
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

  //strstr��һ���ַ���������һ���ַ���
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
//	//��aar1�в����Ƿ����arr2����
//	char* ret = my_strstr(arr1, arr2);
//	if (ret = NULL)
//	{
//		printf("û�ҵ�\n");
//	}
//	else
//	{
//
//	}
//	return 0;
//}

  //strtok - �и��ַ���
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

//ʹ�ÿ⺯��ʱ��
// ���ÿ⺯��ʧ��ʱ���������ô�����
//ȫ�ִ�����

  //strerror - �Ѵ�����ת���ɴ�����Ϣ
#include <errno.h>
//int main()
//{
//	printf("%s\n", strerror(errno));
//	return 0;
//}

  //perror - ֱ�ӷ��ش�����Ϣ
//int main()
//{
//	//���ļ�ʧ�ܵ�ʱ�򣬻᷵��NULL
//	FILE* pf = fopen("test.tct", "r");
//	//0 "no error"
//	if (pf == NULL)
//	{
//		perror("fopen");//ֱ�Ӵ�ӡ
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

  //tolower - ��Сдת��
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

//�ڴ溯��

//memcpy - �ڴ濽��
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