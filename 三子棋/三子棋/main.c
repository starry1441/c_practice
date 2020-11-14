#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"

void menu()
{
	printf("*****************************\n");
	printf("*********��������Ϸ**********\n");
	printf("***********1.play************\n");
	printf("***********0.exit************\n");
	printf("*****************************\n");
}

void game()
{
	printf("��ȥ����Ϸ\n");
	char board[ROW][COL] = { 98,98,98,98,98,98,98,98,98 };

	InItBoard(board, ROW, COL);	//��������Ϊ�ո�

	ShowBorad(board, ROW, COL);	//��ʾ����

	char ret = ' ';
	while (1)
	{

		PlayerMove(board, ROW, COL);	//�������
		ShowBorad(board, ROW, COL);		//��ʾ����
		ret = IsWin(board, ROW, COL);	//�ж�ʤ��
		if (ret != 'C')	//��C��û��Ӯ
		{
			break;	//����X
		}
		ComputerMove(board, ROW, COL);	//��������
		ShowBorad(board, ROW, COL);		//��ʾ����
		ret = IsWin(board, ROW, COL);	//�ж�ʤ��
		if (ret != 'C')
		{
			break;	//����O
		}
	}

	if (ret == 'Q')
	{
		printf("��Ϸƽ��\n");
	}
	if (ret == 'X')
	{
		printf("���Ӯ\n");
	}
	if (ret == 'O')
	{
		printf("����Ӯ\n");
	}
	menu();
}

int main()
{
	srand((unsigned)time(NULL));	//�������
	int input=0;
	menu();
	printf("��������Ĳ���");
	//scanf("%d\n", &input);
	do
	{
		printf("\n");
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
			break;
		}
	} while (input);
	return 0;
}