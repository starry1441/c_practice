//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
////Ä£ÄâÊµÏÖmemmove
//
//void* MyMemove(void* dest, void* src, int count)
//{
//	void *ret = dest;
//	if (src > dest)
//	{
//		while (count != 0)
//		{
//			*(char*)dest = *(char*)src;
//			((char*)dest)++;
//			((char*)src)++;
//			count--;
//		}
//	}
//	else
//	{
//		count--;
//		while (count >= 0)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//			count--;
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	int arr2[8] = { 0 };
//	MyMemove(arr2, arr1, 16);
//	for (int i = 0; i < 8; i++)
//	{
//		printf("%d", arr2[i]);
//	}
//}