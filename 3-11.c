#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//
//
//void fun(struct stu *p)
//{
//	printf("%s\n", (*p).name);
//	return;
//}
//
//
//int main()
//{
//	struct stu students[3] = { { 9801, "zhang", 20 },{ 9802, "wang", 19 },{ 9803, "zhao", 18 }};
//	fun(students + 1);
//	return 0;
//}

//unsigned int a = 0x1234;
//unsigned char b = *(unsigned char *)&a;

//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d", a + b, c);
//	return 0;
//}

//void test1(int *p)
//{
//}
//
//void test(int(*p)[4])
//{
//
//}
//
//int main()
//{
//	int arr[10];
//	int* p = arr;
//	int(*p)[10] = &arr;
//	test1(arr);
//
//	int data[3][4];
//	int(*pd)[4] = data;
//	int(*p2)[3][4] = &data;
//	test2(&data);
//
//	return 0;
//}


//整形指针——指向整形的指针
//数组指针——指向数组的指针
//函数指针——指向函数的指针——存放函数的地址

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//void test(char* str)
//{
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	char arr[5] = { 0 };
//	char(*parr)[5] = &arr;
//	
//	printf("%p\n", &Add);
//	int(*pf)(int,int) = &Add;//pf就是函数指针
//	void(*p)(char*) = &test;
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//
//	//int ret = (*pf)(2, 3);
//	int ret = pf(2, 3);
//	printf("%d\n", ret);
//	
//	return 0;
//}
#include<assert.h>

//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str)
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	//int len = my_strlen(arr);
//	//printf("%d\n", len);
//	int(*pf)(const char*) = my_strlen;
//	int len=(*pf)("bit");
//	printf("%d\n", len);
//
//	len = pf("hello bit");
//	printf("%d\n", len);
//
//	return 0;
//}

int main()
{


	return 0;
}