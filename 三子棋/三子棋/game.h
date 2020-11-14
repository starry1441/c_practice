#ifndef __GAME_H__
#define __GAME_H__

#define ROW 3
#define COL 3

void InItBoard(char board[][COL], int row, int col);

void ShowBorad(char board[][COL], int row, int col);

char PlayerMove(char board[][COL], int row, int col);

char ComputerMove(char board[][COL], int row, int col);

char IsWin(char board[][COL], int row, int col);

#endif