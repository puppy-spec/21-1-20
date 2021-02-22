#define _CRT_SECURE_NO_WARNINGS 1

#include"game2_22.h"

void menu()
{
	printf("三子棋\n");
	printf("*********************\n");
	printf("*****1.play**********\n");
	printf("*****2.exit**********\n");
	printf("*********************\n");
}
void game()
{
	char board[ROW][COL];
	InitBoard(board, ROW, COL);
	DisplayBoard(board,ROW,COL);
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择！");
			break;
		}

	} while (input);
	return 0;
}