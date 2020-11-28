//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<assert.h>
//
//#define ROW 3
//#define COL 3
//
////有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
////要求：时间复杂度小于O(N);
//
//int SearchNum(int p[ROW][COL], int key)
//{
//	int i = 0;
//	int j = 0;
//	while (i < ROW)
//	{
//		if (key > p[i][COL-1])
//		{
//			i++;
//		}
//		else
//		{
//			while (j < COL)
//			{
//				if (p[i][j] == key)
//				{
//					return j + i*ROW;
//				}
//				j++;
//			}
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int key = 0;
//	int arr[ROW][COL] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	printf("请输入要找的数:");
//	scanf_s("%d", &key);
//	int a = SearchNum(arr, key);
//	printf("行:%d\n列:%d\n", (a / ROW) + 1, (a%COL) + 1);
//}