//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <math.h>
//
////���0��100000֮������С�ˮ�ɻ������������
////��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ��������� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�����
//
////���㼸λ��
//int Digit(int x)
//{
//	int n;	//nλ��
//	for (n = 1; n < 7; n++)
//	{
//
//		if (x > 9)
//		{	
//			x = ((x) / 10);
//			continue;
//		}
//		else
//		{
//			break;
//		}
//	}
//	return n;
//}
//
////�ж��Ƿ�Ϊˮ�ɻ���
//int Narcissus(int *n,int *x)
//{
//	int a = 0;	//�Ⱥ��ұ߽��
//	int b = *x;	//�Ⱥ��������
//	for (int i = 1; i <= *n; i++)
//	{
//		a += pow((b % 10), *n);
//		b = b / 10;
//	}
//	if (a == *x)
//	{
//		return *x;
//	}
//	else
//	{
//		return -1;
//	}
//}
//
//int main()
//{
//	//int x = 153;
//	//int n = Digit(x);
//	//int m = Narcissus(&n, &x);
//	//printf("%d ", m);
//
//	int x;	//����������
//	for (x = 0; x <= 100000; x++)
//	{
//		int n = Digit(x);	//nλ��
//		int m = Narcissus(&n, &x);	
//		if (m == -1)
//		{
//			continue;
//		}
//		else
//		{
//			printf("%d ", m);
//		}
//	}
//	return 0;
//}