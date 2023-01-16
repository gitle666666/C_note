//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
////int main()
////{
////	int a = 0;
////	int b = 0;
////	int sum = 0;
////
////	scanf("%d %d", &a, &b);
////	sum = a + b;
////	printf("sum = %d\n", sum);
////	return 0;
////}
////#define MAX 10000
////int main()
////{
////	const int n = 12;//此时n是常变量，本质是变量
////	int arr[n] = { 0 };//数组括号中是常量
//// 1.字面常量
//// 2.const修饰常量
//	//3.#define定义的标识符常量
//	/*int n = MAX;
//	printf("n = %d\n", n);*/
//	//return 0;
////}
////enum Sex
////{
////	MALE=3,//赋初值
////	FEMALE,
////	SECRET
////};
////int main()
////{
////	//4.枚举常量
//////可以一一列举的常量
////	enum Sex s = MALE;
////
////	printf("%d\n", MALE);
////	printf("%d\n", FEMALE);
////	printf("%d\n", SECRET);
////
////	return 0;
////}
////字符串就是一串字符
////int main()
////{
////	"hello world";
////	return 0;
////}
//
//#include <string.h>
////int main()
////{
////	//字符数组是一组相同类型的元素
////	//字符串在结尾的位置隐藏了一个\0的字符
////	//\0是字符串结束的标志
////	//char arr[] = "hello";
////	char arr1[] = "abc";
////	char arr2[] = { 'a','b','c','\0'};//可加'\0'消除乱码
////	//求字符串长度
////	printf("%d\n", strlen(arr1));
////	printf("%d\n", strlen(arr2));//加\0求长度
////
////	//int len = strlen("abc");//string length
////	//printf("%d\n", len);
////	//打印字符串
////	/*printf("%s\n", arr1);
////	printf("%s\n", arr2);*/
////	return 0;
////}
//
////int main()
////{
////	//printf("c:\test\test.c");
////	printf("ab\ncd");
////	return 0;
////}
//
////int main()
////{
////	//printf("(how are you\?\?)");//??)--]-三字母词
////	//(how are you]
////	//
////	printf("%c\n", '\'');
////	printf("%s\n","abc");
////	printf("%s\n", "a");
////	printf("%s\n", "\"");
////	printf("%s\n", "'");
////	printf("c:\\\\test\\\\test.c");
////	printf("\a");
////	printf("\f");//进纸符
////	printf("\b");//退格符
////	printf("\t");//水平制表符
////	printf("\r");//回车符
////	printf("\v");//垂直制表符
////	
////	return 0;
////}
////printf("%d\n"，100);
////printf("%c\n",'a');
////printf("%s\n","abc");
//int main()
//{
//	//printf("%c\n",'\130');//表示1-3个八进制数字
//	//X	--ASCII码值是88
//	//printf("%c\n", '\101');//A-65-8进制是：101
//	//printf("%c\n",'\x30');//表示2个十六进制数字
//	//printf("%d\n",'\x30');
//	printf("%d\n", strlen("c:\test\328\test.c"));
//	return 0;
//}