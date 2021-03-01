#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void func(int n){
//	if (n > 9){
//		func(n / 10);
//	}
//	printf("%d\n", n % 10);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	//int n = 1234;
//	func(n);
//
//	return 0;
//}
//
//int fun(int n)
//{
//	if (n > 1)
//		n = n*fun(n - 1);
//	return n;
//}
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int ret = fun(n);
//		printf("%d\n", ret);
//	}
//
//	return 0;
//}


//void reverse_string(char * string)
//{
//	*string=
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//
//	return 0;
//}
//
//int DigitSum(n)
//{
//	int i = 0;
//	if (n>9)
//	{
//		DigitSum(n / 10);
//
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret=DigitSum(n);
//	printf("%d\n", ret);
//	return 0;
//}

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j<sz - 1; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 9, 2, 3, 4, 5, 6, 7, 8, 1 ,0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);	
//	int a = 0;
//	for (a = 0; a < sz ;a++)
//	{
//		printf("%d ", arr[a]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* pa = arr;
//	char*pc = arr;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	printf("-----------\n");
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int*p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	char*pc = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(pc + i) = 'x';
//		printf("%c ", *(pc + i));
//	}
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int*p = test();
//	printf("hhhhh\n");
//	printf("%d\n", *p);//野指针，指针指向的位置不可知
//
//	return 0;
//}

//int main()
//{
//	int*p;
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int*p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int *q = NULL;
//
//	return 0;
//}

//int main()
//{
//	int* p = NULL;
//	if (p!=NULL)
//	*p = 20;
//	//NULL指向的空间不能访问
//	//指针使用前检查其有效性
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i;
//		printf("%d ", *(p + i));
//
//	}
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p++ = i;
//
//	}
//	*p = arr;
//	return 0;
//}

int main()
{
	int arr[5] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		*p++ = i;

	}
	*p = arr;
	return 0;
}