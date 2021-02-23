#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void prime_number()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i++)
//	{
//		int flag = 0;
//		for (int j = 1; j < i; j++)
//		{
//			if (i%j == 0)
//				flag++;
//		}
//		if (flag == 1)
//			printf("%d ", i);
//	}
//}
//
//int main()
//{
//	prime_number();
//	return 0;
//}
//int judge(year)
//{
//		return ((year % 4 == 0) && (year % 100 == 0)) || (year % 400 == 0);
//}
//
//int main()
//{
//	int year = 0;
//	if (scanf("%d", &year) != EOF)
//	{
//		int runnian = judge(year);
//		if (year == 1)
//			printf("是闰年\n");
//		else
//			printf("不是闰年\n");
//	}
//	return 0;
//}
//void swap(int *pa,int *pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a, b;
//	//a = 4;
//	//b = 5;
//	scanf("%d %d", &a, &b);
//	int *pa = &a;
//	int *pb = &b;
//	swap(pa,pb);
//	printf("%d %d", a, b);
//	return 0;
//}

int main()
{
	int a = 0;
	int j = 0;
	scanf("%d", &a);
	for (int i = 1; i <= a; i++)
	{
		for (j = 1; j <= i; j++)
		{
			int ret = i*j;
			printf("%2d*%2d=%2d  ", i, j, ret);
			if (i == j)
				printf("\n");
		}
	}
	return 0;
}