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

int  main()
{
	char arr[10] = { 0 };
	FILE* pf = fopen("test.dat", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	////写文件 - 按照行来写
	//fputs("abcdef\n", pf);
	//fputs("dedefdcd", pf);
	//读文件
	fgets(arr, 4, pf);//实际读取三个，预留‘\0’
	printf("%s\n", arr);	
	fgets(arr, 4, pf);//实际读取三个，预留‘\0’
	printf("%s\n", arr);

	//关闭文件
	fclose(pf);
	pf = NULL;

	return 0;
}