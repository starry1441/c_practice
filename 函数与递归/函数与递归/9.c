//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
////дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
////���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
////���룺1729�������19
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