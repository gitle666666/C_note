#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//编程练习1.编写一个程序，把用分钟表示的时间转换成用小时和分钟表示的时
//间。使用#define或const创建一个表示60的符号常量或const变量。通过while
//循环让用户重复输入值，直到用户输入小于或等于0的值才停止循环。
//#define recycle 60
//int scf(int x)
//{
//	return scanf("%d\n", &x);
//}

//int main()
//{
//	int minute_time = 0;
//	if (scanf("%d", &minute_time) == 1)
//	{
//		printf("%d\n", ++minute_time);
//	}
//	else printf("出错了");
//	return 0;
//}
//int main()
//{
//	int minute_time = 0;
//	int hour_minute_time = 0;
//	while((scanf("%d", &minute_time) == 1) && minute_time > 0)//输入正确的分钟
//	{
//		hour_minute_time = minute_time / recycle;
//		minute_time = minute_time % recycle;
//		printf("%d小时%d分钟\n", hour_minute_time, minute_time);
//	}
//	return 0;
//}
//int main()
//{
//	int minute_time=0;
//	int hour_minute_time = 0;
//	//printf("请输入");
//	scanf("%d\n", &minute_time);
//	while ( minute_time > 0)
//	{   
//		hour_minute_time = minute_time / recycle;
//		minute_time = minute_time % recycle;
//		printf("%d小时%d分钟\n", hour_minute_time, minute_time);
//		scanf("%d\n", &minute_time);
//	}
//	return 0;
//}

//编程练习2.编写一个程序，提示用户输入一个整数，然后打印从该数到比该数大
//10的所有整数（例如，用户输入5，则打印5～15的所有整数，包括5和
//15）。要求打印的各值之间用一个空格、制表符或换行符分开

//int main()
//{
//	int num,num2;
//	printf("请输入一个整数：");
//	scanf("%d", &num);
//	printf("从该数到比该数大10的所有整数如下：\n");
//	num2 = num + 10;
//	while (num<=num2)
//	{
//		printf("%d\n", num);
//		num++;
//	}
//	return 0;
//}

//编程练习3.编写一个程序，提示用户输入天数，然后将其转换成周数和天数。例
//如，用户输入18，则转换成2周4天。以下面的格式显示结果：
//18 days are 2 weeks, 4 days.
//通过while循环让用户重复输入天数，当用户输入一个非正值时（如0
//或 - 20），循环结束。

//int main()
//{
//	int day, week,day_r;
//	printf("请输入天数：");
//	while ((scanf("%d",&day) == 1) && day > 0)
//	{
//		week = day / 7;
//		day_r = day % 7;
//		printf("天数转换为周数和天数：\n");
//		printf("%d days are %d weeks, %d days.\n", day, week, day_r);
//	}
//	return 0;
//}

//4.编写一个程序，提示用户输入一个身高（单位：厘米），并分别以厘
//米和英寸为单位显示该值，允许有小数部分。程序应该能让用户重复输入身
//高，直到用户输入一个非正值。其输出示例如下：
//Enter a height in centimeters : 182
//182.0 cm = 5 feet, 11.7 inches
//Enter a height in centimeters(<= 0 to quit) : 168.7
//168.0 cm = 5 feet, 6.4 inches
//Enter a height in centimeters(<= 0 to quit) : 0
//bye

//int main()
//{
//	float height,feet,inches;
//	 
//	printf("Enter a height in centimeters : ");
//	while ((scanf("%f", &height) == 1) && height > 0)
//	{
//		feet = height / 30.48;//求英尺数
//		inches = (height-(int)feet*30.48)/ 2.54;//求英寸数
//		printf("%4.1f cm = %d feet, %4.1f inches\n",height,(int)feet/*强类型转换*/, inches);
//		printf("Enter a height in centimeters(<= 0 to quit) : ");
//	}
//	printf("bye");
//	return 0;
//}

//5.修改程序addemup.c（程序清单5.13），你可以认为addemup.c是计算20
//天里赚多少钱的程序（假设第1天赚$1、第2天赚$2、第3天赚$3，以此类
//推）。修改程序，使其可以与用户交互，根据用户输入的数进行计算（即，
//用读入的一个变量来代替20）。
/* addemup.c -- 几种常见的语句 */
//#include <stdio.h>
//int main(void) /* 计算输入个数个整数的和 */
//{
//	int count,sum,day;/* 声明[1] */
//	count = 0; /* 表达式语句 */
//	sum = 0; /* 表达式语句 */
//	printf("请输入天数：");
//	scanf("%d", &day);
//	while (count++ < day) /* 迭代语句 */
//		sum = sum + count;
//	printf("你在%d天里赚了$%d\n", day,sum); /* 表达式语句[2] */
//	return 0; /* 跳转语句 */
//}

