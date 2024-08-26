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
#include<assert.h>
////void my_strcpy(char* arr1, const char* arr2)//这里的viod返回值也不太好，改成char*，返回改变后的数组arr1的起始地址方便查看
//char* my_strcpy(char* arr1,const char* arr2)//保证arr2不会变，他是用来赋值的，这些做法都是为了防止后续代码出错
//{
//	assert(arr1 != NULL);//断言，如果arr1不是空指针就什么都不会发生，如果为空指针，则会报错。
//	assert(arr2 != NULL);
//	char* ret = arr1;
//	while (*arr1++ =*arr2++)//赋值语句，只要*arr1非零即真，当为\0时，会先赋值再判断跳出循环
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "XXXXXXXXXXXXXXX";
//	char arr2[] = "hello world!";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//const修饰
//int main()
//{
//	const int num = 10;
//	int n = 20;
//	int m = 0;
//	//不能直接改，但是可以取地址改
//	int* p = &num;
//	*p = 20;
//	//但是如果加const修饰
//	//1.const如果在*左边,则不能改动*p1,但是可以改变p1的本身的值
//	const int* p1 = &n;
//	//*p1 = 20;err
//	//2.const如果是在*右边，则不能改动p2本身的值，但是可以改动*p2
//	int* const p2 = &m;
//	//p2 = &n;//err
//	//3.两边都加const,p3指向的对象*p3和p3本身的值都不能被改变
//	const int* const p3 = &num;
//	printf("%d\n", num);
//	return 0;
//}

//重新实现my_strlen

int my_strlen(const char* arr)
{
	int c = 0;
	assert(arr != NULL);
	while (*arr != '\0')
	{
		c++;
		arr++;
	}
	return c;
}
int main()
{
	char arr[] = "abcdef";
	int n=my_strlen(arr);
	printf("%d\n", n);
	return 0;
}