#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//&a,&b;
//	int* arr[] = { &a, &b };
//	int(*pf1)(int, int) = Add;
//	int(*pf2)(int, int) = Sub;
//	int(*pfA[4])(int, int);//函数指针的数组
//
//	//函数指针数组
//
//	//pfArr2就是函数指针数组
//	//int(*pfArr[2])(int, int) = { Add, Sub };
//
//	return 0;
//}

//计算器——加减乘除
//void menu()
//{
//	printf("*******************\n");
//	printf("***1.Add  2.Sub****\n");
//	printf("***3.mul  4.div****\n");
//	printf("***0.exit**********\n");
//	printf("*******************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
////int main()
////{
////	int x = 0;
////	int y = 0;
////	int ret = 0;
////	int input = 0;
////	int(*pfArr[])(int,int) = { 0, Add, Sub, Mul, Div };
////	do
////	{
////		menu();
////		printf("请选择：>");
////		scanf("%d", &input);
////		if (0 == input)
////		{
////			printf("退出程序\n");
////			break;
////		}
////		else if (input >= 1 && input <= 4)
////		{
////			printf("请输入两个操作数:>");
////			scanf("%d%d", &x, &y);
////
////			ret = pfArr[input](x, y);
////			printf("%d\n", ret);
////		}
////		else
////			printf("选择错误\n");
////
////		
////	}while (input);
////
////	return 0;
////}
//
//void calc(int(*p)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &x, &y);
//	
//	ret = p(x, y);
//	printf("%d\n", ret);
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}
//
////函数指针数组
////存放函数指针的数组
////&数组名？  可以
////指向函数指针数组的指针中
//
//
////int main()
////{
////	//指向加法运算的函数指针
////	int(*p)(int, int);//函数指针
////	//函数指针的数组
////	int(*pArr[4])(int, int);
////	//指向函数指针数组的指针
////	int(*(ppArr)[4])(int,int) = &pArr;
////
////
////	return 0;
////}
//
//void test1()
//{
//	printf("hhhhh\n");
//}
////回调函数是通过函数指针调用的函数
////函数传参——函数指针
//
//void test2(void(*p)())
//{
//	p();
//}
//
//int main()
//{
//	test2(test1);
//
//	return 0;
//}

//冒泡排序
//
//对一个整形数组进行冒泡排序的
//

//void bobble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <sz-1-i ; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//void print(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[] = { 1, 5, 2, 4, 3, 9, 8, 6, 7, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr, sz);
//	print(arr, sz);
//}

//库函数——qsort——quick sort
//排序任意类型的数据

void test1()
{
	//qsort排序整形数组
	int arr[] = { 1, 5, 2, 4, 3, 9, 8, 6, 7, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);


}

int main()
{
	test1();

	return 0;
}
