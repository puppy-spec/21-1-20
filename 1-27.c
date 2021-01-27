#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//int main()
//{
//	int a = 10;
//	int * p=&a;//指针变量
//	*p = 100;
//
//
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//
//	char *p = &a;
//	*p = 0;
//	//指针的类型的第一个作用就是：决定了指针的访问权限，也就是能访问几个字节
//	//int*   --4
//	//char*  --1
//	//short* --2
//	return 0;
//}


int main()
{
	int arr[10] = { 0 };
	//希望把arr这十个整形的空间，看作四十个字节
	//每个字节放一个字符进去
	char *p = arr;
	int i = 0;
	for (i = 0; i < 40; i++)
	{
		*(p + i) = 'x';
	}
	for (i = 0; i < 40; i++)
	{
		printf("%c ", *(p + i));
	}
	//int*p = arr;
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	*(p + i) = i;
	//}
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d\n", *(p + i));
	//}

	//char*pc = arr;
	////printf("%p\n",arr);
	///*printf("%p\n", arr);*/
	//printf("%p\n", pa);
	//printf("%p\n", pa+1);
	//printf("------------\n");
	//printf("%p\n", pc);
	//printf("%p\n", pc+1);


	//指针类型决定了指针+/-1走多大的距离
	//7
	return 0;
}

