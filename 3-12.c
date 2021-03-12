#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int main()
{
	int a = 10;
	int b = 20;
	//&a,&b;
	int* arr[] = { &a, &b };
	//函数指针的数组
	int (*pf1)(int, int) = Add;
	int (*pf2)(int, int) = Sub;
	return 0;
}