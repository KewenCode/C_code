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

//int main()
//{
//	printf("%c\n", '\130');//8���Ƶ�130
//	//X  --- ASCII��ֵ88
//	printf("%c\n",'\101')//A - 65 - 8����:101
//	printf("%c\n",'\x30')//ʮ�������� 48 - 0
//
//	return 0;
//}

//
//ע�����������͸��Ӵ����
//
//int a = 10; //C++ע�ͷ��
//{ int main()
//int b = 0;
//*/ //C���Ե�ע�ͷ�� - ��֧��Ƕ��ע��
//*/
//	   }


//ѡ�����
//int main() 
//{
//	int input = 0; //����ֵ
//	printf("ѧϰ��\n");
//	printf("��ú�ѧϰ����1/0������");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("������");
//	else
//		printf("������");
//
//	return 0;
//}


//ѭ�����
//int main() 
//{
//	int line = 0;
//	while (line < 300)
//	{
//		printf("д����:%d\n", line);
//		line++;
//	}
//	if (line == 300)
//		printf("������");
//
//	return 0;
//}



//�����������
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1,&num2);
//
//	/*int sum =num1 + num2;*/
//	//�����ķ�ʽ���
//	int sum = Add(num1, num2);
//
//	printf("%d\n", sum);
//	return 0;
//}


//���� --һ����ͬ���͵�Ԫ�صļ���
//10������1-10������
//���������±���ʵ�
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	//char ch[5] = { 'a','b','c' };//����ȫ��ʼ����ʣ���Ĭ��Ϊ0
//	return 0;
//}



//int main()
//{
//	////int a = 9 / 2;
//	////�������˶�������ִ����������һ����С��������С����
//	//int a = 9 % 2;//% -- ȡģ���ࣩ
//	//printf("%d\n", a);
//
//	int a = 2;
//	int b = a << 1;
//	//  <<  - ���Ʋ��������ƶ����Ƕ�����λ
//	// a - 2
//	// 000010  --> 000100
//	printf("%d\n",b);
//
//
//	// &��λ��
//	// |��λ��
//	// ^��λ���
//	//
//
//	return 0;
//
//}


//int main()
//{
//	//0��ʾ�٣���0������
//	int a = 10;
//	printf("%d\n", !a);
//
//	return 0;
//}

int main()
{
	//sizeof�Ǹ�������
	// ���Ǻ���
	// �������ͻ������С��
	//
	int a = 5;
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof a);

	return 0;
}