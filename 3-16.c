#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//void print(int arr[],int sz)
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
//
//int cmp_int(const void *e1,const void *e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void my_qsort(void* base, size_t sz, size_t width, int(*cmp_int)(const void *e1, const void *e2))
//{
//	size_t i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		size_t j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp_int((char*)base + j*width, (char*)base + (j + 1)*width)>0)
//			{
//				_swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
//			}
//		}
//	}
//}
//
//void test1()
//{
//	int arr[] = { 3, 2, 4, 7, 9, 6, 5, 4, 2, 1, 8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	my_qsort(arr,sz,sizeof(arr[0]),cmp_int);
//	print(arr,sz);
//}
//
//int main()
//{
//	test1();
//
//	return 0;
//}



//void print2(char arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	printf("\n");
//}
//
//
//int cmp_char(const void*e1, const void*e2)
//{
//	//if (*(char*)e1 > *(char*)e2)
//	//	return 1;
//	//else if (*(char*)e1 < *(char*)e2)
//	//	return -1;
//	//else
//	//	return 0;
//	return *(char*)e1 - *(char*)e2;
//
//}
//
//void test2()
//{
//	char arr[] = { 'b', 'c', 'a' };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_char);
//	print2(arr, sz);
//}
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_stu_by_age(const void*e1, const void*e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//int cmp_stu_by_name(const void*e1, const void*e2)
//{
//	return strcmp(((struct Stu*)e1)->name , ((struct Stu*)e2)->name);
//}
//void test3()
//{
//	struct Stu arr[] = { { "zhangsan", 20 }, { "lisi", 31 }, { "wangwu", 15 } };
//	//按年龄排序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
//	//按名字排序
//	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
//
//}
//int  main()
//{
//	test2();
//	test3();
//	return 0;
//}

//struct Book
//{
//	//成员变量
//	char name[20];
 //	short price;
//
//}b2,b3,b4;

//typedef struct Book
//{
//	char name[20];
//	char author[20];
//	short price;
//}Book;
//
////匿名结构体类型
//struct 
//{
//	char c;
//	int a;
//	short s;
//}s;
//
//struct
//{
//	char c;
//	int a;
//	short s;
//}*ps;
//int main()
//{
//	struct Book b1 = { "c语言程序设计", "谭浩强", 55 };
//	printf("%s %s %d\n", b1.name, b1. author, b1.price);
//	Book b2 = { "c++程序设计", "zhangsan", 45 };
//	return 0;
//}
//err
//typedef struct
//{
//	int data;
//	Node* next;
//}Node;

//struct Node
//{
//	int data;
//	struct Node* next;//指针域
//}Node;
//
#include<stddef.h>
struct S1
{
	char c1;
	int i;
	char c2;
};
//offsetof-计算的是结构体成员相对于结构体起始位置的偏移量
int main()
{
	struct S1 s1;
	printf("%d\n", sizeof(s1));
	printf("%d\n", offsetof(struct S1, c1));
	printf("%d\n", offsetof(struct S1, i));
	printf("%d\n", offsetof(struct S1, c2));
	return 0;
}	