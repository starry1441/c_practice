//#define _crt_secure_no_warnings 1
//#include <stdio.h>
//
////дһ���������ز����������� 1 �ĸ�����
////���磺 15    0000 1111    4 �� 1
//
////����һ
//int print1(int n)
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if ((n & 1) != 0)
//		{
//			count++;
//		}
//		n = n >> 1;
//	}
//	return count;
//}
//
////������
//int print2(int n)
//{
//	int count = 0;
//	while (n != 0)
//	{
//		count++; 
//		n = n & (n - 1);
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 15;
//	printf("����һ��%d\n", print1(n));
//	printf("��������%d\n", print2(n));
//	return 0;
//}
//
