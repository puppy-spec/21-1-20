#define _CRT_SECURE_NO_WARNINGS 1
#include<limits.h>
#include<stdio.h>
#include<string.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("，现在输入：我是猪，就不会关机，不然一分钟之后就关了呢\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int i = 0;
//	int ret = (2, 3);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d,", i);
//	}
//
//	return 0;
//}



//错误方法
//int main()
//{
//	int sum = 0;
//	int day = 0;
//	for (sum = 0; 1; sum++)
//	{
//		for (day = 0;1; day++)
//		{
//			if (sum == 4 * day + 48 && sum == 6 * day - 8)
//				printf("计划吃%d天，买了%d个",day,sum);
//		}
//	}
//
//	return 0;
//}

void math(int a1, int b1, int c1, int a2, int b2, int c2)
{
	//行列式求解二元一次方程组
	//a1 b1 c1
	//a2 b2 c2
	int x, y;
	x = (c1 * b2 - c2 * b1) / (a1 * b2 - a2 * b1);
	y = (a1 * c2 - a2 * c1) / (a1 * b2 - a2 * b1);
	printf("准备了%d个，准备吃%d天\n", x, y);

}
int main()
{
	int a1, b1, c1, a2, b2, c2;
	printf("请输入二元一次方程的六个参数：");
	scanf("%d%d%d%d%d%d", &a1, &b1, &c1, &a2, &b2, &c2);
	math(a1, b1, c1, a2, b2, c2);




	//错误
	//static int sum = 0;
	//int day = 0;
	//for (day = 0; sum != 4 * day + 48 && sum != 6 * day - 8; day++)
	//{
	//	for (  sum ; sum != 4 * day + 48 && sum != 6 * day - 8; sum++)
	//	{
	//		if (sum == 4 * day + 48 && sum == 6 * day - 8)
	//			printf("计划吃%d天，买了%d个", day, sum);
	//	}
	//}

	return 0;
}