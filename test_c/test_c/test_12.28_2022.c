#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//	int line = 0;
//	while (line < 30000)
//	{
//		printf("坚持自律:%d\n", line);
//		line++;
//	}
//	if (line == 30000)
//	{
//		printf("真正的曼\n");
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
//	//函数的方式解决
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
////	//数组 - 一组相同类型的元素的集合
////	//10个整型1-10存起来
////	//数组是用下标来访问的，下标从0开始的
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
//	int a = 9 % 2;//取余数
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	int b = a << 1;//左移操作符，移动的是二进制位
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

