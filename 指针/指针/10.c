//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
////输入一个整数数组，实现一个函数，
////来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
////所有偶数位于数组的后半部分。
//
//void Adjust(int arr[], int len)
//{
//	int i, j;
//	for (i = 0; i < len; i++)
//	{
//		if ((arr[i] % 2) == 0)
//		for (j = i + 1; j < len; j++)
//		{
//			int temp;
//			if ((arr[j] % 2) == 1)
//			{
//				temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//				break;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 24, 64, 12, 61, 35, 46, 75, 97, 44, 66 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	Adjust(arr, len);
//	for (int i = 0; i < len; i++)
//	{
//		printf("%3d", arr[i]);
//	}
//
//}