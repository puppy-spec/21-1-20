#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

struct Stu
{
	//结构成员
	char name[20];
	int age;
	char sex[5];

};

//int main()
//{
//	struct Stu s = { "zhangsan", 20, "nan" };
//	printf("%s\n", s.name);
//	printf("%d\n", s.age);
//	printf("%s\n", s.sex);
//
//	struct Stu* ps = &s;
//	printf("%s\n", (*ps).name);
//	printf("%s\n", ps->name);
//	//->结构体指针->结构成员
//
//
//}

int main()
{
	char a = 3;
	char b = 127;
	char c = a + b;

	printf("%d\n", c); 

	return 0;
}