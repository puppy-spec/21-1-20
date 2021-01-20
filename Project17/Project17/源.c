#define _CRT_SECURE_NO_WARNINGS 1
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	arr[4] = 5;
//
//	int ret=Add(2, 3);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	signed int a=10;
//	unsigned int b=11;
//	
//	return 0;
//}


//static-静态的
//static修饰局部变量——延长局部变量的生命周期
//static修饰全局变量——
//static修饰函数

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d  ", a);
//
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	printf("%d\n", sizeof(char*));
//	return 0;
//}


//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return (a + b + c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d,", sum(a));
//	}
//}

#include<math.h>
//#include<stdio.h>
//int main()
//{
//	double a, b, c = 0;
//	double C = 0;
//	double s = 0;
//	double p = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	C = a + b + c;
//	printf("%d ", C);
//	p = (a + b + c) / 2.0;
//
//	s = sqrt(p*(p-a)*(p-b)*(p-c));
//	printf("%d", s);
//	return 0;
//}

#include<stdio.h>
#include <stdio.h>
#include <math.h>
int main()
{
	int a, b, c;
	float C, S;
	scanf("%d %d %d", &a, &b, &c);
	C = a + b + c;
	float p = (a + b + c) / 2.00;
	S = sqrt(p*(p - a)*(p - b)*(p - c));
	printf("circumference=%.2f area=%.2f", C, S);
}