#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

//��������Ϸ
//1.���Ի�����һ�������
//2.������

//void menu()
//{
//	printf("**************************************\n");
//	printf("**** 	  1.play     0.exit       ****\n");
//	printf("**************************************\n");
//}
// 
////RAND_MAX//ֵ��32767
//
//void game()
//{
//	//1.����һ�������
//	int ret = 0;
//	int guess = 0;//���ղµ�����
//	//��ʱ����������������������ʼ��
//	//time_t time(time_t *timer)
//	//time_t
//	ret = rand()%100+1;//����1-100֮�������
//	//printf("%d\n", ret);
//	//2.������
//	while (1)
//	{
//		printf("�������:>\n");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���!\n");
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
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//��������Ϸ
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
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

//һ���ػ�����
int main()
{
	char input[20] = { 0 };
	//shutdown -s -t 60
	//system()- ִ��ϵͳ�����
	system("shutdown -s -t 60");
//again:
	while (1)
	{
		printf("��ע�⣬��ĵ���1�����ڹػ���������룺���Ǳ�������ȡ���ػ�\n������:>");
		scanf("%s", input);
		if (strcmp(input, "���Ǳ���") == 0)//�Ƚ������ַ���-strcmp()
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