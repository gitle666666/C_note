#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//�����ϰ1.��дһ�����򣬰��÷��ӱ�ʾ��ʱ��ת������Сʱ�ͷ��ӱ�ʾ��ʱ
//�䡣ʹ��#define��const����һ����ʾ60�ķ��ų�����const������ͨ��while
//ѭ�����û��ظ�����ֵ��ֱ���û�����С�ڻ����0��ֵ��ֹͣѭ����
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
//	else printf("������");
//	return 0;
//}
//int main()
//{
//	int minute_time = 0;
//	int hour_minute_time = 0;
//	while((scanf("%d", &minute_time) == 1) && minute_time > 0)//������ȷ�ķ���
//	{
//		hour_minute_time = minute_time / recycle;
//		minute_time = minute_time % recycle;
//		printf("%dСʱ%d����\n", hour_minute_time, minute_time);
//	}
//	return 0;
//}
//int main()
//{
//	int minute_time=0;
//	int hour_minute_time = 0;
//	//printf("������");
//	scanf("%d\n", &minute_time);
//	while ( minute_time > 0)
//	{   
//		hour_minute_time = minute_time / recycle;
//		minute_time = minute_time % recycle;
//		printf("%dСʱ%d����\n", hour_minute_time, minute_time);
//		scanf("%d\n", &minute_time);
//	}
//	return 0;
//}

//�����ϰ2.��дһ��������ʾ�û�����һ��������Ȼ���ӡ�Ӹ������ȸ�����
//10���������������磬�û�����5�����ӡ5��15����������������5��
//15����Ҫ���ӡ�ĸ�ֵ֮����һ���ո��Ʊ�����з��ֿ�

//int main()
//{
//	int num,num2;
//	printf("������һ��������");
//	scanf("%d", &num);
//	printf("�Ӹ������ȸ�����10�������������£�\n");
//	num2 = num + 10;
//	while (num<=num2)
//	{
//		printf("%d\n", num);
//		num++;
//	}
//	return 0;
//}

//�����ϰ3.��дһ��������ʾ�û�����������Ȼ����ת������������������
//�磬�û�����18����ת����2��4�졣������ĸ�ʽ��ʾ�����
//18 days are 2 weeks, 4 days.
//ͨ��whileѭ�����û��ظ��������������û�����һ������ֵʱ����0
//�� - 20����ѭ��������

//int main()
//{
//	int day, week,day_r;
//	printf("������������");
//	while ((scanf("%d",&day) == 1) && day > 0)
//	{
//		week = day / 7;
//		day_r = day % 7;
//		printf("����ת��Ϊ������������\n");
//		printf("%d days are %d weeks, %d days.\n", day, week, day_r);
//	}
//	return 0;
//}

//4.��дһ��������ʾ�û�����һ����ߣ���λ�����ף������ֱ�����
//�׺�Ӣ��Ϊ��λ��ʾ��ֵ��������С�����֡�����Ӧ�������û��ظ�������
//�ߣ�ֱ���û�����һ������ֵ�������ʾ�����£�
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
//		feet = height / 30.48;//��Ӣ����
//		inches = (height-(int)feet*30.48)/ 2.54;//��Ӣ����
//		printf("%4.1f cm = %d feet, %4.1f inches\n",height,(int)feet/*ǿ����ת��*/, inches);
//		printf("Enter a height in centimeters(<= 0 to quit) : ");
//	}
//	printf("bye");
//	return 0;
//}

//5.�޸ĳ���addemup.c�������嵥5.13�����������Ϊaddemup.c�Ǽ���20
//����׬����Ǯ�ĳ��򣨼����1��׬$1����2��׬$2����3��׬$3���Դ���
//�ƣ����޸ĳ���ʹ��������û������������û�����������м��㣨����
//�ö����һ������������20����
/* addemup.c -- ���ֳ�������� */
//#include <stdio.h>
//int main(void) /* ������������������ĺ� */
//{
//	int count,sum,day;/* ����[1] */
//	count = 0; /* ���ʽ��� */
//	sum = 0; /* ���ʽ��� */
//	printf("������������");
//	scanf("%d", &day);
//	while (count++ < day) /* ������� */
//		sum = sum + count;
//	printf("����%d����׬��$%d\n", day,sum); /* ���ʽ���[2] */
//	return 0; /* ��ת��� */
//}

//6.�޸ı����ϰ5�ĳ���ʹ���ܼ���������ƽ���ͣ�������Ϊ��1��׬
//$1����2��׬$4����3��׬$9���Դ����ƣ��⿴�����ܲ�����Cû��ƽ����
//�������ǿ�����n * n����ʾn��ƽ����

