//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
////编写一个函数 reverse_string(char * string)（递归实现）
////实现：将参数字符串中的字符反向排列。
////要求：不能使用C函数库中的字符串操作函数。
//
//void reverse_string(char * string)
//{
//	if (*string != '\0')
//	{
//		reverse_string(string + 1);
//		printf("%c\n", *string);
//	}
//	else
//	{
//		return;
//	}
//}
//
//int main()
//{
//	char *p = "abcdef";
//	reverse_string(p);
//	return 0;
//}