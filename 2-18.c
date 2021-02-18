#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int arr[3][4] = {1};
//	char arr[3][4];
//	double arr[2][4];
//	return 0;
//}

void bubble_sort(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1-i; j++)
		{
			if (arr[j] >arr[j + 1])
			{
				int tmp = arr[j+1];
				arr[j+1] = arr[j ];
				arr[j] = tmp;
			}
		}
	}

}
int main()
{
	int arr[10] = { 9, 8, 7, 5, 6, 4, 3, 2, 1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	//printf("%d", arr[0]);
	int a = 1;
	return 0;
}
