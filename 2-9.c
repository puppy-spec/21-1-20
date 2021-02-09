#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//二分查找复习
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (right >= left)
//	{
//
//		int mid = left + (right - left) / 2;
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
//			printf("找到了，下标是:>%d",mid);
//			break;
//		}
//
//	}
//	if (right < left)
//	{
//		printf("找不到");
//	}
//
//	return 0;
//}
//#include<stdlib.h>
//#include<time.h>
//
//void menu()
//{
//	printf("猜数字游戏\n");
//	printf("**************\n");
//	printf("*** 1.play****\n");
//	printf("*** 0.exit****\n");
//	printf("**************\n");
//}
//
//void game()
//{
//
//	//time函数返回时间戳
//	int ret=rand()%100+1;
//	int guess = 0;
//	//printf("%d\n", ret);
//	while (1)
//	{
//		printf("请猜数字:>");
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
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		menu();
//		printf("请选择（1/0）:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break; 
//		case 0:
//			printf("退出游戏");
//			break;
//		default:
//			printf("选择错误");
//			break;
//		}
//
//	} while (input);
//
//	return 0;
//}

//int main()
//{
//flag:
//	printf("hehe");
//	printf("hehe");
//	printf("hehe");
//	printf("hehe");
//	goto flag;//goto只能在本函数内应用
//
//	return 0;
//}
#include<string.h>
#include<stdlib.h>

//int main()
//{
//	char input[20] = "";
//	system("shutdown -s -t 60");
//again:
//
//	printf("请注意，你的电脑在一分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", &input);
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

//int main()
//{
//	char input[20] = "";
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("请注意，你的电脑在一分钟内关机，如果输入：我是猪，就取消关机\n");
//		scanf("%s", &input);
//		if (strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}


//int Add(int x,int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);
//	printf("%s",arr);
//
//	return 0;
//}

//get_max(int x, int y)
//{
//	int z = (x > y) ? x : y;
//	return z;
//}
//void Swap(int *px, int *py)
//{
//	int z = 0;
//	z = *px;
//	*px = *py;
//	*py = z;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("%d\n", max);
//
//	Swap(&a, &b);
//	printf("a=%d b=%d", a, b);
//	return 0;
//}