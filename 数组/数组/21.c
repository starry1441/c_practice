//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
////实现一个对整形数组的冒泡排序
//
//void BubbleSort(int arr[],int len)
//{
//	int i;
//	int j;
//	int a;
//	int b;
//	for (j = 0; j < len-1; j++)
//	{
//		for (i = 0; i < len-j-1; i++)
//		{
//			if (arr[i]>arr[i + 1])
//			{
//				int tmp = 0;
//				tmp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = tmp;
//			}
//		}
//		printf("%d\n", arr[len - 1 - j]);
//
//		//优化方法：每趟排完都检测一遍，若已经拍好顺序，直接提前输出
//		for (a = 0; a < len - 1 - j; a++)
//		{
//			if (arr[a] > arr[a + 1])
//			{
//				break;
//			}
//		}
//		if (a >= len - 1 - j)
//		{
//			printf("提前排好了，从小到大依次为：");
//			for (b = 0; b < len; b++)
//			{
//				printf("%d\n", arr[b]);
//			}			
//			break;
//		}
//		//优化方法：每趟排完都检测一遍，若已经拍好顺序，直接提前输出
//
//	}
//}
//
//int main()
//{
//	int arr[10] = { 45, 86, 24, 15, 68, 24, 67, 95, 7, 88 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr, len);
//	return 0;
//}