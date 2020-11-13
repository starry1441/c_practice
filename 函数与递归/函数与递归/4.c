//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
////实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
////如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表
//
//void Multiplication(int a)
//{
//	int i;	//j*i=n
//	int j;
//	int n;
//	for (i = 1; i <= a; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			n = i*j;
//			printf("%d*%d=%d\t", j, i, n);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int a;	//a*a乘法口诀表
//	printf("请输入数字a，表示想得到a*a的乘法口诀表");
//	scanf("%d", &a);
//	Multiplication(a);
//	return 0;
//}