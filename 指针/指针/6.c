//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
////����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���
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