#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>

//1.����n�Ľ׳�
//int main()
//{
//	int i, n = 0;
//	int j = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{ 
//		j = i * j;
//	}
//	printf("n�Ľ׳�Ϊ�� %d\n", j);
//	return 0;
//}

//2.����1!+2!+3!+......+10!
//int main()
//{
//	int i, j, sum = 0;
//	int ret = 1;
//	for (j = 1; j <= 10; j++)
//	{
//		ret = j * ret;
//		sum = sum + ret;
//	}
//	printf("10�Ľ׳�Ϊ�� %d\n", ret);
//	printf("1-10�Ľ׳˵ĺ�Ϊ��%d\n", sum);
//	return 0;
//}

//���ֲ���
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int size = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;//���±�
//	int right = size - 1;//���±�
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}

//char arr[] = "abc";
//[a b c \0]
 //0 1 2 3
//int main()
//{
//	char arr1[] = "welcome to China!!!!!!";
//	char arr2[] = "######################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
//	int right = strlen(arr1) - 1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//��Ϣһ��
//		Sleep(1000);
//		system("cls");//ִ��ϵͳ�����һ������ - cls -�����Ļ
//		left++;
//		right--;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "666666") == 0)//==���������ж������ַ����Ƿ���ȣ�Ӧ����һ���⺯��-strcmp
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//		if (i == 3)
//			printf("��������������˳�����\n");
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i++);
//	}
//	while (i < 11);
//	return 0;
//}

//int main()
//{
//	int i, j = 0;
//	for (i=0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)//100��//for (; j < 10; j++)//10��
//		{
//			printf("ֻ����̫��\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	//10��ѭ��
//	//10��Ԫ��
//	//10�δ�ӡ
//	for (i=0;i<10;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("����\n");
//		printf("����\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	//��ʼ��    �ж�     ����
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;//break;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int ret,ch = 0;
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);//�������벢�����password������
//	//��������ʣ��һ��'\n'
//	//��ȡһ��'\n'
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();//Y/N
//	if (ret=='Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//}
