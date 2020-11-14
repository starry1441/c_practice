#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"

//棋盘初始化
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

//显示棋盘
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

//玩家移动
char PlayerMove(char board[][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("玩家下棋\n");
		printf("请输入你要下的棋盘位置（1-3 1-3）：");
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
				printf("该坐标已经下过棋子了！\n");
			}
		}
		else
		{
			printf("输入的坐标不合法！\n");
		}
	}
	return 'X';
}

//电脑移动
char ComputerMove(char board[][COL], int row, int col)
{
	printf("电脑下棋\n");
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

//判断胜利
char IsWin(char board[][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		//行判断
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
		//列判断
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	//右斜判断
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//左斜判断
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	//判断平局
	if (IsFull(board, row, col) == 1)
	{
		return 'Q';	//返回Q证明是平局
	}
	
	return 'C';	//返回C证明没有人赢
}

static int IsFull(char board[][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;	//棋盘没有放满
			}
		}
	}
	return 1;	//棋盘放满了
}