//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
////����һ���������飬��ɶ�����Ĳ���
////1��ʵ�ֺ���init() ��ʼ������Ϊȫ0
////2��ʵ��print()  ��ӡ�����ÿ��Ԫ��
////3��ʵ��reverse()  �����������Ԫ�ص����á�
////Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
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
//	printf("ԭ����Ϊ��\n");
//	print(arr, len);
//
//	printf("��������Ϊ��\n");
//	reverse(arr, len);
//	print(arr, len);
//
//	printf("��ʼ����Ϊȫ0��\n");
//	init(arr, len);
//	print(arr, len);
//	return 0;
//}