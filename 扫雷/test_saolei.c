#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void game()
{
	//雷的信息存储
	//1.布置好的雷的信息
	char mine[ROWS][COLS] = { 0 };
	//2.排查出的雷的信息
	char show[ROWS][COLS] = { 0 };
	//初始化
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//打印棋盘
	DisplayBoard(mine, ROW, COL);//不用打印外面的一圈了
	DisplayBoard(show, ROW, COL);
	//布置雷,布置的雷也只是在9*9里面操作
	SetMine(mine,ROW,COL);
	DisplayBoard(mine, ROW, COL);//不用打印外面的一圈了
	//扫雷
	FindMine(mine, show, ROW, COL);//从mine数组里获取信息放到show数组里
	DisplayBoard(mine, ROW, COL);//不用打印外面的一圈了

}
void menu()
{
	printf("*******************************\n");
	printf("***扫雷游戏***\n");
	printf("***1. play 0. exit***\n");
	printf("*******************************\n");
}
void test()
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
			printf("输入错误\n");
			break;
		}

	} while (input);
}
int main()
{
	srand(time(NULL));//使用种子作为的随即参数初始化伪随机数生成器
	test();
	return 0;
}