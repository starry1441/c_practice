//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<assert.h>
//
////Ä£ÄâÊµÏÖstrstr
//
//char* MyStrstr(char *hay, char *ned)
//{
//	assert(*hay && *ned);
//	char* i = hay;
//	char* j = ned;
//	while (*hay)
//	{
//		while (*hay == *ned)
//		{
//			hay++;
//			ned++;
//			if (*ned == '\0')
//			{
//				return i;
//			}
//		}
//		ned = j;
//		hay++;
//		i = hay;
//	}
//	return 0;
//}
//
//int main()
//{
//	char *hay = "abcaabcde";
//	char *ned = "ca";
//	char* a = MyStrstr(hay, ned);
//	printf("%s", a);
//	return 0;
//}