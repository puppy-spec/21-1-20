#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 0;
//
//	//sizeof(arr)-计算的是数组的总大小，单位是字节
//	//sizeof(arr[0])-计算的是数组第一个元素的大小-4
//	int sz = sizeof (arr) / sizeof (arr[0]);//10
//	scanf("%d", &k);
//
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left+(right-left)/2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid]<k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d", mid);
//			break;
//		}
//		
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
//	return 0;
//}
#include<Windows.h>
#include<string.h>
#include<limits.h>

//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!!";
//	char arr2[] = "#####################";
//	char buf[] = "bit";
//	//[b i t \0]
//	//0 1 2 3
//	//sizeof(buf) / sizeof(buf[0]) - 2;
//	//strlen(buf) - 1;
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	//用来存放密码
//	char password[20] = { 0 };
//
//	//假设正确的密码是字符串："123456"
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码>:");
//		scanf("%s,password",password);
//		//两个字符串的比较不能用等于号==，应该用strcmp函数
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("密码正确，登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//
//	}
//	if (i == 3)
//	{
//		printf("三次输入错误，退出程序\n");
//	}
//	return 0;
//}
void menu()
{
	printf("**************");
	printf("*** 1.play****");
	printf("*** 0.exit****");
	printf("**************");
}
int main()
{
	int input = 0;

	do
	{
		menu();
		printf("请选择（1/0）:>");
		scanf("%d", &input);
		switch (input)
		{

		}
	} while ();

	return 0;
}