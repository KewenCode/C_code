#define _CRT_SECURE_NO_WARNINGS 1
 
#include<stdio.h>

//int main()
//{
//	/*printf("c:\test\test.c");
//	printf("ab\ncd");
//	printf("\a\a\a");*/
//	//  \t :ת���ַ� ת����ԭ������˼
//	//   (are you ok??) -->(are you ok]  ??)-->����ĸ��  ʹ��  \?\?  ���
//	//   printf("%c\n",'\'')  -->  \'  ���  '
//	//	 
//	//
//	// 
//	//   printf�ڴ�ӡ����ʱ�򣬿���ָ����ӡ�ĸ�ʽ
//	//   %d ����  %c �����ַ�  %s �ַ���
//	//
//	return 0;
//}

int main()
{
	printf("%c\n", '\130');//8���Ƶ�130
	//X  --- ASCII��ֵ88
	printf("%c\n",'\101')//A - 65 - 8����:101

	return 0;
}