//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
////ʵ��һ�������������ð������
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
//		//�Ż�������ÿ�����궼���һ�飬���Ѿ��ĺ�˳��ֱ����ǰ���
//		for (a = 0; a < len - 1 - j; a++)
//		{
//			if (arr[a] > arr[a + 1])
//			{
//				break;
//			}
//		}
//		if (a >= len - 1 - j)
//		{
//			printf("��ǰ�ź��ˣ���С��������Ϊ��");
//			for (b = 0; b < len; b++)
//			{
//				printf("%d\n", arr[b]);
//			}			
//			break;
//		}
//		//�Ż�������ÿ�����궼���һ�飬���Ѿ��ĺ�˳��ֱ����ǰ���
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