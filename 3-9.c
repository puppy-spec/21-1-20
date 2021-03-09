#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	const char*p = "abcdef";
//
//
//	return 0;
//}

//int main()
//{
//	//指针数组
//	int arr[10];
//	int* arr1[10];
//	char **arr2[10];
//
//	return 0;
//}

//int main()
//{
//	//数组指针-指针
//	//好孩子-孩子
//	//整形指针-指向整形的指针
//	//int a=10;
//	//int* p=&a;
//	//字符指针-指向字符的指针
//	//数组指针-指向数组的指针
//	//
//	int a = 10;
//	int* p = &a;
//	char  ch = 'w';
//	char* pc = &ch;
//	int arr[10] = { 0 };
//	int(*pa)[10]=&arr;//数组的地址
//	//pa就是一个指向数组的指针-数组指针
//	char ch[5];
//	char(*p3)[5] = &ch;
//	
//	//&arr 数组名是整个数组，取出的是数组的地址
//	//&arr是数组的地址，arr是数组首元素的地址
//
//	return 0;
//}

//int main() 
//{
//	int arr[10] = { 1, 2, 3, 4, 5 };
//	int* p1=arr;
//	int(*p2)[10]=&arr;
//	printf("%p\n", p1);
//	printf("%p\n", p1+1);
//
//	printf("%p\n", p2);
//	printf("%p\n", p2+1);
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//int* p=arr;
//	//int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", *(p + i));
//	//}
//	int(*p)[10] = &arr;
//	printf("%", (*p));
//	//*p<==>arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)[i]);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#define PI 3.14
//int main()
//{
//	float volume, surface, r;
//	printf("请输入球体半径:\n");
//	scanf("%f", &r);
//	volume = r*r*r*PI*4.0 / 3;
//	surface = 4 * PI*r*r;
//	printf("球体的体积是%f\n", volume);
//	printf("球体的表面积是%f\n", surface);
//	return 0;
//}

int main()
{


	return 0;
}