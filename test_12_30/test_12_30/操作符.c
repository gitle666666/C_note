#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//	char ch = 'z';
//	char* wo = &ch;
//	*wo = 'a';
//	printf("%c\n", ch);
//	return 0;
//}

//int main()
//{
//	int a = 8;//4���ֽ�
//	int* p = &a;//ָ�룺������ŵ�ַ�ı���
//	//printf("%p\n", &a);
//	//printf("%p\n", p);
//	//&a;ȡ��ַ
//	//printf("%p\n", &a);
//	*p = 16;//* - �����ò�����
//	printf("a = %d\n", a);
//	return 0;
//}

//#define�����ʶ������
//#define MAX 128
//#define ���Զ����-������

//Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
////��Ķ��巽ʽ
//#define MAX(X,Y) (X>Y?X:Y);
//int main()
//{
//	//int a = MAX;
//	int a = 64;
//	int b = 128;
//	//����
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	//��ķ�ʽ
//	max = MAX(a, b);
//	//max=(a>b?a:b);
//	printf("max = %d\n", max);
//	return 0;
//}

//1.static���ξֲ�����
//�ֲ��������������ڱ䳤
//2.static����ȫ�ֱ���
//�ı��˱����������� - �þ�̬��ȫ�ֱ���ֻ�����Լ���Դ�ļ��ڲ�ʹ��
//����Դ�ļ���û����ʹ����
//3.static���κ���
//static���κ����ı��˺�������������
//�ⲿ�������� -> �ڲ���������

//�����ⲿ����
//extern int Add(int, int);
//
//int main()
//{
//	int a = 16;
//	int b = 32;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}
//int main()
//{
//	//extern - �����ⲿ���ŵ�
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}
//void test()
//{
//	static int a = 1;//a��һ����̬�ľֲ�����
//	a++;
//	printf("a = %d\n", a);
//
//}
//
//int main()
//{
//	int i = 0;
//	while(i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);
//	//~��λȡ��
//	 
//	return 0;
//}

//int main()
//{
//	//int a = 1;
//	//int b = (++a) + (++a) + (++a);//����ʹ��
//	//printf("%d\n", b);
//	//int a = 4;
//	//int b = a++;
//
//	//printf("%d\n", b);
//	//printf("%d\n", a++);
//	//int b = ++a;//��++����ʹ��
//
//	//printf("%d\n", b);
//	//printf("%d\n", a); 
//
//	return 0;
//}

//int main()
//{
//	//ǿ������ת��
//
//	int a = (int)2.713;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 4;
//	int b = 2;
//	int c = a && b;
//	printf("%d\n", c);
//	/*if (a && b)
//	{
//
//	}*/
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	int b = 7;
//	int max = a > b ? a : b;//��Ŀ�����
//	printf("%d\n", max);
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	int b = 8;
//	int c = 16;
//	int d = (a = b + 3, b = a - 1, b);
//	//���ű��ʽ�Ǵ��������μ��㣬�������ʽ��������һ�����ʽ�Ľ��
//	printf("%d\n", d);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[5]);//[]�±�����
//	return 0;
//}

//�������ò�����
//int main()
//{
//	printf("helloworld");
//	return 0;
//}

//C�����ṩ�Ĺؼ���

//int main()
//{
//	register int num = 10;//�Ĵ�������
//
//	return 0;
//}

//int main()
//{
//	typedef unsigned int u_int;//typedef - ���Ͷ��� - �����ض���
//	unsigned int num = 20;
//	u_int num2 = 20;
//	return 0;
//}

//int main()
//{
//
//	return 0;
//}