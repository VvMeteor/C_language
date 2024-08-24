#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//
//	for (i = 1; i<= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");//调试就知道，最后i=12的时候arr[12]=0，而恰好arr[12]的地址和i一模一样，所以i也被改成0，进入死循环
//	}
//	return 0;
//}

//代码的优化
//void my_strcpy(char* arr1, char* arr2)
//{
//	while (*arr2 != '\0')
//	{
//		*arr1 = *arr2;
//		arr2++;
//		arr1++;
//	}
//	*arr1 = *arr2;
//}
//int main()
//{
//	char arr1[20] = "XXXXXXXXXXXXXXX";
//	char arr2[] = "hello world!";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//改成下面
void my_strcpy(char* arr1, char* arr2)
{
	while (*arr1++ =*arr2++)//赋值语句，只要*arr1非零即真，当为\0时，会先赋值再判断跳出循环
	{
		;
	}
}
int main()
{
	char arr1[20] = "XXXXXXXXXXXXXXX";
	char arr2[] = "hello world!";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}