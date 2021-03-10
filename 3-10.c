#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//void print1(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r;i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print2(int (*p)[5],int r,int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		//*(p + i);----第i行，i从0开始
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//			//*(p+i)是跳过i行之后的那一行，也相当于这一行的数组名
//			//p+i是跳过i后的那一行的地址
//			//*(p+i)+j是跳过i行后的那一行的下标为j的元素地址
//			//*(*(p + i) + j)是跳过i行后的那一行的下标为j的元素
//		}
//		printf("\n");
//	}
//
//}
////二维数组传参，数组名也是首元素的地址，二维数组的首元素是第一行
////传过去的就是第一行的地址
//
//print3(int*p,int sz)
//{
//	 
//}
//
//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//	int a[5];
//	print3(a, 5);
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//
//	return 0;
//}

//void test(int *p)
//{
//
//}
//
//int main()
//{
//	int a =10 ;
//	int *pa = &a;
//	int arr[10] = { 0 };
//	test(&a);
//	test(pa);
//	test(arr);
//
//	return 0;
//}

//void test(int **p)
//{
//
//}
//int main()
//{
//	int a = 10;
//	int *pa = &a;
//	int **ppa = &pa;
//	int* arr[10];
//
//	test(&pa);
//	test(ppa);
//	test(arr);
//
//}

//int main()
//{
//	int* arr[5];
//	int data[10] = {0};
//	int(*pd)[10] = &data;
//
//	//int(*)[10]类型
//	//int(*)[10]pd错误
//
//	return 0;
//}

int main()
{
	int arr[10] = { 0 };
	int* p=arr;//首元素地址
	int (*pa)[10]=&arr;//数组的地址

	int data[3][5] = { 0 };
	int(*pd)[5] = data;//二维数组首元素的地址
	int (*p2)[3][5]=&data;
	
	return 0;
}