#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//在棋盘上打印空格
	for (i = 0; i < ROW; i++)
	{
		int j = 0;
		for (j = 0; j < COL; j++)
		{
			board[i][j] = ' ';
		}
	}

}
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			//1.打印一行的数据
			//printf(" %c | %c | %c\n", board[i][0], board[i][1], board[i][2]);
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
			//else
			//	printf("\n");
			
		}
		printf("\n");

		//2.打印分割行

		if (i < row - 1)
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
				//else
				//	printf("\n");
			}
		printf("\n");

			//printf("---|---|---\n");
	}
}
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走\n");
	while (1)
	{
		printf("请输入要下的下标:>");
		scanf("%d%d", &x, &y);
		//判断玩家坐标的合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//printf("合法\n");
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("坐标被占用\n");
		}
		else
			printf("输入非法\n");
	}
}
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑走\n");
	while (1)
	{
		int x = rand() % ROW + 1;//x是属于[1,ROW],y[1,COL]，所以必须加1
		int y = rand() % COL + 1;
		if (board[x - 1][y - 1] == ' ')
		{
			board[x - 1][y - 1] = '#';
			break;
		}

	}

}
//判断是否满了
//满了返回1
//没满返回0
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//横三，排除三个都为空格的情况
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
			return board[i][0];
	}
	//竖三，排除三个都为空格的情况
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
			return board[0][i];
	}
	//右斜三，排除三个都为空格的情况

	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[0][0];

	//左斜三，排除三个都为空格的情况

	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
		return board[0][2];

	//满了，平局
	if (1 == IsFull(board,ROW,COL))
	{
		return 'Q';
	}
	return 'C';

}

