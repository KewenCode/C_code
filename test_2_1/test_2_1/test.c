#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//���ʹ洢
//int main()
//{
//	int a = -10;
//	//ԭ��
//	//10000000 00000000 00000000 00001010-ԭ��
//	//11111111 11111111 11111111 11110101-����
//	//11111111 11111111 11111111 11110110-����
//	//FF FF FF F6
//	return 0;
//}

//�������ڴ����Զ�������ʽ�洢
//����������˵
//�����Ķ����Ʊ�ʾ��3����ʽ��ԭ�롢���롢����
// ��������ԭ�롢���롢������ͬ
// ��������ԭ�롢���롢����Ҫ���м���
// ����������ֱֵ��д���Ķ��������о���ԭ��
// ԭ�����λ���䣬����λ��λȡ�����õ��ľ��Ƿ���
// ����+1���õ��ľ��ǲ���
// 
// �������ڴ����Բ�����ʽ�洢
//

//int main()
//{
//	// 1-1
//	// 1+��-1��
//	// 00000000 00000000 00000000 00000001 - 1
//	// 11111111 11111111 11111111 11111111 - (-1)
//	// (1)0000000 00000000 00000000 00000000
//
//	return 0;
//}

//����ֽ����С���ֽ���
// ����ֽ���
// �����ݵĵ�λ�ֽ������ݴ���ڸߵ�ַ������λ�ֽ������ݴ���ڵ͵�ַ��
// С���ֽ���
// �����ݵĵ�λ�ֽ������ݴ���ڵ͵�ַ������λ�ֽ������ݴ���ڸߵ�ַ��
//
//int main()
//{
//	//д�����жϵ�ǰ�����ֽ���
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//		printf("С��\n");
//	else
//		printf("���\n");
//	return 0;
//}

//int main()
//{
//	char = -1;
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	//11111111
//	signed char b = -1;
//	//11111111
//	unsigned char c = -1;
//	//11111111
//	printf("%d %d %d", a, b, c);
//	//-1 -1 255
//	return 0;
//}

//����
// 1.char��signed char����unsigned char
// C���Բ�û�й涨��ȡ���ڱ�����
// 
// int��signed int
// short��signed short
//

//int main()
//{
//	char a = -128;
//	//10000000000000000000000010000000
//	//11111111111111111111111101111111
//	//11111111111111111111111110000000
//	//10000000
//	//11111111111111111111111110000000
//	//���ڴ�ӡ�޷������ͣ���λ�����ԣ����Ƿ���λ
//	printf("%u\n", a);
//	return 0;
//}

//int main()
//{
//	char a = 128;
//	//00000000000000000000000010000000
//	//10000000
//	//11111111111111111111111110000000
//	printf("%u\n", a);
//	return 0;
//}
//�з��ŵ�charȡֵ��Χ -128~127


//int main()
//{
//	int i = -20;
//	//10000000000000000000000000010100
//	//11111111111111111111111111101011
//	//11111111111111111111111111101100
//	unsigned int j = 10;
//	//00000000000000000000000000001010
//	printf("%d\n", i + j);
//	//11111111111111111111111111110110
//	//11111111111111111111111111110101
//	//10000000000000000000000000001010
//	return 0;
//}

//��ѭ�� �޷��ţ������0
//int main()
//{
//	unsigned int i;
//	for (i = 9;i >= 0;i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}

#include <string.h>
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0;i < 1000;i++)
//	{
//		a[i] = -1 - i;
//	}
//	//128+127=255
//	//-1 -2 -3 ....-127 -128 127 ....2 1 0 -1
//	printf("%d", strlen(a));//�ҵ�\0 -> 0
//	return 0;
//}

//unsigned char i = 0;
//int main()
//{
//	for (i = 0;i <= 255;i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}