//6.修改编程练习5的程序，使其能计算整数的平方和（可以认为第1天赚
//$1、第2天赚$4、第3天赚$9，以此类推，这看起来很不错）。C没有平方函
//数，但是可以用n * n来表示n的平方。

//int main(void) /* 计算输入个数个整数的平方和 */
//{
//	int count, sum, day;
//	count = 0; 
//	sum = 0; 
//	printf("请输入天数：");
//	scanf("%d", &day);
//	while (count++ < day) 
//		sum = sum + count*count;//平方和相加
//	printf("你在%d天里赚了$%d\n", day,sum);
//	return 0; 
//}

//7.编写一个程序，提示用户输入一个double类型的数，并打印该数的立
//方值。自己设计一个函数计算并打印立方值。main()函数要把用户输入的值
//传递给该函数。

//void figure (double x)
//{
//	x = x * x * x;
//	printf("该数的立方值：%lf\n", x);
//}
//
//int main() 
//{
//	double num;
//	printf("请输入一个小数：");
//	scanf("%lf", &num);
//	figure(num);
//	return 0;
//}

//8.编写一个程序，显示求模运算的结果。把用户输入的第1个整数作为
//求模运算符的第2个运算对象，该数在运算过程中保持不变。用户后面输入
//的数是第1个运算对象。当用户输入一个非正值时，程序结束。其输出示例
//如下：
//This program computes moduli.（求模运算）
//Enter an integer to serve as the second operand : 256
//Now enter the first operand : 438
//438 % 256 is 182
//Enter next number for first operand(<= 0 to quit) : 1234567
//1234567 % 256 is 135
//Enter next number for first operand(<= 0 to quit) : 0
//Done

//int main()
//{
//	int m, n, r;
//	printf("This program computes moduli.（求模运算）\n");
//	printf("Enter an integer to serve as the second operand : ");
//	scanf("%d", &n);
//	printf("Now enter the first operand : ");
//	while ((scanf("%d", &m) == 1) && (m > 0) && (n > 0))
//	{
//		r = m % n;
//		printf("%d  模  %d is %d\n", m, n, r);//模运算符号- % -还没搞清楚怎么放到字符串里
//		printf("Enter next number for first operand(<= 0 to quit) : ");
//	}
//	printf("Done");
//	return 0;
//}

//9.编写一个程序，要求用户输入一个华氏温度。程序应读取double类型
//的值作为温度值，并把该值作为参数传递给一个用户自定义的函数
//Temperatures()。该函数计算摄氏温度和开氏温度，并以小数点后面两位数字
//的精度显示3种温度。要使用不同的温标来表示这3个温度值。下面是华氏温
//度转摄氏温度的公式：
//摄氏温度 = 5.0 / 9.0 * (华氏温度 - 32.0)
//开氏温标常用于科学研究，0表示绝对零，代表最低的温度。下面是摄
//氏温度转开氏温度的公式：
//开氏温度 = 摄氏温度 + 273.16
//Temperatures()函数中用const创建温度转换中使用的变量。在main()函数
//中使用一个循环让用户重复输入温度，当用户输入 q 或其他非数字时，循环
//结束。scanf()函数返回读取数据的数量，所以如果读取数字则返回1，如果
//读取q则不返回1。可以使用 == 运算符将scanf()的返回值和1作比较，测试两
//值是否相等。

 /*void Temperatures(double x)
{
	double y, z;
	y = 5.0 / 9.0 * (x - 32.0);
	z = y + 273.16;
	printf("华氏温度：%5.2lfF\n摄氏温度：%5.2lfC\n开氏温度：%5.2lfK\n", x, y, z);
}

int main()
{
	double FT;
	printf("请输入一个华氏温度：");
	while ((scanf("%lf", &FT) == 1) && FT >= -459.67)
	{
		Temperatures(FT);
		printf("请输入一个华氏温度：");
	}
	return 0;
}*/

//struct Wage_system
//{
//	char name[20];
//	long job_number;
//	int money;
//};
//
//int main()
//{
//	struct Wage_system w1 = { "任我行",1234567890,6666 };
//	strcpy(w1.name,"任盈盈");//strcpy-string copy -字符串拷贝-库函数-string.h
//	printf("%s\n", w1.name);
	//struct Wage_system* pb = &w1;
	////.		结构体变量.成员
	////->	结构体指针->成员
	//printf("%s\n", pb->name);
	//printf("%d\n", pb->job_number);
	//printf("%d\n", pb->money);
	///*printf("姓名：%s\n", (*pb).name);
	//printf("工号：%d\n", (*pb).job_number);
	//printf("所得工资：%d元\n", (*pb).money);*/

	///*printf("姓名：%s\n", w1.name);
	//printf("工号：%d\n", w1.job_number);
	//printf("所得工资：%d元\n", w1.money);*/
	//return 0;
//}