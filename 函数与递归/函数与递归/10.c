//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
////��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
//
////����һ
//int Power(int n,int k)
//{
//	int a = 1;
//	if (k==0)
//	{
//		return 1;
//	}
//	a = n*Power(n, k-1);
//	return a;
//}
//
////������
//int Power1(int n, int k)
//{
//	int a = 1;
//	if (k != 0)
//	{
//		a = n*Power1(n, k - 1);
//	}
//	return a;
//}
//
//int main()
//{
//	//����һ���
//	int power = Power(2, 5);
//	printf("����һ��%d\n", power);
//	//���������
//	int power1 = Power1(2, 5);
//	printf("��������%d\n", power1);
//	return 0;
//}