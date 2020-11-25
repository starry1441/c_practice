//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<assert.h>
//
////Ä£ÄâÊµÏÖstrcat
//
//char* MyStrcat(char* dest, const char* src)
//{
//	assert(*src && *dest);
//	char* p = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*src)
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	return p;
//}
//
//int main()
//{
//	char* src = "hello tomorrow\n";
//	char dest[50] = "hello today\n";
//	char* a = MyStrcat(dest, src);
//	printf("%s", a);
//	return 0;
//}
//
