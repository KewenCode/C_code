#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d\n", &a, &b);
//	int m = max(a, b);
//	printf("%d\n", m);
//	//if (a > b)
//	//{
//	//	printf("%d\n", a);
//	//}
//	//else
//	//{
//	//	printf("%d\n", b);
//	//}
//	return 0;
//}



//��֧���
  //if ���
//�ֺŸ����ľ���һ�����

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("δ����\n");
//		printf("����̸����\n");
//	}
//	else if (age >= 18 && age < 26)
//		printf("����\n");
//	else if (age >= 26 && age < 40)
//		printf("����\n");
//	else if (age >= 40 && age < 60)
//		printf("׳��\n");
//	else if (age >= 60 && age < 100)
//		printf("����\n");
//	else
//		printf("�ϲ���\n");
//	return 0;
//}



    //����else �ͽ�ƥ��

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}



//�ж�һ�����Ƿ�������,����ӡ100���ڵ�����
    //while ����

//int main()
//{
//	int num = 0;  //��ʼ��
//	while (num < 100)  //�жϲ���
//	{
//		if (num % 2 == 1)
//		{
//			printf("%d\n", num);
//		}
//		num++;  // ��������
//	}
//	return 0;
//}

  //for ����

//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		if (i % 2 == 1)
//			printf("%d", i);
//	}
//	return 0;
//}

//switch���
//defultû��˳������

//int main()
//{
//    int day = 0;
//    scanf("%d", &day);
//    switch (day)
//    {
//    case 1:
//        printf("����һ\n");
//        break;
//    case 2:
//        printf("���ڶ�\n");
//        break;
//    case 3:
//        printf("������\n");
//        break;
//    case 4:
//        printf("������\n");
//        break;
//    case 5:
//        printf("������\n");
//        break;
//    case 6:
//        printf("������\n");
//        break;
//    case 7:
//        printf("������\n");
//        break;
//    default:
//        printf("�������\n");
//        break;
//    }
//    return 0;
//}
//


  //while  ���

//int main()
//{
//    int i = 1;
//    //��whileѭ���У�break�������õ���ֹѭ��
//    //��whileѭ���У�continue��������ѭ��continue��ߵĴ��룬ֱ��ȥ�ж����򣬿��Ƿ������һ��ѭ��
//    while (i <= 10)
//    {
//        if (i == 5)
//            break;
//
//        printf("%d ",i);
//        i++;
//    }
//    return 0;
//}

//getchar putchar EOF=enf of file ֵ��-1
//CTRL+Z - getchar ��ȡ����

//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        putchar(ch);
//        
//    }
//    return 0;
//}

        //��ѯ����

//int main()
//{
//    char password[20] = { 0 };
//    printf("���������룺");
//    scanf("%s", password);//123456
//    printf("��ȷ�����룺��Y/N��");
//    //��������
//    int tmp = 0;
//    while ((tmp = getchar()) != '\n')//getchar();����\n��
//    {
//        ;
//    }
//    //���������ж���ַ�
//    int ch = getchar();
//    if (ch = 'Y')
//    {
//        printf("ȷ�ϳɹ�\n");
//    }
//    else
//    {
//        printf("ȷ��ʧ��\n");
//    }
//    return 0;
//}

  //for ���

//int main()
//{
//    int i = 0;
//    //�жϲ��ֵ�ʡ�� - -�жϲ��ֺ�Ϊ��
//    for (i = 1;i <= 10;i++)
//    {
//        if (i == 5)
//            break;
//        printf("%d ", i);
//    }
//    return 0;
//}

// do while ���
//ѭ������ִ��һ��

//int main()
//{
//    int i = 1;
//    do
//    {
//        if (i == 5)
//            break;
//        printf("%d ", i);
//        i++;
//    } while (i <= 10);
//
//    return 0;
//}


//����n�Ľ׳�

//int main()
//{
//    int i = 0;
//    int n = 0;
//    int ret = 1;
//    scanf("%d",&n);
//    for (i = 1;i <= n;i++)
//    {
//        ret *= i;//ret = ret * i;
//    }
//    printf("%d", ret);
//    return 0;
//}


//����1��+2��+3!......+10!(!�ǽ׳�)

