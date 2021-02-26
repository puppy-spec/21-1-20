#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	//       /-除号 除号操作符的两个操作数都是整数，执行的是整数除法
//	//				除号的操作数有一个数是浮点数，就执行的浮点数的除法
//	printf("%d\n", 7 / 2);
//	printf("%.2f\n", 7 / 2.0);
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int b = a << 1;
//	printf("%d\n", b);
//	//左移，移动的是二进制位
//	//a的二进制位
//	//正整数的原码反码补码是相同的
//	//负整数的原反补要计算
//	//5——101
//
//
//	return 0;
//}

int main()
{
	int a = 3;//0000000000000000000000011
	int b = 5;//0000000000000000000000101
	//int c=a&b;
	//int c = a | b;
	//int c = a^b;
	//a = a + b;//可能整形溢出
	//b = a - b;
	//a = a - b;
	a = a^b;
	b = a^b;
	a = a^b;
	printf("%d %d\n", a,b);
	return 0;
}