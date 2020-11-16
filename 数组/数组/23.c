//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
////将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//
//void Change(int a[], int alen, int b[], int blen)
//{
//	for (int i = 0; i < 10; i++)
//	{
//		int tmp;
//		tmp = a[i];
//		a[i] = b[i];
//		b[i] = tmp;
//	}
//}
//
//int main()
//{
//	int a[10] = { 45, 86, 24, 15, 68, 24, 67, 95, 7, 88 };
//	int alen = sizeof(a) / sizeof(a[0]);
//	int b[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int blen = sizeof(b) / sizeof(b[0]);
//	Change(a, alen, b, blen);
//	printf("a[10]数组中的内容为\n：");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\nb[10]数组中的内容为\n：");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", b[i]);
//	}
//}