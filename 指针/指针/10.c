//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
////����һ���������飬ʵ��һ��������
////�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
////����ż��λ������ĺ�벿�֡�
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