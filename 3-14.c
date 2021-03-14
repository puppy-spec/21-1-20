#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//
////void qsort(void *base,
////	size_t num,
////	size_t width,
////	int(*cmp)(const void *e1, const void *e2));
//
//int cmp_int(const void *e1, const void *e2)
//{
//	//if (*(int*)e1 > *(int*)e2)
//	//{
//	//	return 1;
//	//}
//	//else if (*(int*)e1 < *(int*)e2)
//	//{
//	//	return -1;
//	//}
//	//else
//	//	return 0;
//
//	return *(int*)e1 - *(int*)e2;
//}
//
//void test1()
//{
//	int arr[] = { 1, 5, 3, 2, 6, 4, 7, 9, 8, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int );
//	print(arr, sz);
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
////int cmp_stu_by_age(const void*e1, const void*e2)
////{
////	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
////}
//
//int cmp_stu_by_name(const void*e1, const void*e2)
//{
//	return strcmp(((struct Stu*)e1)->name , ((struct Stu*)e2)->name);
//}
//
//void test2()
//{
//	struct Stu arr[] = { { "zhangsan", 20 }, { "lisi", 31 }, { "wangwu", 15 } };
//	//按年龄排序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
//	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//	//int*pa = &a;
//	//*pa = 20;
//
//	//void*pv = &a;
//	//void*的指针变量可以接收任意类型的地址
//	//因为void*的指针，没有具体类型，所以不能解引用操作，不能++--操作
//
//	//*pv = 0;
//	//pv++;
//
//	return 0;
//}

//模拟实现qsort
//模拟实现qsort
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void _swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort(void* base,size_t sz, size_t width, int(*cmp)(const void *e1,const void*e2))
//{
//	size_t i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		size_t j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//相邻两个元素比较
//			if (cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
//			{
//				//不满足就顺序就交换
//				_swap((char*)base + j*width, (char*)base + (j + 1)*width,width);
//			}
//		}
//	}
//}
//
//int cmp_int(const void*e1, const void*e2)
//{ 
//	return *(int*)e1 - *(int*)e2;
//}
//
//void test3()
//{
//	//qsort 排序整形数组
//	int arr[] = { 2, 3, 4, 5, 3, 4, 6, 8, 7, 9, 1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	print(arr, sz);
//}
//
//int main()
//{
//	test3();
//
//	return 0;
//}

//sizeof（操作符——计算操作数的所占空间大小的
//类型，变量，数组
//计算大小的时候，不在乎内存中放的值

//strlen——求【字符串】长度的
//只使用于：字符串，字符数组,求长度时关注\0 
//库函数

int main()
{
	

	return 0;
}