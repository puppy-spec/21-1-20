#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		//printf("%d ", *(p + i));
//		printf("&arr[%d]=%p<==>%p\n", i, &arr[i],  p + i);
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[3][5] = { 0 };
//	arr;//二维数组的数组名也是数组首元素的地址
//第一行的首元素地址
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int *pa = &a;
//	
//	int **ppa = &pa;//ppa是二级指针
//	int ***pppa = &ppa;
//	**ppa = 20;
//	printf("%d\n", a);
//	return 0;
//}

//指针数组
//整形数组——存放整形的数组
//字符数组——存放字符的数组
//指针数组——存放的指针
//int main()
//{
//	//int arr[10] = { 0 };
//	//char ch[5] = { 'a', 'b' };
//	//指针数组
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	//存放整形指针的数组
//	int *arr[3]={&a, &b, &c};//arr就是指针数组
//	char* ch[5];//存放字符指针的数组
//
//	return 0;
//}

//int main()
//{
//	char*p = "abcder";
//	printf("%s\n", p);
//	//字符指针的数组
//	char* arr[] = {"abcdef","hello","bit"};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//
//	return 0;
//}


//结构体
//描述一个学生
//名字
//年龄
//电话
//性别
//struct Stu
//{
//	char name[20];
//	int age;
//	char tele[12];
//	char sex[5];
//}s1,s2;//s1,s2是全局的
//
//struct Stu s3;
//
//int main()
//{
//	struct Stu s;
//	struct Stu s1;
//	struct Stu s2;//局部变量
//	
//	return 0;
//
//}

//struct Point
//{
//	int x;
//	int y;
//};
//
//struct S
//{
//	char arr[10];
//	struct Point p;
//	double d;
//	int *ptr;
//};
//
//int main()
//{
////	struct Point p = { 1, 2 };
////	printf("%d %d\n", p.x, p.y);
//	int a = 2021;
//
//	struct S s = { "abcdef", { 2, 3 }, 3.14, &a};
//	printf("%s %d %d %lf %d\n", s.arr, s.p.x, s.p.y, s.d,*(s.ptr));
//	return 0;
//}

//struct S
//{
//	char arr[1000];
//	int num;
//	double d;
//};
//
//void print1(struct S ss)
//{
//	printf("%s %d %lf\n", ss.arr, ss.num, ss.d);
//}
////相对要好
//void print2(struct S* ps)
//{
//	printf("%s %d %lf\n", ps->arr, ps->num, ps->d);
//}
//
//int main()
//{
//	struct S s = { "hello bit", 100, 99.8 };
//	print1(s);//传值
//	print2(&s);//传址
//	return 0;
//}

int Add(int x, int y)//每一次函数调用都要在栈区上为函数分配空间
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	int a = 10;
	int b = 20;
	int ret = Add(a, b);

	return 0;
}