//int main()
//{
//    int i = 0;
//    int n = 0;
//    int ret = 1;
//    int sum = 0;
//    for (n = 1;n <= 10; n++)
//    {
//        ret = 1;//����n�Ľ׳�֮ǰ����ret��ʼΪ1
//        for (i = 1;i <= n;i++)
//        {
//            ret *= i;//ret = ret * i;
//        }
//        sum += ret;
//    }
//    printf("%d", sum);
//    return 0;
//}

//int main()
//{
//    int n = 0;
//    int ret = 1;
//    int sum = 0;
//    for (n = 1;n <= 10; n++)
//    {
//        ret *= n;
//        sum += ret; 
//    }
//    printf("%d", sum);
//    return 0;
//}


//��һ�����������в���ĳ����������n
//�۰���� ���ֲ���

//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int k = 7;//Ҫ���ҵ�����
//    //��arr�������������в���k��7����ֵ
//    int sz = sizeof(arr) / sizeof(arr[0]);//�����Ԫ�ظ���
//    int left = 0;
//    int right = sz-1;
//
//    while (left<=right)
//    {
//        int mid = (right + left) / 2;
//        if (arr[mid] < k)
//        {
//            left = mid + 1;
//        }
//        else if (arr[mid] > k)
//        {
//            right = mid - 1;
//        }
//        else
//        {
//            printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//            break;
//        }
//    }
//    if (left > right)
//    {
//        printf("�Ҳ���\n");
//    }
//    return 0;
//}

//welcome to nanjing!!!
//w###################!
//we#################!!
//...

//#include<string.h>
//#include<windows.h>
//int main()
//{
//    char arr1[] = "welcome to nanjing!!!";
//    char arr2[] = "#####################";
//    int left = 0;
//    int right = strlen(arr1) - 1;
//
//    while (left <= right)
//    {
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        printf("%s\n", arr2);
//        Sleep(1000);//˯��1�� windows.h
//        system("cls");//�����Ļ
//        left++;
//        right--;
//    }
//    printf("%s\n", arr1);
//    return 0;
//}


//����½����
 
//#include<string.h>
//int main()
//{
//    int i = 0;
//    char password[20] = { 0 };
//    for (i = 0;i < 3;i++)
//    {
//        printf("���������룺");
//        scanf("%s", password);
//        //�����ַ����Ƚϣ�����ʹ��==��Ӧ��ʹ��strcmp
//        if (strcmp(password, "123456")==0)
//        {
//            printf("��½�ɹ�\n");
//            break;
//        }
//        else
//        {
//            printf("���������������\n");
//        }
//    }
//    if (i == 3)
//    {
//        printf("��������������˳�����\n");
//    }
//
//    return 0;
//}


//��������Ϸ
//1���Զ�����һ��1-100֮��������
//2��������
//   a.�¶���
//   b.�´���
// 3��һֱ��
//

#include<stdlib.h>
#include<time.h>
#include<windows.h>
void menu()
{
    printf("******************\n");
    printf("*** ��������Ϸ ***\n");
    printf("***  1.  play  ***\n");
    printf("***  0.  exit  ***\n");
    printf("******************\n");
}
void game()
{
    //��������Ϸʵ��
    //1.�����������
    //rand����������һ��0-32767֮������
    //ʱ�� - ʱ���
    int ret = rand()%100+1;//%100��������0-99��Ȼ��+1����Χ����1-100
    //2.������
    int guess = 0;
    while (1)
    {
        printf("�������(0-100)��");
        scanf("%s", &guess);
        if (guess < ret)
        {
            printf("��С��\n");
        }
        else if(guess > ret)
        {
            printf("�´���\n");
        }
        else 
        {
            printf("��ϲ�㣬�¶���\n");
            break;
        }
    }
}
int main()
{
    int input = 0;
    int input1 = 0;
    srand((unsigned int)time(NULL));
    do
    {
        menu();//��ӡ�˵�
        printf("��ѡ��");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            //printf("�����֣�\n");
            game();
            break;
        case 0:
            printf("�˳���Ϸ\n");
            break;
        default:
            printf("ѡ���������ѡ��\n");
            break;
        }
    } while (input);
    return 0;
}