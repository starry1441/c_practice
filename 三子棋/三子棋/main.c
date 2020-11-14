#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"

void menu()
{
	printf("*****************************\n");
	printf("*********三子棋游戏**********\n");
	printf("***********1.play************\n");
	printf("***********0.exit************\n");
	printf("*****************************\n");
}

void game()
{
	printf("进去了游戏\n");
	char board[ROW][COL] = { 98,98,98,98,98,98,98,98,98 };

	InItBoard(board, ROW, COL);	//将棋盘清为空格

	ShowBorad(board, ROW, COL);	//显示棋盘

	char ret = ' ';
	while (1)
	{

		PlayerMove(board, ROW, COL);	//玩家下棋
		ShowBorad(board, ROW, COL);		//显示棋盘
		ret = IsWin(board, ROW, COL);	//判断胜利
		if (ret != 'C')	//‘C’没人赢
		{
			break;	//返回X
		}
		ComputerMove(board, ROW, COL);	//电脑下棋
		ShowBorad(board, ROW, COL);		//显示棋盘
		ret = IsWin(board, ROW, COL);	//判断胜利
		if (ret != 'C')
		{
			break;	//返回O
		}
	}

	if (ret == 'Q')
	{
		printf("游戏平局\n");
	}
	if (ret == 'X')
	{
		printf("玩家赢\n");
	}
	if (ret == 'O')
	{
		printf("电脑赢\n");
	}
	menu();
}

int main()
{
	srand((unsigned)time(NULL));	//电脑随机
	int input=0;
	menu();
	printf("请输入你的操作");
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
			printf("退出游戏\n");
			break;
		default:
			break;
		}
	} while (input);
	return 0;
}