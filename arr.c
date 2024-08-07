#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//二维数组的创建和初始化
//int main()
//{
//	int arr1[2][3] = {1,2,3,4,5,6};//创建一个2行3列的二维数组并初始化
//	//arr1会依次读取，第一行读三个，第二行读三个，元素不够则填充0
//	int arr2[2][3] = { {1,2},{3,4} };
//	//对元素进行分组，放入
//	int arr3[][3] = { {1,2},{3,4} };
//	//可以省略行，但是不能省略列
//	//对于二维数组里的元素的下标，其行和列都是从0开始的
//	return 0;
//}

//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	for (i = 0; i <= 2; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= 2;j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//冒泡排序方法
//void sort(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)//一共会循环sz-1次，因为一共sz个元素，把sz-1个排好了，最后一个自然也ok了
//		//每循环一次就会将一个元素排在属于他的位置，而且是从大到小，第一次循环一定会把数组元素中最大的排到最后去
//		//第二次就是第二大的...
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)//这里是将最大值往后搬运的操作
//			//j之所以小于sz-1-i是因为，i每循环一次，就有一个元素被排好了，那么本质上就是对前面sz-i个元素的排序
//			//这里以最大帮运次数作为考虑
//		{
//			if (arr[j] > arr[j + 1])//具体的搬运操作
//			{
//				int con = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = con;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,5,6,10,3,8,5,4,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr, sz);
//	int n = 0;
//	for (n = 0; n < sz; n++)
//	{
//		printf("%d ", arr[n]);
//	}
//	return 0;
//}

//数组首元素地址
//数组名确实能表示首个元素的地址，但是有两个例外：
//1.sizeof（数组名），这里的数组名表示整个数组，计算的是整个数组的大小，单位是字节
//2.&数组名，这里的数组名表示整个数组，取出的地址是整个数组的地址
//int main()
//{
//	int arr[10];// = { 0 };
//	printf("%p\n", arr);//和arr[0]无异，首元素地址
//	printf("%p\n", arr+1);//第二个元素的地址
//
//	printf("%p\n", &arr[0]);//首元素地址
//	printf("%p\n", &arr[0] + 1);//第二个元素的地址
//
//	printf("%p\n", &arr);//数组地址
//	printf("%p\n", &arr+1);//跳过整个数组
//
//	printf("%d\n", sizeof(arr));
//
//	return 0;
//}

//二维数组的数组名理解

int main()
{
	int arr[3][4];
	printf("%zu\n", sizeof(arr));
	arr;//这个表示二维数组的首元素地址
	//二维数组要把它看作数组的一维数组，每一行数组都是一个元素，那么首元素地址也就是第一行数组的地址了
	//而不是第一行数组的第一个元素的地址
	printf("%p\n", arr);
	printf("%p\n", arr+1);
	int i = sizeof(arr) / sizeof(arr[0]);//计算行数
	int j = sizeof(arr[0]) / sizeof(arr[0][0]);//计算列数
	printf("%d %d\n", i, j);
	return 0;
}