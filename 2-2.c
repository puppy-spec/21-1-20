#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	//指针数组 - 存放指针的数组
//	int* arr[5];//
//	//数组指针 - 指向数组的指针
//	int data[10] = {0};
//	int (*pd)[10] = &data;
//	//int (*)[10]
//	//int a = 10;
//
//	return 0;
//}
//void test1(int*p)
//{}
//void test2(int(*p)[4])
//{}
//int main()
//{
//	//一维数组
//	int arr[10];
//	int* p = arr;//首元素的地址
//	int (*pa)[10] = &arr;//数组的地址
//	test1(arr);
//
//	//二维数组
//	int data[3][4];
//	int (*pd)[4] = data;//首元素的地址
//	int (*p2)[3][4] = &data;
//	test2(data);
//
//	return 0;
//}

//整形指针 - 指向整形的指针
//数组指针 - 指向数组的指针 - 存放数组的地址
//函数指针 - 指向函数的指针 - 存放函数的地址

//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//void test(char* str)
//{
//}
//
//
//int main()
//{
//	//int a = 10;
//	//int* pa = &a;
//
//	//char arr[5] = {0};
//	//char (*parr)[5] = &arr;
//
//	//printf("%p\n", &Add);
//	//int (*pf)(int, int) = &Add;//pf就是函数指针
//
//	//void (*p)(char*) = &test;
//
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//	int(* pf)(int, int) = &Add;//&Add;
//
//	int ret = (*pf)(2, 3);//int ret = Add(2, 3);
//	//Add(2, 3);
//	//pf(2, 3);
//
//	printf("%d\n", ret);
//
//	return 0;
//}
//
//#include <assert.h>
//
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