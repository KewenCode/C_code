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
struct S
{
	char arr[10];
	int num;
	float sc;
};
int main()
{
	struct S s = { "abcdef",10,5.5f };
	//二进制写文件
	FILE* pf = fopen("test.dat", "r");
	if (NULL == pf)
	{
		perror("fopen");
		return 1;
	}
	//写文件
	/*fwrite(&s, sizeof(struct S), 1, pf);*/
	//读文件
	fread(&s, sizeof(struct S), 1, pf);
	//打印
	printf("%s %d %f\n", s.arr, s.num, s.sc);
	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}