#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//	int line = 0;
//	while (line < 30000)
//	{
//		printf("�������:%d\n", line);
//		line++;
//	}
//	if (line == 30000)
//	{
//		printf("��������\n");
//	}
//	return 0;
//}

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
//	scanf("%d%d", &num1, &num2);
//	//int sum = num1 + num2;
//	//�����ķ�ʽ���
//	int sum = Add(num1, num2);
//
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
////	//int a = 1;
////	//int b = 2;
////	//int c = 3;
////	//int d = 4;
////
////	//....
////
////	//���� - һ����ͬ���͵�Ԫ�صļ���
////	//10������1-10������
////	//���������±������ʵģ��±��0��ʼ��
////	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
////	int i = 0;
////	while (i < 10)
////	{
////		printf("%d ", arr[i]);
////		i++;
////	}
////	//char ch[5] = { 'a','b','c' };
//
//	//int a = 9 / 2;
//	//float a = 9 / 2.0;
//
//	int a = 9 % 2;//ȡ����
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	int b = a << 1;//���Ʋ��������ƶ����Ƕ�����λ
//	int c = a >> 1;
//	printf("%d\n", b);
//	printf("%d\n", c);
//	return 0;
//}
int main()
{
	int arr[20] = { 0 };
	printf("%d\n", sizeof arr);
	int size = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", size);
	return 0;
}

