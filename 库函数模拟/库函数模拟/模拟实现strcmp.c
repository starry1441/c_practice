//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<assert.h>
//
////Ä£ÄâÊµÏÖstrcmp
//
//int Strcmp(const char *str1, const char *str2)
//{
//	assert(*str1 || *str2);
//	if (str1 == NULL) return -1;
//	if (str2 == NULL) return 1;
//	while (*str1 == *str2)
//	{
//		if (*str1 == "\0")
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}
//
//int main()
//{
//	char* str1 = "hello tomorrow";
//	char* str2 = "hello today";
//	int a = Strcmp(str1, str2);
//	printf("%d", a);
//	return 0;
//}