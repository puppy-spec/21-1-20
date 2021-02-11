#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int is_prime(int i)
{
	//ÅĞ¶ÏiÊÇ·ñÎªËØÊı

}


int main()
{
	int i = 0;
	for (i = 100; i <= 200; i += 2)
	{
		if (is_prime(i) == 1)
		{
			printf("%d ",i);
		}
	}

	return 0;
}