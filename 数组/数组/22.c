//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
////创建一个整形数组，完成对数组的操作
////1、实现函数init() 初始化数组为全0
////2、实现print()  打印数组的每个元素
////3、实现reverse()  函数完成数组元素的逆置。
////要求：自己设计以上函数的参数，返回值。
//
//void init(int arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//int print(int arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[], int len)
//{
//	for (int i = 0; i < len / 2; i++)
//	{
//		int tmp = 0;
//		tmp = arr[i];
//		arr[i] = arr[len - 1 - i];
//		arr[len - 1 - i] = tmp;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 45, 86, 24, 15, 68, 24, 67, 95, 7, 88 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	printf("原数组为：\n");
//	print(arr, len);
//
//	printf("逆序数组为：\n");
//	reverse(arr, len);
//	print(arr, len);
//
//	printf("初始数组为全0：\n");
//	init(arr, len);
//	print(arr, len);
//	return 0;
//}