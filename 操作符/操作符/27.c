//#define _crt_secure_no_warnings 1
//#include <stdio.h>
//
////不允许创建临时变量，交换两个整数的内容
//
////方法一
//void change1(int a, int b)
//{
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("方法一交换后a、b的值为：%d %d\n", a, b);
//}
//
////方法二
//void change2(int a, int b)
//{
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("方法二交换后a、b的值为：%d %d\n", a, b);
//}
//
//int main()
//{
//	int a = 2;
//	int b = 5;
//	change1(a, b);
//	change2(a, b);
//}