//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//
////Ä£ÄâÊµÏÖmemcpy
//
//void *MyMemcpy(void *dest, void *src, int count)
//{
//	void *ret = dest;
//	while (count != 0)
//	{
//		*(char*)dest = *(char*)src;
//		((char*)dest)++;
//		((char*)src)++;
//		count--;
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	int arr2[8] = { 0 };
//	MyMemcpy(arr2, arr1, 16);
//	for (int i = 0; i < 8; i++)
//	{
//		printf("%d", arr2[i]);
//	}
//	return 0;
//}