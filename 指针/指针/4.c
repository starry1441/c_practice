//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <math.h>
//
////求出0～100000之间的所有“水仙花数”并输出。
////“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”
//
////计算几位数
//int Digit(int x)
//{
//	int n;	//n位数
//	for (n = 1; n < 7; n++)
//	{
//
//		if (x > 9)
//		{	
//			x = ((x) / 10);
//			continue;
//		}
//		else
//		{
//			break;
//		}
//	}
//	return n;
//}
//
////判断是否为水仙花数
//int Narcissus(int *n,int *x)
//{
//	int a = 0;	//等号右边结果
//	int b = *x;	//等号左边数字
//	for (int i = 1; i <= *n; i++)
//	{
//		a += pow((b % 10), *n);
//		b = b / 10;
//	}
//	if (a == *x)
//	{
//		return *x;
//	}
//	else
//	{
//		return -1;
//	}
//}
//
//int main()
//{
//	//int x = 153;
//	//int n = Digit(x);
//	//int m = Narcissus(&n, &x);
//	//printf("%d ", m);
//
//	int x;	//遍历的数字
//	for (x = 0; x <= 100000; x++)
//	{
//		int n = Digit(x);	//n位数
//		int m = Narcissus(&n, &x);	
//		if (m == -1)
//		{
//			continue;
//		}
//		else
//		{
//			printf("%d ", m);
//		}
//	}
//	return 0;
//}