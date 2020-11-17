//#define _crt_secure_no_warnings 1
//#include <stdio.h>
//
////写一个函数返回参数二进制中 1 的个数。
////比如： 15    0000 1111    4 个 1
//
////方法一
//int print1(int n)
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if ((n & 1) != 0)
//		{
//			count++;
//		}
//		n = n >> 1;
//	}
//	return count;
//}
//
////方法二
//int print2(int n)
//{
//	int count = 0;
//	while (n != 0)
//	{
//		count++; 
//		n = n & (n - 1);
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 15;
//	printf("方法一：%d\n", print1(n));
//	printf("方法二：%d\n", print2(n));
//	return 0;
//}
//
