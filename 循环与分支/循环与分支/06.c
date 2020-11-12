//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>

//求10 个整数中最大值

//int main()
//{
//	int i;	//内循环变量
//	int j;	//外循环变量
//	int arr[10] = {5,4,6,25,45,26,16,75,12,73};		//容量为10的数组
//	for (j = 0; j <= 9; j++)
//	{
//		for (i = j+1; i <= 9; i++)
//		{
//			if (arr[j] < arr[i])
//			{
//				int t = 0;
//				t = arr[j];
//				arr[j] = arr[i];
//				arr[i] = t;
//			}
//		}
//	}
//	printf("十个数从大到小排序依次为：");
//	for (int i = 0; i <= 9; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n十个整数中最大值为：%d\n", arr[0]);
//	return 0;
//}