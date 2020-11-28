//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<assert.h>
//#include<string.h>
//
////实现一个函数，可以左旋字符串中的k个字符。
////例如：
////ABCD左旋一个字符得到BCDA
////ABCD左旋两个字符得到CDAB
//
//char* LeftRotation(char* str,int k)
//{
//	int len = strlen(str);
//	assert(len >= k);
//	char* run = str;
//	while (k)
//	{
//		char tmp = *str;
//		for (int i = 1; i < len; i++)
//		{
//			*run = *(run + 1);
//			run++;
//		}
//		*run = tmp;
//		run = str;
//		k--;
//	}
//	return str;
//}
//
//int main()
//{
//	char str[] = "mingtiannihao";
//	char* a = LeftRotation(str, 4);
//	printf("%s", a);
//	return 0;
//}