//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<assert.h>
//#include<string.h>
//
////дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
////���磺����s1 = AABCD��s2 = BCDAA������1
////����s1 = abcd��s2 = ACBD������0.
////AABCD����һ���ַ��õ�ABCDA
////AABCD���������ַ��õ�BCDAA
////AABCD����һ���ַ��õ�DAABC
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
//	//����ת�ж�
//	for (int k = 1; k < len1; k++)
//	{
//		str = LeftRotation(str1, k);
//		if (*str == *str2)
//		{
//			return 1;
//		}
//		str = RightRotation(str1, k);
//	}
//	//����ת�ж�
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