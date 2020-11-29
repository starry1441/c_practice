#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//创建二维矩阵
char** creatMat(int row, int col)
{
	//增加2行2列，便于计算每个位置雷的个数
	//创建一个指针数组
	char** Mat = (char**)malloc(sizeof(char*)*(row + 2));
	for (int i = 0; i < row+2; i++)
	{
		Mat[i] = (char*)malloc(sizeof(char)*(col + 2));
	}
	return Mat;
}

//初始化二维矩阵
void initMat(char** Mat, int row, int col, char ch)
{
	for (int i = 0; i < row + 2; i++)
	{
		for (int j = 0; j < col + 2; j++)
		{
			Mat[i][j] = ch;
		}
	}
}

//随机埋雷
void setMine(char** Mat, int row, int col)
{
	int count = MINE_NUM;
	while (count)
	{
		//x:1-row	 y:1-col
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (Mat[x][y] != '*')
		{
			Mat[x][y] = '*';
			count--;
		}
	}
}

//打印二维矩阵
void showMat(char** Mat, int row, int col)
{
	printf("-------------------------------------\n");
	//打印列：0 1 2 3 4...col
	for (int i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	//打印行：1 2 3 4 5...row
	for (int i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", Mat[i][j]);
		}
		printf("\n");
	}
	printf("-------------------------------------\n");
}

//返回没有雷的格子上的数字
int getMineNum(char** Mat, int row, int col, int x, int y)
{
	//旋转矩阵
	static int posOffset[8][2] = { { -1, -1 }, { -1, 0 }, { -1, 1 }, { 0, -1 }, { 0, 1 }, { 1, -1 }, { 1, 0 }, { 1, 1 } };
	int count = 0;
	for (int i = 0; i < 8; i++)
	{
		int nx = x + posOffset[i][0];
		int ny = y + posOffset[i][1];
		if (Mat[nx][ny] == '*')
		{
			count++;
		}
	}
	return count;
}

//游戏模块
void game(char** mineMat, char** mineInfo,int row,int col)
{
	int step = 0;
	while (step < row*col - MINE_NUM)
	{
		int x, y;
		printf("请输入一个坐标：\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mineMat[x][y] == '*')
			{
				printf("game over!!\n");
				showMat(mineMat, row, col);
				break;
			}
			//获取x，y位置周围雷的个数
			int num = getMineNum(mineMat, row, col, x, y);
			mineInfo[x][y] = num + '0';
			showMat(mineInfo, row, col);
			//成功执行了一步
			step++;
		}
		else
		{
			printf("位置无效，重新输入\n");
		}
	}
	if (step == row*col - MINE_NUM)
	{
		printf("you are win!\n");
	}
}

//释放动态开辟的空间
void freeMat(char** Mat, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		//释放每一行的空间
		free(Mat[i]);
	}
	//释放指针数组的空间
	free(Mat);
}

//测试游戏运行
void test()
{
	char** mineMat = creatMat(ROW, COL);	//雷位置
	char** mineInfo = creatMat(ROW, COL);	//用户界面：雷周围的信息

	initMat(mineMat, ROW, COL, '0');
	initMat(mineInfo, ROW, COL, '*');
	setMine(mineMat, ROW, COL);
	printf("雷：\n");
	showMat(mineMat, ROW, COL);
	printf("雷的信息：\n");
	showMat(mineInfo, ROW, COL);

	game(mineMat, mineInfo, ROW, COL);
}

