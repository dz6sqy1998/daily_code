#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
#include <time.h>
#include <stdlib.h>
void game()
{
	char ret = 0;
	//数组-存放走出的棋盘信息
	char board [ROW][COL] = {0};
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board,ROW,COL);
	while (1)
	{
		//玩家走
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢
		ret =IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑走
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		
	}
	//四种情况
	//1.玩家赢
	//2.电脑赢
	//3.平局
	//4.继续
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
		printf("电脑赢\n");
	else
		printf("平局\n");
}
void menu()
{
	printf("****************\n");	
	printf("***1. play 0. exit***\n");
	printf("****************\n");
}
void test()
{
	int input = 0;
	srand(time(NULL));
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
			printf("输入错误\n");
			break;
		}

	} while (input);
}
//打印棋盘
int main()
{
	//测试游戏运行
	test();
	return 0;
}
