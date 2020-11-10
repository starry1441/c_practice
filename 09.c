//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>

//编写代码在一个整形有序数组中查找具体的某个数
//要求：找到了就打印数字所在的下标，找不到则输出：找不到。

//普通查找
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };	//有序整型数组
//	int a = 8;	//想找到的具体数
//	int i;	//数组下标
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] == a)
//		{
//			printf("找到数字了，下标为 %d\n", i);
//			break;
//		}
//	}
//	if (i == 10)
//	{
//		printf("找不到此数字\n");
//	}
//	return 0;
//}

//二分法查找
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };	//有序整型数组
//	int left=0;		//左标记
//	int right = sizeof(arr)/sizeof(arr[0])-1;	//右标记
//	int mid;	//中标记
//	int a = 8;	//想找到的具体数
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < a)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>a)
//		{
//			right = mid - 1;
//		}
//		else 
//		{
//			printf("找到了数字了，下标为 %d\n", mid);
//			break;
//		}
//		if (left > right || right < left)
//		{
//			printf("找不到此数字\n");
//			break;
//		}
//	}
//	return 0;
//}