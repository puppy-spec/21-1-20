#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	printf("hhhhh\n");
//	main();
//	return 0;
//}

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	int num;
//	scanf("%d", &num);
//	print(num);
//
//	return 0;
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//    char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}


//int Fac(int n)
//{
//	if (n >0)
//		return n*Fac(n - 1);
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int s = Fac(n);
//	printf("%d\n", s);
//	return 0;
//}

//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	int arr[10];
//	char ch[5 + 5];
//
//	return 0;
//}

int main()
{
	int n = 0;
	//int arr[n];//变长数组——C99标准中引入的，vs2013对c99的支持不好
	//初始化
	int arr[10] = { 1 };//不完全初始化
	int arr2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr3[10] = { 0 };
	int arr4[] = { 0 };
	char ch[10] = { 'a', 'b', 'c' };
	char ch2[10] = { 0 };
	char ch3[] = "abc";
	return 0;
}