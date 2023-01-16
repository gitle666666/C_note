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
//	int a = 8;//4个字节
//	int* p = &a;//指针：用来存放地址的变量
//	//printf("%p\n", &a);
//	//printf("%p\n", p);
//	//&a;取地址
//	//printf("%p\n", &a);
//	*p = 16;//* - 解引用操作符
//	printf("a = %d\n", a);
//	return 0;
//}

//#define定义标识符常量
//#define MAX 128
//#define 可以定义宏-带参数

//Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
////宏的定义方式
//#define MAX(X,Y) (X>Y?X:Y);
//int main()
//{
//	//int a = MAX;
//	int a = 64;
//	int b = 128;
//	//函数
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	//宏的方式
//	max = MAX(a, b);
//	//max=(a>b?a:b);
//	printf("max = %d\n", max);
//	return 0;
//}

//1.static修饰局部变量
//局部变量的生命周期变长
//2.static修饰全局变量
//改变了变量的作用域 - 让静态的全局变量只能在自己的源文件内部使用
//出了源文件就没法再使用了
//3.static修饰函数
//static修饰函数改变了函数的链接属性
//外部链接属性 -> 内部链接属性

//声明外部函数
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
//	//extern - 声明外部符号的
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}
//void test()
//{
//	static int a = 1;//a是一个静态的局部变量
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
//	//~按位取反
//	 
//	return 0;
//}

//int main()
//{
//	//int a = 1;
//	//int b = (++a) + (++a) + (++a);//错误使用
//	//printf("%d\n", b);
//	//int a = 4;
//	//int b = a++;
//
//	//printf("%d\n", b);
//	//printf("%d\n", a++);
//	//int b = ++a;//先++，后使用
//
//	//printf("%d\n", b);
//	//printf("%d\n", a); 
//
//	return 0;
//}

//int main()
//{
//	//强制类型转换
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
//	int max = a > b ? a : b;//三目运算符
//	printf("%d\n", max);
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	int b = 8;
//	int c = 16;
//	int d = (a = b + 3, b = a - 1, b);
//	//逗号表达式是从左到右依次计算，整个表达式结果是最后一个表达式的结果
//	printf("%d\n", d);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[5]);//[]下标引用
//	return 0;
//}

//函数引用操作符
//int main()
//{
//	printf("helloworld");
//	return 0;
//}

//C语言提供的关键字

//int main()
//{
//	register int num = 10;//寄存器变量
//
//	return 0;
//}

//int main()
//{
//	typedef unsigned int u_int;//typedef - 类型定义 - 类型重定义
//	unsigned int num = 20;
//	u_int num2 = 20;
//	return 0;
//}

//int main()
//{
//
//	return 0;
//}