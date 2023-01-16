#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>

//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "###########";
//	strcpy(arr2,arr1);
//	printf("%s\n", arr2);
//	//strcpy - string copy - 字符串拷贝
//	//strlen - string length - 字符串长度有关
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	//***** world
//	return 0;
//}

//定义函数
//#define Max(x,y) (x>y?x:y) 
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//
//int main()
//{
//	int a = 8;
//	int b = 16;
//	int max = get_max(a, b);
//	int c = Max(a, b);
//	printf("Max = %d\n", c);
//	printf("max = %d\n", max);
//	return 0;
//}

//erro
//形参其实是实参的一份临时拷贝
//对形参的修改是不会改变实参的
// 
//void Swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void Swap2(int* pa,int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 16;
//	int b = 32;
//	//int tmp = 0;
//	//
//	printf("a=%d b=%d\n", a, b);
//	//Swap1(a, b);
//	Swap2(&a, &b);
//	/*tmp = a;
//	a = b;
//	b = tmp;*/
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 16;
//	int* pa = &a;
//	*pa = 32;//解引用操作
//	printf("%d\n", a);
//	return 0;
//}
//是素数返回1，不是素数返回0
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j < sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//		/*else
//			return 1;*///错误
//	}
//	//
//	return 1;
//
//}
//
//int main()
//{
//	//打印100-200之间的素数
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//
//	}
//	return 0;
//}

//int is_leap_year(int y)
//{
//	if ((y % 4 == 0&&y%100!=0)||(y%400==0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是否为闰年
//		if (1 == is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//int binary_search(int arr[], int k,int sz)
//{
//	//算法的实现
//	int left = 0;
//	int right = sz - 1;
//	while(left<=right)
//	{ 
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{ 
//			right = mid - 1;
//		}
//		else
//			return mid;
//	}
//	return -1;
//}
//
//int main()
//{
//	//二分查找
//	//在一个有序数组中查找具体的某个数
//	//如果找到了返回，这个数的下标。找不到的返回-1
//	//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = 0;
//	sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}

//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num = %d\n", num);//1
//	Add(&num);
//	printf("num = %d\n", num);//2
//	Add(&num);
//	printf("num = %d\n", num);//3
//	return 0;
//}

//int main()
//{
//	int len = 0;
//	//1
//	//len=strlen("abc");
//	//printf("%d\n",len);
//	//2
//	printf("%d\n", strlen("abc"));
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

#include"add.h"

int main()
{
	int a = 16;
	int b = 32;
	int sum = 0;
	//函数调用
	sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}

