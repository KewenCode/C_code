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
//	////写文件
//	//fputc('b', pf);
//	//fputc('a', pf);
//	//fputc('d', pf);
//	//读文件
//	int ret = fgetc(pf);
//	printf("%c", ret);
//	//关闭文件
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
//	////写文件 - 按照行来写
//	//fputs("abcdef\n", pf);
//	//fputs("dedefdcd", pf);
//	//读文件
//	fgets(arr, 4, pf);//实际读取三个，预留‘\0’
//	printf("%s\n", arr);	
//	fgets(arr, 4, pf);//实际读取三个，预留‘\0’
//	printf("%s\n", arr);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//格式化输入输出
//struct S
//{
//	char arr[10];
//	int num;
//	float sc;
//};
//int main()
//{
//	struct S s = { "abcdef",10,5.5f };
//	//对格式化的数据进行写文件
//	FILE* pf = fopen("test.dat", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	/*fprintf(pf, "%s %d %f", s.arr, s.num, s.sc);*/
//	//读文件
//	fscanf(pf, "%s %d &f", s.arr, &(s.num), &(s.sc));
//	//打印
//	printf("%s %d %f\n", s.arr, s.num, s.sc);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//二进制读写
//struct S
//{
//	char arr[10];
//	int num;
//	float sc;
//};
//int main()
//{
//	struct S s = { "abcdef",10,5.5f };
//	//二进制写文件
//	FILE* pf = fopen("test.dat", "w");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	fwrite(&s, sizeof(struct S), 1, pf);
//	//读文件
//	/*fread(&s, sizeof(struct S), 1, pf);*/
//	//打印
//	/*printf("%s %d %f\n", s.arr, s.num, s.sc);*/
//	//关闭文件
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
//	//sprintf把一个格式化数据，转换为字符串
//	sprintf(buf, "%s %d %f", s.arr, s.age, s.f);
//	printf("%s\n", buf);
//	//从buf中还原一个结构体数据
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
//	//读取文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	//调整文件指针
//	fseek(pf, -1, SEEK_CUR);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	//让文件指针回到起始位置
//	rewind(pf);
//	//关闭文件
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
	//文件打开成功
	//读写文件
	int ch = 0;
	while (ch = fgetc(pfread) != EOF)
	{
		//写文件
		fputc(ch, pfwrite);
	}
	if (feof(pfread))
	{
		printf("遇到文件结束标志，文件正常结束\n");
	}
	else if (ferror(pfread))
	{
		printf("文件读取失败结束\n");
	}
	//关闭文件
	fclose(pfread);
	pfread = NULL;
	fclose(pfwrite);
	pfwrite = NULL;
	return 0;
}