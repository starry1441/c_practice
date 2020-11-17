//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
////编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
////输入例子 :
////1999 2299
////输出例子 : 7
//
//int differ(int a, int b)
//{
//	int c = a ^ b;
//	int count = 0;
//	while (c)
//	{
//		count++;
//		c = c & (c - 1);
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d", differ(a, b));
//}