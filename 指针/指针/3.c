//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <math.h>
//
////求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
////例如：2 + 22 + 222 + 2222 + 22222
//
//int Add(int* a)
//{
//	int arr[5] = {0};
//	int Sn = 0;
//	arr[0] = *a;
//	for (int i = 1; i < 5; i++)
//	{
//		arr[i] = arr[i - 1] + (*a) * pow(10, i);
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		Sn += arr[i];
//	}
//	return Sn;
//}
//
//int main()
//{
//	int a = 2;
//	int Sn = Add(&a);
//	printf("%d\n", Sn);
//	return 0;
//}