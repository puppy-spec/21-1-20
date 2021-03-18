#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//创建的一个枚举类型

enum Sex
{
	//枚举类型的可能取值
	MALE,
	FEMALE,
	SECRET

};

enum RGB
{
	RED,
	GREEN,
	BLUE
};

int main()
{
	//enum Sex s = FEMALE;
	//enum RGB rgb = GREEN;
	printf("%d\n", RED);
	printf("%d\n", GREEN);
	printf("%d\n", BLUE);

	return 0;
}