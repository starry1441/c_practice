//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////#include <string.h>
//
////写一个函数，可以逆序一个字符串的内容。
//
//int Reverse(char *arr,int len)
//{
//	char *left = arr;
//	char *right = arr + len - 2;
//	for (int i = 0; i < len/2; i++)
//	{
//		char tmp = 1;
//		tmp = *(left+i);
//		*(left + i) = *(right-i);
//		*(right - i) = tmp;
//	}
//	//while (left < right){
//	//	char temp = *left;
//	//	*left = *right;
//	//	*right = temp;
//	//	left++, right--;
//	//}
//}
//
//int main()
//{
//	char arr[] = "hello tomorrow";
//	int len = sizeof(arr) / sizeof(arr[0]);//把‘\0’算进去了
//	printf("逆置之前:%s\n", arr);
//	Reverse(arr,len);
//	printf("逆置值后:%s\n", arr);
//	return 0;
//}
