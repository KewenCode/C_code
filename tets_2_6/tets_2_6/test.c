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

//int  main()
//{
//	char arr[10] = { 0 };
//	FILE* pf = fopen("test.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	////д�ļ� - ��������д
//	//fputs("abcdef\n", pf);
//	//fputs("dedefdcd", pf);
//	//���ļ�
//	fgets(arr, 4, pf);//ʵ�ʶ�ȡ������Ԥ����\0��
//	printf("%s\n", arr);	
//	fgets(arr, 4, pf);//ʵ�ʶ�ȡ������Ԥ����\0��
//	printf("%s\n", arr);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//��ʽ���������
//struct S
//{
//	char arr[10];
//	int num;
//	float sc;
//};
//int main()
//{
//	struct S s = { "abcdef",10,5.5f };
//	//�Ը�ʽ�������ݽ���д�ļ�
//	FILE* pf = fopen("test.dat", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	/*fprintf(pf, "%s %d %f", s.arr, s.num, s.sc);*/
//	//���ļ�
//	fscanf(pf, "%s %d &f", s.arr, &(s.num), &(s.sc));
//	//��ӡ
//	printf("%s %d %f\n", s.arr, s.num, s.sc);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//�����ƶ�д
struct S
{
	char arr[10];
	int num;
	float sc;
};
int main()
{
	struct S s = { "abcdef",10,5.5f };
	//������д�ļ�
	FILE* pf = fopen("test.dat", "r");
	if (NULL == pf)
	{
		perror("fopen");
		return 1;
	}
	//д�ļ�
	/*fwrite(&s, sizeof(struct S), 1, pf);*/
	//���ļ�
	fread(&s, sizeof(struct S), 1, pf);
	//��ӡ
	printf("%s %d %f\n", s.arr, s.num, s.sc);
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}