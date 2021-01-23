#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////¾Å¾Å³Ë·¨±í
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 1; j < i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i*j);
//		}
//		printf("\n");
//
//	}
//	return 0;
//}
/* memset example */
#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "almost every programmer should know memset!";
	memset(str, '-', 6);
	puts(str);
	return 0;
}