//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
////写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
////例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
////输入：1729，输出：19
//
//int DigitSum(n)
//{
//	int sum = 0;
//	int m = 0;
//	if (n > 0)
//	{
//		m = n % 10;
//		n = n / 10;
//		sum = m + DigitSum(n);
//	}
//	return sum;
//}
//
//int main()
//{
//	int sum = DigitSum(1729);
//	printf("%d ", sum);
//	return 0;
//}