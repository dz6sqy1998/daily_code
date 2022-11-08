#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
#include <time.h>
#include <stdlib.h>
void game()
{
	char ret = 0;
	//����-����߳���������Ϣ
	char board [ROW][COL] = {0};
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board,ROW,COL);
	while (1)
	{
		//�����
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret =IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		//������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		
	}
	//�������
	//1.���Ӯ
	//2.����Ӯ
	//3.ƽ��
	//4.����
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
		printf("����Ӯ\n");
	else
		printf("ƽ��\n");
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
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������\n");
			break;
		}

	} while (input);
}
//��ӡ����
int main()
{
	//������Ϸ����
	test();
	return 0;
}
