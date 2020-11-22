#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

void reverse(char* left, char* right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void reverseword(char* str)
{
	int len = strlen(str);
	if (len <= 1)
		return;
	//整体逆置
	reverse(str, str + len - 1);
	//按照单词进行局部逆置
	char* cur = str;
	while (*cur)
	{
		//查找单词的边界：空格或者'\0'
		char* start = cur;
		while (*cur != ' '&&*cur != '\0')
			++cur;
		//当前单词的区间：[start,cur)
		//逆转单词
		reverse(start, cur - 1);
		//查找下一个单词的区间
		++cur;
	}	
}

void test()
{
	char str[101] = { 0 };
	gets(str);
//	reverseword(str);
	reverse(str, str + strlen(str) - 1);
	printf("%s\n", str);
}

int main()
{
	test();
	return 0;
}