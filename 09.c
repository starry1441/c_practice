//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>

//��д������һ���������������в��Ҿ����ĳ����
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����

//��ͨ����
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };	//������������
//	int a = 8;	//���ҵ��ľ�����
//	int i;	//�����±�
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] == a)
//		{
//			printf("�ҵ������ˣ��±�Ϊ %d\n", i);
//			break;
//		}
//	}
//	if (i == 10)
//	{
//		printf("�Ҳ���������\n");
//	}
//	return 0;
//}

//���ַ�����
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };	//������������
//	int left=0;		//����
//	int right = sizeof(arr)/sizeof(arr[0])-1;	//�ұ��
//	int mid;	//�б��
//	int a = 8;	//���ҵ��ľ�����
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
//			printf("�ҵ��������ˣ��±�Ϊ %d\n", mid);
//			break;
//		}
//		if (left > right || right < left)
//		{
//			printf("�Ҳ���������\n");
//			break;
//		}
//	}
//	return 0;
//}