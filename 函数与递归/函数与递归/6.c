//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
////递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//
////递归
//int JieCheng(int n)
//{
//	if (n > 1)
//	{
//		return n * JieCheng(n - 1);
//	}
//	else
//	{
//		return 1;
//	}
//
//}
//
////迭代
//int JieCheng1(int n)
//{
//	int i;
//	int j = 1;
//	for (i = 1; i <= n; i++)
//	{
//		j = i*j;
//	}
//	return j;
//}
//
//int main()
//{
//	//递归
//	int m;
//	m = JieCheng(5);
//	printf("%d\n", m);
//	//迭代
//	int n;
//	n = JieCheng1(5);
//	printf("%d\n", n);
//	return 0;
//}