#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//�������ϴ�ӡ�ո�
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
			//1.��ӡһ�е�����
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

		//2.��ӡ�ָ���

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
	printf("�����\n");
	while (1)
	{
		printf("������Ҫ�µ��±�:>");
		scanf("%d%d", &x, &y);
		//�ж��������ĺϷ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//printf("�Ϸ�\n");
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("���걻ռ��\n");
		}
		else
			printf("����Ƿ�\n");
	}
}
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("������\n");
	while (1)
	{
		int x = rand() % ROW + 1;//x������[1,ROW],y[1,COL]�����Ա����1
		int y = rand() % COL + 1;
		if (board[x - 1][y - 1] == ' ')
		{
			board[x - 1][y - 1] = '#';
			break;
		}

	}

}
//�ж��Ƿ�����
//���˷���1
//û������0
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
	//�������ų�������Ϊ�ո�����
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
			return board[i][0];
	}
	//�������ų�������Ϊ�ո�����
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
			return board[0][i];
	}
	//��б�����ų�������Ϊ�ո�����

	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[0][0];

	//��б�����ų�������Ϊ�ո�����

	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
		return board[0][2];

	//���ˣ�ƽ��
	if (1 == IsFull(board,ROW,COL))
	{
		return 'Q';
	}
	return 'C';

}

