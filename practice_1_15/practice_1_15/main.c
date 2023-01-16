#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	printf("快停下来\n");
//	main();
//}

//void print(int n)//1234
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1234
//	//递归
//	print(num);
//	//print(1234)
//	//print(123) 4
//	//print(12) 3 4
//	//print(1) 2 3 4
//	//
//	return 0;
//}
#include <string.h>

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//递归的方法
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
////把大事化小
//
//int main()
//{
//	char arr[] = "helloworld";
//	//int len=my_strlen(arr);
//	//printf("%d\n",len);
//
//	//模拟实现了一个strlen函数
//	int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
//	printf("len = %d\n", len);
//	return 0;
//}

//int Fac1(int x)
//{
//	int i = 0;
//	int ret = 1;
//	for(i=1;i<=x;i++)
//	{ 
//		ret *= i;
//	}
//	return ret;
//}
//
//int Fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n - 1);
//}
//
//int main()
//{
//	//求n的阶乘
//	int n = 0;	
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n);
//	printf("%d\n", ret);
//	return 0;
//}

//斐波那契数列
//1 1 2 3 5 8  13 21 34 55 ......
//

//描述第n个斐波那契数列的时候
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)//测试第3个斐波那契数的计算次数
//	{
//		count++;
//	}
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 2) + Fib(n - 1);
//}

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//TDD - 测试驱动开发
//	ret = Fib(n);
//	printf("ret = %d\n", ret);
//	//printf("count = %d", count);
//	return 0;
//}

//void test(int n)
//{
//	if (n<10000)
//	{
//		test(n + 1);
//	}
//}
//int main()
//{
//	test(1);
//	return 0;
//}

//int main()
//{
//	//创建一个数组-存放整型-10个
//	int arr[10] = { 1,2,3 };//不完全初始化，剩下的元素默认初始化为0
//	char arr2[5] = { 'a',98 };
//	char arr3[5] = "ab";
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));//7
//	//sizeof 计算 arr4所占空间的大小
//	//7个元素-char 7*1=7
//	printf("%d\n", strlen(arr4));//6
//	//strlen求字符串的长度-'\0'之前的字符个数
//	//[a b c d e f \0]
//	//6
//	//int n = 5;
//	//char ch[n];//err，[]中是常量
//	return 0;
//}

//1.strlen和sizeof没有什么关联
//2.strlen是求字符串长度的-只能针对字符串求长度 - 库函数-使用得引头文件
//3.sizeof计算变量、数组、类型的大小-单位是字节 - 操作符

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c', };//'\0'
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";//[a][b][c][d][e][f][\0]
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < len; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("arr[%d][%d] = %d ", i, j, arr[i][j]);
//		}
//		printf("\n");
//	}
//	//char ch[5][6]	;
//	//int arr[] = { 1,2,3,4 };
//	//int arr[][4] = { {1,2,3,4},{5,6,7,8} };//列标不能省略
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}

//void bubble_sort(int arr[],int sz)
//{
//	//确定冒泡排序的趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//假设这一趟要排序的数据已经有序
//		//每一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//本趟排序的数据其实不完全有序
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//对arr进行排序，排成升序
//	bubble_sort(arr, sz);//冒泡排序函数
//	for (i = 0; i < sz; i++)
//	{
//			printf("%d ", arr[i]);
//	}
//	return 0;
//}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7 };
	printf("%p\n", arr);
	printf("%p\n", arr+1);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);
	printf("%p\n", &arr);
	printf("%p\n", &arr+1);
	/*printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr);
	int sz = sizeof(arr) / sizeof(arr[0]);*/
	//1. sizeof（数组名） - 数组名表示整个数组，sizeof(数组名)计算的是整个数组的大小，单位是字节
	//2. &数组名，数组名代表整个数组，&数组名，取出的是整个数组的地址
	//printf("%p\n", arr);//数组名是数组首元素地址
	//printf("%p\n", &arr[0]);
	//printf("%d\n", *arr);//1

	return 0;
}
