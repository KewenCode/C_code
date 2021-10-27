#define _CRT_SECURE_NO_WARNINGS 1
 
#include<stdio.h>

//int main()
//{
//	/*printf("c:\test\test.c");
//	printf("ab\ncd");
//	printf("\a\a\a");*/
//	//  \t :转义字符 转变了原来的意思
//	//   (are you ok??) -->(are you ok]  ??)-->三字母词  使用  \?\?  解决
//	//   printf("%c\n",'\'')  -->  \'  输出  '
//	//	 
//	//
//	// 
//	//   printf在打印数据时候，可以指定打印的格式
//	//   %d 整数  %c 单个字符  %s 字符串
//	//
//	return 0;
//}

int main()
{
	printf("%c\n", '\130');//8进制的130
	//X  --- ASCII码值88
	printf("%c\n",'\101')//A - 65 - 8进制:101

	return 0;
}