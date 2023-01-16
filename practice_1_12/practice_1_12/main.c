#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>

//1.计算n的阶乘
//int main()
//{
//	int i, n = 0;
//	int j = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{ 
//		j = i * j;
//	}
//	printf("n的阶乘为： %d\n", j);
//	return 0;
//}

//2.计算1!+2!+3!+......+10!
//int main()
//{
//	int i, j, sum = 0;
//	int ret = 1;
//	for (j = 1; j <= 10; j++)
//	{
//		ret = j * ret;
//		sum = sum + ret;
//	}
//	printf("10的阶乘为： %d\n", ret);
//	printf("1-10的阶乘的和为：%d\n", sum);
//	return 0;
//}

//二分查找
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int size = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;//左下标
//	int right = size - 1;//右下标
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
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
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
//		//休息一秒
//		Sleep(1000);
//		system("cls");//执行系统命令的一个函数 - cls -清空屏幕
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
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "666666") == 0)//==不能用来判断两个字符串是否相等，应该用一个库函数-strcmp
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//		if (i == 3)
//			printf("三次密码均错误，退出程序\n");
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
//		for (j = 0; j < 10; j++)//100次//for (; j < 10; j++)//10次
//		{
//			printf("只因你太美\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	//10次循环
//	//10个元素
//	//10次打印
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
//			printf("我是\n");
//		printf("老六\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	//初始化    判断     调整
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
//	printf("请输入密码:>");
//	scanf("%s", password);//输入密码并存放在password数组中
//	//缓冲区还剩余一个'\n'
//	//读取一下'\n'
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认(Y/N):>");
//	ret = getchar();//Y/N
//	if (ret=='Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}
