#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int  main()
//{
//	FILE* pf = fopen("test.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	////д�ļ�
//	//fputc('b', pf);
//	//fputc('a', pf);
//	//fputc('d', pf);
//	//���ļ�
//	int ret = fgetc(pf);
//	printf("%c", ret);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

int  main()
{
	char arr[10] = { 0 };
	FILE* pf = fopen("test.dat", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	////д�ļ� - ��������д
	//fputs("abcdef\n", pf);
	//fputs("dedefdcd", pf);
	//���ļ�
	fgets(arr, 4, pf);//ʵ�ʶ�ȡ������Ԥ����\0��
	printf("%s\n", arr);	
	fgets(arr, 4, pf);//ʵ�ʶ�ȡ������Ԥ����\0��
	printf("%s\n", arr);

	//�ر��ļ�
	fclose(pf);
	pf = NULL;

	return 0;
}