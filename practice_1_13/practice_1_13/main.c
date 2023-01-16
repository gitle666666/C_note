#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

//猜数字游戏
//1.电脑会生成一个随机数
//2.猜数字

//void menu()
//{
//	printf("**************************************\n");
//	printf("**** 	  1.play     0.exit       ****\n");
//	printf("**************************************\n");
//}
// 
////RAND_MAX//值是32767
//
//void game()
//{
//	//1.生成一个随机数
//	int ret = 0;
//	int guess = 0;//接收猜的数字
//	//拿时间戳来设置随机数的生成起始点
//	//time_t time(time_t *timer)
//	//time_t
//	ret = rand()%100+1;//生成1-100之间随机数
//	//printf("%d\n", ret);
//	//2.猜数字
//	while (1)
//	{
//		printf("请猜数字:>\n");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了!\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do 
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//猜数字游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//int main()
//{
//again:
//	printf("hello world!\n");
//	goto again;//
//	return 0;
//}

//一个关机程序
int main()
{
	char input[20] = { 0 };
	//shutdown -s -t 60
	//system()- 执行系统命令的
	system("shutdown -s -t 60");
//again:
	while (1)
	{
		printf("请注意，你的电脑1分钟内关机，如果输入：我是笨蛋，就取消关机\n请输入:>");
		scanf("%s", input);
		if (strcmp(input, "我是笨蛋") == 0)//比较两个字符串-strcmp()
		{
			system("shutdown -a");
			break;
		}
	}
	/*else
	{
		goto again;
	}*/
	return 0;
}