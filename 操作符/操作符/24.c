//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
////���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
////�������� :
////1999 2299
////������� : 7
//
//int differ(int a, int b)
//{
//	int c = a ^ b;
//	int count = 0;
//	while (c)
//	{
//		count++;
//		c = c & (c - 1);
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d", differ(a, b));
//}