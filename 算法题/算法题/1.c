//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
////����Ļ�ϴ�ӡ������ǡ�
//
//void YangHui(int n)
//{
//	int i, j;
//	int arr[100][100] = { 0 };
//	if (n<1 || n>100)
//	{
//		printf("����û�ڿ��з�Χ��");
//	}
//	for (i = 0; i < 100; i++)
//	{
//		arr[i][0] = 1;
//		arr[i][i] = 1;
//	}
//	for (i = 2; i < 100; i++)
//	{
//		for (j = 1; j <= n-2; j++)
//		{
//			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < i+1; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	YangHui(n);
//	return 0;
//}