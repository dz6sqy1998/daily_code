#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void game()
{
	//�׵���Ϣ�洢
	//1.���úõ��׵���Ϣ
	char mine[ROWS][COLS] = { 0 };
	//2.�Ų�����׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//��ӡ����
	DisplayBoard(mine, ROW, COL);//���ô�ӡ�����һȦ��
	DisplayBoard(show, ROW, COL);
	//������,���õ���Ҳֻ����9*9�������
	SetMine(mine,ROW,COL);
	DisplayBoard(mine, ROW, COL);//���ô�ӡ�����һȦ��
	//ɨ��
	FindMine(mine, show, ROW, COL);//��mine�������ȡ��Ϣ�ŵ�show������
	DisplayBoard(mine, ROW, COL);//���ô�ӡ�����һȦ��

}
void menu()
{
	printf("*******************************\n");
	printf("***ɨ����Ϸ***\n");
	printf("***1. play 0. exit***\n");
	printf("*******************************\n");
}
void test()
{
	int input = 0;
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
int main()
{
	srand(time(NULL));//ʹ��������Ϊ���漴������ʼ��α�����������
	test();
	return 0;
}