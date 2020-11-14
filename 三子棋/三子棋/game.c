#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"

//���̳�ʼ��
void InItBoard(char board[][COL], int row,int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//��ʾ����
void ShowBorad(char board[][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (int j = 0; j < col; j++)
			{
				printf("---");
				if (j < col -1)
				{
					printf("|");
				}
			}
			printf("\n");
		}

	}
}

//����ƶ�
char PlayerMove(char board[][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("�������\n");
		printf("��������Ҫ�µ�����λ�ã�1-3 1-3����");
		scanf("%d%d", &x, &y);
		if (x > 0 && x<= row && y>0 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y -1] = 'X';
				break;
			}
			else
			{
				printf("�������Ѿ��¹������ˣ�\n");
			}
		}
		else
		{
			printf("��������겻�Ϸ���\n");
		}
	}
	return 'X';
}

//�����ƶ�
char ComputerMove(char board[][COL], int row, int col)
{
	printf("��������\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = 'O';
			break;
		}
	}
	return 'O';
}

//�ж�ʤ��
char IsWin(char board[][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		//���ж�
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
		//���ж�
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	//��б�ж�
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//��б�ж�
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	//�ж�ƽ��
	if (IsFull(board, row, col) == 1)
	{
		return 'Q';	//����Q֤����ƽ��
	}
	
	return 'C';	//����C֤��û����Ӯ
}

static int IsFull(char board[][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;	//����û�з���
			}
		}
	}
	return 1;	//���̷�����
}