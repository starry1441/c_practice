//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
////�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
//
////�ݹ�
//int JieCheng(int n)
//{
//	if (n > 1)
//	{
//		return n * JieCheng(n - 1);
//	}
//	else
//	{
//		return 1;
//	}
//
//}
//
////����
//int JieCheng1(int n)
//{
//	int i;
//	int j = 1;
//	for (i = 1; i <= n; i++)
//	{
//		j = i*j;
//	}
//	return j;
//}
//
//int main()
//{
//	//�ݹ�
//	int m;
//	m = JieCheng(5);
//	printf("%d\n", m);
//	//����
//	int n;
//	n = JieCheng1(5);
//	printf("%d\n", n);
//	return 0;
//}