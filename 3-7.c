#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int check_sys()
//{
//	int a = 1;
//	char*p = (char*)&a;
//	if (*p == 1)//小端
//		return 1;
//	else //大端
//		return 0;
//}

//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;	
//}
//
//int main()
//{
//	if (check_sys() == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	char a = -1;
//
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("%d,%d,%d", a, b, c); 
//	//a -1,b -1,c 255
//
//	return 0;
//}

//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//
//	return 0;
//}

//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//} 

//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//
//	return 0;
//}
//#include<windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//
//	}
//	//死循环
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <=255; i++)
//	{
//		printf("hello world\n");
//	}
//
//	return 0;
//}


int main()
{
	int n = 9;
	float *pFloat = (float *)&n;
	printf("n的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);

	*pFloat = 9.0; 
	printf("n的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);

	return 0;
}