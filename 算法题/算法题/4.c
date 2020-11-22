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
	//��������
	reverse(str, str + len - 1);
	//���յ��ʽ��оֲ�����
	char* cur = str;
	while (*cur)
	{
		//���ҵ��ʵı߽磺�ո����'\0'
		char* start = cur;
		while (*cur != ' '&&*cur != '\0')
			++cur;
		//��ǰ���ʵ����䣺[start,cur)
		//��ת����
		reverse(start, cur - 1);
		//������һ�����ʵ�����
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