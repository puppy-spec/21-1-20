#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
//复习猜数字（自己写）
//void menu()
//{
//	printf("*****************\n");
//	printf("*****1.play******\n");
//	printf("****2.exit******\n");
//	printf("*****************\n");
//
//}
//void game()
//{
//	int ret = rand() % 100 + 1;
//	int guess = 0;
//
//	while (1)
//	{
//		printf("请猜数字：》");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了");
//		}
//		else
//		{
//			printf("猜对了");
//			break;
//		}
//	}
//
//}
//
//int main()
//{
//	int input=0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		scanf("%d", &input);
//
//		if (1 == input)
//		{
//			printf("开始游戏");
//			game();
//		
//		}
//		else if (2 == input)
//		{
//			printf("结束游戏");
//			break;
//		}
//		else
//		{
//			printf("选择错误");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}