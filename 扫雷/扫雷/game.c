#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//������ά����
char** creatMat(int row, int col)
{
	//����2��2�У����ڼ���ÿ��λ���׵ĸ���
	//����һ��ָ������
	char** Mat = (char**)malloc(sizeof(char*)*(row + 2));
	for (int i = 0; i < row+2; i++)
	{
		Mat[i] = (char*)malloc(sizeof(char)*(col + 2));
	}
	return Mat;
}

//��ʼ����ά����
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

//�������
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

//��ӡ��ά����
void showMat(char** Mat, int row, int col)
{
	printf("-------------------------------------\n");
	//��ӡ�У�0 1 2 3 4...col
	for (int i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	//��ӡ�У�1 2 3 4 5...row
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

//����û���׵ĸ����ϵ�����
int getMineNum(char** Mat, int row, int col, int x, int y)
{
	//��ת����
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

//��Ϸģ��
void game(char** mineMat, char** mineInfo,int row,int col)
{
	int step = 0;
	while (step < row*col - MINE_NUM)
	{
		int x, y;
		printf("������һ�����꣺\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mineMat[x][y] == '*')
			{
				printf("game over!!\n");
				showMat(mineMat, row, col);
				break;
			}
			//��ȡx��yλ����Χ�׵ĸ���
			int num = getMineNum(mineMat, row, col, x, y);
			mineInfo[x][y] = num + '0';
			showMat(mineInfo, row, col);
			//�ɹ�ִ����һ��
			step++;
		}
		else
		{
			printf("λ����Ч����������\n");
		}
	}
	if (step == row*col - MINE_NUM)
	{
		printf("you are win!\n");
	}
}

//�ͷŶ�̬���ٵĿռ�
void freeMat(char** Mat, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		//�ͷ�ÿһ�еĿռ�
		free(Mat[i]);
	}
	//�ͷ�ָ������Ŀռ�
	free(Mat);
}

//������Ϸ����
void test()
{
	char** mineMat = creatMat(ROW, COL);	//��λ��
	char** mineInfo = creatMat(ROW, COL);	//�û����棺����Χ����Ϣ

	initMat(mineMat, ROW, COL, '0');
	initMat(mineInfo, ROW, COL, '*');
	setMine(mineMat, ROW, COL);
	printf("�ף�\n");
	showMat(mineMat, ROW, COL);
	printf("�׵���Ϣ��\n");
	showMat(mineInfo, ROW, COL);

	game(mineMat, mineInfo, ROW, COL);
}

