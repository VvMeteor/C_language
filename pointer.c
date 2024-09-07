#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//指针的类型

//int main()
//{
//	int a = 0x11223344;//0x表示16进制，11223344共占4个字节，1占半个字节，二进制用四位表示
// //因为对于一个整型的2进制，由32位组成，每四位代表的数值范围就是一位十六机制数字的范围
// 比如0000~1111就是0到15，那就用一个十六进制数字表示就可以了，所以十六进制会有8个数字，每个数字占半个字节，即4个bit
//	int* pa = &a;
//	char* pb = &a;//都可以存放地址
//	*pa = 0;//因为是int*类型的指针，解引用的时候可以一次性访问和修改4个字节，
//  注意这里访问的不是指针变量，访问和跳过的也不是指针变量里的字节，而是从存放地址开始并往后的存储的字符，或整型的字节（或内存空间）。
//	*pb = 0;//只能访问1个字节和修改
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("pa=%p\n", pa);
//	printf("pa+1=%p\n", pa+1);
//	printf("pc=%p\n", pc);
//	printf("pc+1=%p\n", pc+1);
//
//	return 0;
//}
//指针变量的类型决定了pa+-1时跳过的字节数

//访问字节数和跳过字节数一样也是不能通用的，因为存储方式是不一样的

//野指针
//1.未初始化
//int main()
//{
//	int* p;//p没有初始化，意味着p没有明确的指向
//	//一个局部变量未进行初始化，放置的是随机值
//	*p = 10;//非法访问内存，p就是野指针
//	return 0;
//}
////2.指针越界访问
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = i;
//		p++;//第11次循环时，指针解引用超出数组范围，形成野指针
//	}
//	return 0;
//}
////3.指针指向的空间释放
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();//因为这个地址指向的是函数里的局部变量a，当函数调用结束后，就无法访问了
//	*p = 20;//这里p就成了野指针，虽然能找到a的地址，但是不能访问和修改
//	return 0;
//}

//指针加减整数
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		//*p++ = 1;
//		//arr[i] = 1;
//		*(p + i) = 1;
//
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",arr[i]);
//
//	}
//	return 0;
//}

//指针-指针
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}

//指针-指针实现mystrlen
//int mystrlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	char str[] = "abcdef";
//	int a=mystrlen(str);
//	printf("%d\n", a);
//	return 0;
//}

//指针关系运算
//#define v 5
//int main()
//{
//	int i = 0;
//	int arr[v] = { 0 };
//	int* p = &arr[v];
//	for (p; p > arr;)
//	{
//		*--p = 1;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//
//#define v 5
//int main()
//{
//	int i = 0;
//	int arr[v] = { 0 };
//	int* p = &arr[v]-1;
//	for (p; p >= arr;p--)//最后摆脱循环涉及到指向第一个元素前面的那一块内存空间与本空间内地址的比较
//    //这是标准不允许的，标准允许本空间内之间比较，本空间与最后一个元素后面的那一块空间进行比较
//	{
//		*p = 1;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//arr[i]的运算本质是找到arr+i,在对其进行解引用*（arr+i）

//二级指针

//int main()
//{
//	int a = 0;
//	int* pa = &a;//pa是一级指针变量,指向a，*的意思是该变量为指针变量，int是它指向的类型，pa是它的名称
//	int** ppa = &pa;//ppa是二级指针变量，指向pa，*的意思是该变量为指针变量，它指向的类型是int*，ppa是它的名称
//	return 0;
//}

//指针数组
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int i = 0;
//	int* parr[10] = { &a,&b, & c };
//	for (i = 0; i < 3; i++)
//	{
//		printf("%p ", parr[i]);
//	}
//	return 0;
//}

//虚拟二维数组

//int main()
//{
//	int arr1[4] = { 1,2,3,4 };
//	int arr2[4] = { 2,3,4,5 };
//	int arr3[4] = { 3,4,5,6 };
//	int* parr[3] = { arr1,arr2,arr3 };//arr1这些代表数组首元素地址，所以创建指针数组来存储
//	int i = 0, j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//练习题1

//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;//强制类型转化，arr原数组没变，这里1还是占4个字节，用十六进制表示就是
//	//0x 00 00 00 01,在内存中存放的时候则是01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 00 05 00 00 00 00
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;//short*类型的指针解引用一次只能访问两个字节，第一次把10 00改成00 00；
//		//第二次i=1跳过2个字节把00 00改成00 00；第三次把02 00改成00 00；第四次改00 00 为00 00
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//练习题2
//字符串倒序
//#include<string.h>
//int main()
//{
//	char ch[10] = { 0 };
//	scanf("%s", ch);//scanf遇到空格会停止接收，用gets可以完整接收
//	int n = strlen(ch);
//	int i = 0;
//	char* p = (char*) & ch;
//	for (i = n - 1; i >=(n/2); i--)
//	{
//		char m = *p;
//		*(p) = *(ch + i);
//		*(ch + i) = m;
//		p++;
//
//	}
//	printf("%s\n", ch);
//	return 0;
//}
//排序
//#include<string.h>
//int main()
//{
//	char ch[10] = { 0 };
//	gets(ch);
//	int n = strlen(ch);
//	int i = 0, j = 0;
//	char m = 0;
//	for (i=0;i<n-1;i++)
//	{
//		for (j=0;j<n-i-1;j++)
//		{
//			if (ch[j] > ch[1 + j])
//			{
//				m = ch[j];
//				ch[j] = ch[j + 1];
//				ch[j + 1] = m;
//			}
//		}
//	}
//		printf("%s\n", ch);
//	return 0;
//}

//打印菱形

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int line = (n + 1) / 2;
//	//上
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//空格
//		int j = 0;
//		for (j = 0; j < line - 1-i; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下
//	for (i = 1; i < line; i++)
//	{
//		//空格
//		int j = 0;
//		for (j = 0; j < i; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j < 2 * line-1-i*2; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//指针进阶
//字符指针
//int main()
//{
//	const char* p1 = "abcdef";//这里不是把abcdef存进p里面，p是字符型指针变量，大小4个字节放不下，这里p中存放的是字符串的首字符a的地址、
//	const char* p2 = "abcdef";//常量字符串，存储于只读空间，不可修改，只存放一份
//	char arr1[] = "abcdef";//创建局部变量数组存放字符串，首元素地址不会相同
//	char arr2[] = "abcdef";
//
//	if (p1 == p2)
//	{
//		printf("p1=p2\n");//均指向只读空间里的同一个字符串常量，相同
//	}
//	else
//		printf("p1!=p2\n");
//	if (arr1 == arr2)
//	{
//		printf("arr1=arr2\n");
//	}
//	else
//		printf("arr1!=arr2\n");
//	printf("%s\n", p1);//%s打印，给一个地址就开始打印，直到遇到\0
//	return 0;
//}

//指针数组
//int main()
//{
//	int arr1[] = { 1,2,3 };
//	int arr2[] = { 2,3,4 };
//	int arr3[] = { 3,4,5 };
//
//	int* parr[3] = { arr1,arr2,arr3 };//虚拟二维数组和真实二维数组的区别在于前者所有元素不一定连续存放，后者一定是连续存放的
//	int i = 0, j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//数组指针
// int (*p)[10]

int main()
{
	int arr[10] = { 0 };
	int* p1 = arr;//p1为数组首元素地址
	int (*p2)[10] = &arr;//p2为整个数组的地址，类型为int (*)[10]
	return 0;
}