//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<assert.h>
//#include<string.h>
//
////ʵ��һ�����������������ַ����е�k���ַ���
////���磺
////ABCD����һ���ַ��õ�BCDA
////ABCD���������ַ��õ�CDAB
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