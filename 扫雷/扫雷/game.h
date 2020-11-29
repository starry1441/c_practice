#ifndef __GAME_H__

#include<stdio.h>
#include<stdlib.h>

#define ROW 10
#define COL 10
#define MINE_NUM 20

char** creatMat(int row, int col);

void initMat(char** Mat, int row, int col, char ch);

void setMine(char** Mat, int row, int col);

void showMat(char** Mat, int row, int col);

int getMineNum(char** Mat, int row, int col, int x, int y);

void game(char** mineMat, char** mineInfo, int row, int col);

void freeMat(char** Mat, int row, int col);

void test();

#endif