//int main(void) /* �������������������ƽ���� */
//{
//	int count, sum, day;
//	count = 0; 
//	sum = 0; 
//	printf("������������");
//	scanf("%d", &day);
//	while (count++ < day) 
//		sum = sum + count*count;//ƽ�������
//	printf("����%d����׬��$%d\n", day,sum);
//	return 0; 
//}

//7.��дһ��������ʾ�û�����һ��double���͵���������ӡ��������
//��ֵ���Լ����һ���������㲢��ӡ����ֵ��main()����Ҫ���û������ֵ
//���ݸ��ú�����

//void figure (double x)
//{
//	x = x * x * x;
//	printf("����������ֵ��%lf\n", x);
//}
//
//int main() 
//{
//	double num;
//	printf("������һ��С����");
//	scanf("%lf", &num);
//	figure(num);
//	return 0;
//}

//8.��дһ��������ʾ��ģ����Ľ�������û�����ĵ�1��������Ϊ
//��ģ������ĵ�2��������󣬸�������������б��ֲ��䡣�û���������
//�����ǵ�1��������󡣵��û�����һ������ֵʱ����������������ʾ��
//���£�
//This program computes moduli.����ģ���㣩
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
//	printf("This program computes moduli.����ģ���㣩\n");
//	printf("Enter an integer to serve as the second operand : ");
//	scanf("%d", &n);
//	printf("Now enter the first operand : ");
//	while ((scanf("%d", &m) == 1) && (m > 0) && (n > 0))
//	{
//		r = m % n;
//		printf("%d  ģ  %d is %d\n", m, n, r);//ģ�������- % -��û�������ô�ŵ��ַ�����
//		printf("Enter next number for first operand(<= 0 to quit) : ");
//	}
//	printf("Done");
//	return 0;
//}

//9.��дһ������Ҫ���û�����һ�������¶ȡ�����Ӧ��ȡdouble����
//��ֵ��Ϊ�¶�ֵ�����Ѹ�ֵ��Ϊ�������ݸ�һ���û��Զ���ĺ���
//Temperatures()���ú������������¶ȺͿ����¶ȣ�����С���������λ����
//�ľ�����ʾ3���¶ȡ�Ҫʹ�ò�ͬ���±�����ʾ��3���¶�ֵ�������ǻ�����
//��ת�����¶ȵĹ�ʽ��
//�����¶� = 5.0 / 9.0 * (�����¶� - 32.0)
//�����±곣���ڿ�ѧ�о���0��ʾ�����㣬������͵��¶ȡ���������
//���¶�ת�����¶ȵĹ�ʽ��
//�����¶� = �����¶� + 273.16
//Temperatures()��������const�����¶�ת����ʹ�õı�������main()����
//��ʹ��һ��ѭ�����û��ظ������¶ȣ����û����� q ������������ʱ��ѭ��
//������scanf()�������ض�ȡ���ݵ����������������ȡ�����򷵻�1�����
//��ȡq�򲻷���1������ʹ�� == �������scanf()�ķ���ֵ��1���Ƚϣ�������
//ֵ�Ƿ���ȡ�

 /*void Temperatures(double x)
{
	double y, z;
	y = 5.0 / 9.0 * (x - 32.0);
	z = y + 273.16;
	printf("�����¶ȣ�%5.2lfF\n�����¶ȣ�%5.2lfC\n�����¶ȣ�%5.2lfK\n", x, y, z);
}

int main()
{
	double FT;
	printf("������һ�������¶ȣ�");
	while ((scanf("%lf", &FT) == 1) && FT >= -459.67)
	{
		Temperatures(FT);
		printf("������һ�������¶ȣ�");
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
//	struct Wage_system w1 = { "������",1234567890,6666 };
//	strcpy(w1.name,"��ӯӯ");//strcpy-string copy -�ַ�������-�⺯��-string.h
//	printf("%s\n", w1.name);
	//struct Wage_system* pb = &w1;
	////.		�ṹ�����.��Ա
	////->	�ṹ��ָ��->��Ա
	//printf("%s\n", pb->name);
	//printf("%d\n", pb->job_number);
	//printf("%d\n", pb->money);
	///*printf("������%s\n", (*pb).name);
	//printf("���ţ�%d\n", (*pb).job_number);
	//printf("���ù��ʣ�%dԪ\n", (*pb).money);*/

	///*printf("������%s\n", w1.name);
	//printf("���ţ�%d\n", w1.job_number);
	//printf("���ù��ʣ�%dԪ\n", w1.money);*/
	//return 0;
//}