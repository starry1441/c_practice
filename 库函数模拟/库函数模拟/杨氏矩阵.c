//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<assert.h>
//
//#define ROW 3
//#define COL 3
//
////��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�
////Ҫ��ʱ�临�Ӷ�С��O(N);
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
//	printf("������Ҫ�ҵ���:");
//	scanf_s("%d", &key);
//	int a = SearchNum(arr, key);
//	printf("��:%d\n��:%d\n", (a / ROW) + 1, (a%COL) + 1);
//}