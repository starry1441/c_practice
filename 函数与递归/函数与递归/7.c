//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
////递归和非递归分别实现strlen
//
////递归
//int Strlen(char *str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	int tmp = 1 + Strlen(str + 1);
//	return tmp;
//}
//
////非递归
//int Strlen1(char *str)
//{
//	int i;
//	for (i = 0; str[i]; i++);//字符串遍历
//	return i;
//}
//
//int main()
//{
//	//递归
//	char *p = "abcdefg";
//	int len = Strlen(p);
//	printf("%d\n", len);
//	//非递归
//	int len1 = Strlen1(p);
//	printf("%d\n", len1);
//	return 0;
//}