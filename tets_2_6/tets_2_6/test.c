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
//struct S
//{
//	char arr[10];
//	int num;
//	float sc;
//};
//int main()
//{
//	struct S s = { "abcdef",10,5.5f };
//	//������д�ļ�
//	FILE* pf = fopen("test.dat", "w");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	fwrite(&s, sizeof(struct S), 1, pf);
//	//���ļ�
//	/*fread(&s, sizeof(struct S), 1, pf);*/
//	//��ӡ
//	/*printf("%s %d %f\n", s.arr, s.num, s.sc);*/
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	char arr[10];
//	int age;
//	float f;
//};
//
//int main()
//{
//	struct S s = { "hello",20,5.5f };
//	struct S tmp = { 0 };
//
//	char buf[100] = { 0 };
//	//sprintf��һ����ʽ�����ݣ�ת��Ϊ�ַ���
//	sprintf(buf, "%s %d %f", s.arr, s.age, s.f);
//	printf("%s\n", buf);
//	//��buf�л�ԭһ���ṹ������
//	sscanf(buf, "%s %d %f", tmp.arr, &(tmp.age), &(tmp.f));
//	printf("%s %d %f\n", tmp.arr, tmp.age, tmp.f);
//	return 0;
//
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//��ȡ�ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	//�����ļ�ָ��
//	fseek(pf, -1, SEEK_CUR);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	//���ļ�ָ��ص���ʼλ��
//	rewind(pf);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


int mian()
{
	FILE* pfread = fopen("test.txt", "r");
	if (pfread = NULL)
	{
		return 1;
	}
	FILE* pfwrite = fopen("test2.txt", "w");
	if (pfwerite = NULL)
	{
		fclose(pfread);
		pfread = NULL;
		return 1;
	}
	//�ļ��򿪳ɹ�
	//��д�ļ�
	int ch = 0;
	while (ch = fgetc(pfread) != EOF)
	{
		//д�ļ�
		fputc(ch, pfwrite);
	}
	if (feof(pfread))
	{
		printf("�����ļ�������־���ļ���������\n");
	}
	else if (ferror(pfread))
	{
		printf("�ļ���ȡʧ�ܽ���\n");
	}
	//�ر��ļ�
	fclose(pfread);
	pfread = NULL;
	fclose(pfwrite);
	pfwrite = NULL;
	return 0;
}