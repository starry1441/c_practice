//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
////编写一个函数实现n的k次方，使用递归实现。
//
////方法一
//int Power(int n,int k)
//{
//	int a = 1;
//	if (k==0)
//	{
//		return 1;
//	}
//	a = n*Power(n, k-1);
//	return a;
//}
//
////方法二
//int Power1(int n, int k)
//{
//	int a = 1;
//	if (k != 0)
//	{
//		a = n*Power1(n, k - 1);
//	}
//	return a;
//}
//
//int main()
//{
//	//方法一输出
//	int power = Power(2, 5);
//	printf("方法一：%d\n", power);
//	//方法二输出
//	int power1 = Power1(2, 5);
//	printf("方法二：%d\n", power1);
//	return 0;
//}