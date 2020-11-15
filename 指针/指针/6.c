//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
////喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
//
//int Drink(int money)
//{
//	int bot = money;
//	int add = 0;
//	int nobot = money;
//	for (int i = 0; i < 100; i++)
//	{
//		add = nobot / 2;
//		
//		if (nobot % 2 == 1)
//		{
//			nobot = add;
//			nobot++;
//		}
//		else
//		{
//			nobot = add;
//		}
//		bot += add;
//		if (nobot == 1){
//			break;
//		}
//	}
//	return bot;
//}
//
//int main()
//{
//	int bot = Drink(20);
//	printf("%d", bot);
//}