//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include<math.h>

//计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值，打印出结果

//int main()
//{
//	int i;	//用于每项相加的循环变量
//	int j;	//给数组的每个数赋值的变量
//	float sum = 0;	//总和
//	float arr[100];	//数组，存放每项的数字
//	for (j = 0; j <= 99; j++)
//	{
//		arr[j] = 1.0 / (j + 1);
//	}
//	for (i = 0; i <= 99; i++)
//	{
//		sum = sum + pow(-1,i)*arr[i];
//	}
//	printf("%f", sum);
//	return 0;
//}