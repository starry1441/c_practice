//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
////�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//
////�ݹ�
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
////�ǵݹ�
//int Strlen1(char *str)
//{
//	int i;
//	for (i = 0; str[i]; i++);//�ַ�������
//	return i;
//}
//
//int main()
//{
//	//�ݹ�
//	char *p = "abcdefg";
//	int len = Strlen(p);
//	printf("%d\n", len);
//	//�ǵݹ�
//	int len1 = Strlen1(p);
//	printf("%d\n", len1);
//	return 0;
//}