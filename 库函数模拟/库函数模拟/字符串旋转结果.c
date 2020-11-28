//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<assert.h>
//#include<string.h>
//
////写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
////例如：给定s1 = AABCD和s2 = BCDAA，返回1
////给定s1 = abcd和s2 = ACBD，返回0.
////AABCD左旋一个字符得到ABCDA
////AABCD左旋两个字符得到BCDAA
////AABCD右旋一个字符得到DAABC
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
//char* RightRotation(char* str, int k)
//{
//	int len = strlen(str);
//	assert(len >= k);
//	char* run = str + len - 1;
//	while (k)
//	{
//		char tmp = *(str + len - 1);
//		for (int i = 1; i < len; i++)
//		{
//			*run = *(run - 1);
//			run--;
//		}
//		*run = tmp;
//		run = str + len - 1;
//		k--;
//	}
//	return str;
//}
//
//int JudgingRotation(char*str1, char*str2)
//{
//	int len1 = strlen(str1);
//	char* str = 0;
//	//左旋转判断
//	for (int k = 1; k < len1; k++)
//	{
//		str = LeftRotation(str1, k);
//		if (*str == *str2)
//		{
//			return 1;
//		}
//		str = RightRotation(str1, k);
//	}
//	//右旋转判断
//	for (int k = 1; k < len1; k++)
//	{
//		str = RightRotation(str1, k);
//		if (*str == *str2)
//		{
//			return 1;
//		}
//		str = LeftRotation(str1, k);
//	}
//	return 0;
//}
//
//int main()
//{
//	char str1[] = "mingtiannihao";
//	char str2[] = "haomingtianni";
//	int a = JudgingRotation(str1, str2);
//	printf("%d\n", a);
//	return 0;
//}