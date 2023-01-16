#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()
//{
//	int ch = 0;
//	//ctrl + z
//	//EOH - end of file -> -1
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	//int ch = getchar(); 
//
//	//putchar(ch);
//	//printf("%c\n", ch);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;//终止本次循环，直接跳入下一次循环
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int m = 2, n = 1;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++; 
//			n++;
//			break;
//		default:
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//		case 1:
//			if (day == 1)
//				printf("666666\n");
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("工作日\n");
//			break;
//		case 6:
//		case 7:
//			printf("休息日\n");
//			break;
//		default:
//			printf("输入错误：请输入1-8的整数\n");
//			break;
//	}
	//switch (day)//括号里整型
	//{
	//case 1:
	//	printf("星期一\n");
	//	break;
	//case 2:
	//	printf("星期二\n");
	//	break;
	//case 3:
	//	printf("星期三\n");
	//	break;
	//case 4:
	//	printf("星期四\n");
	//	break;
	//case 5:
	//	printf("星期五\n");
	//	break;
	//case 6:
	//	printf("星期六\n");
	//	break;
	//case 7:
	//	printf("星期日\n");
	//	break;
	//}
//	return 0;
//}

//int main()
//{
//	int num=1;
//	printf("这是1-100的所有奇数：\n");
//	while (num <= 100)
//	{
//		printf("%d ", num);
//		num += 2;
//	}
//	/*while (num<=100)
//	{
//		if(num%2==1)
//		printf("%d\n", num);
//		num++;
//	}*/
//	return 0;
//}

//int main()
//{
//	int num, remain;
//	printf("请输入一个整数：");
//	scanf("%d", &num);
//	remain = num % 2;
//	if (remain==1)
//	{
//		printf("%d是奇数\n", num);
//	}
//	else
//	{
//		printf("%d不是奇数，是偶数\n", num);
//	}
//	return 0;
//}

