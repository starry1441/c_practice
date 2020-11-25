//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<assert.h>
//
////Ä£ÄâÊµÏÖstrcpy
//
//char * MyStrcpy(char* dest, const char* sor)
//{
//	assert(dest != NULL && sor != NULL);
//	char *p = dest;
//	while (*sor)
//	{
//		*dest = *sor;
//		sor++;
//		dest++;
//	}
//	return p;
//}
//
//int main()
//{
//	char sor[] = "hello tomorrow";
//	char dest[50] = { 0 };
//	char* a = MyStrcpy(dest, sor);
//	printf("%s", a);
//	return 0;
//}