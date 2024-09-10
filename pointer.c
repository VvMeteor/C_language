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

//int main()
//{
//	int arr[10] = { 0 };
//	char* ch[5] = {0};
//	char* (*p)[5] = &ch;//指针数组的数组指针
//	int* p1 = arr;//p1为数组首元素地址
//	int (*p2)[10] = &arr;//p2为整个数组的地址，类型为int (*)[10]
//	return 0;
//}
//数组指针不合适的用法
//int main()
//{
//	int arr[] = { 1,2,3 };
//	int (*p)[3] = &arr;//左边括号里一定要加数量，不然默认为0
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(*p + i));//p是指向数组的，*p相当于数组名，而数组名又是首元素地址，*p本质上是首元素地址
//	}
//	return 0;
//}
//正确用法
//void print(int(*p)[2], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p+i) + j));//p的类型是int (*)[3],指向一个整型数组3个元素，加1跳过3个int类型的整个数组
//			//printf("%d ",p[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int* p, int a)
//{
//	;
//}
//int main()
//{
//	int arr[2][3] = { 1,2,3,4,5,6 };
//	int arr1[3]= { 1,2,3 };
//	print1(arr1, 3);
//	print(arr, 2, 3);
//	return 0;
//}

//int arr1[5];arr1为整型数组
//int* arr2[5];arr2为指针数组
//int (*parr1)[5];parr1是数组指针
//int (*parr2[10])[5];parr2是存放数组指针的数组，这个数组有十个元素，每一个元素都是数组指针类型int （*）[5]

//数组参数，指针参数
//一维数组传参
//void test(int arr[])
//void test(int* arr)
//void test1(int* arr[])
//void test1(int** arr)
//
//int main()
//{
//	int arr1[10] = { 0 };
//	int* arr2[10] = { 0 };
//	test(arr1);
//	test1(arr2);
//	return 0;
//}
//二维数组传参
//void test(int arr[][5])
//void test(int* arr)//错误，存放整型地址的 指针接受不了一个数组
//void test(int** arr)//错误
//void test(int (*arr)[5])//正确，因为传过来的是第一行数组的地址
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}

//一级指针传参
//void print(int* p)
//{
//	;
//}
//int main()
//{
//	int a = 0;
//	int* p = &a;
//	int arr[5] = { 0 };
//	print(&a);
//	print(p);
//	print(arr);
//	return 0;
//}

//二级指针传参
//void print(int** p)
//{
//	;
//}
//int main()
//{
//	int a = 0;
//	int* p = &a;
//	int** pp = &p;
//	int* arr[10];//指针数组
//	print(pp);
//	print(&p);
//	print(arr);
//	return 0;
//}

//函数指针
//int add(int x, int y)
//{
//	return x + y;
//}
//void test(int (*p)(int, int))
//{
//	int a = 1, b = 2;
//	int c=(*p)(a, b);
//	printf("%d\n", c);
//}
//int main()
//{
//	printf("%p\n", &add);
//	printf("%p\n", add);
//	int (*p1)(int,int) = &add;//p1是函数指针，()表示指向函数，括号里的是函数参数类型，最前面的int是返回类型
//	int (*p2)(int, int) =add;//函数指针的意义是可以随时调用，修改函数
//	printf("%p\n", p1);
//	printf("%p\n", p2);
//	int ret = (*p1)(5, 8);//实际上这里的*没有作用，写多少个都无所谓，和p1(5,8)一样，但是要写的话就加括号，原因是&函数名和函数名都是函数的地址，那p和*p也一样
//	printf("%d\n", ret);
//	test(add);
//	return 0;
//}


//C陷阱与缺陷
//int main()
//{
//	(*(void (*)())0)();//这串代码本质是一次函数调用void (*)()是无返回值，无参的函数类型，(void (*)())是强制类型转换，把0强制类型转换为函数指针
//	//*再进行解引用,调用函数
//	return 0;
//}
//void(* signal(int,void (*)(int)))(int);
//这是一次函数声明，signal是函数名，参数类型一个是int，一个是函数指针，signal返回值类型也是函数指针类型，signal函数所返回的地址所指向的函数，参数为int，无返回值

//函数指针的用途

//实现一个简单计算器
void print()
{
	printf("*****************************\n");
	printf("********1.加法 2.减法********\n");
	printf("********3.乘法 4.除法********\n");
	printf("********    0.退出   ********\n");
	printf("*****************************\n");

}
int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}
void calc(int (*p)(int, int))
{
	int x = 0, y = 0;
	printf("请输入操作数：");
	scanf("%d%d", &x, &y);
	printf("%d\n",p(x, y));
}
int main()
{
	int input = 0;
	do
	{
		print();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{
			calc(add);
			break;
		}
		case 2:
		{
			calc(sub);
			break;
		}
		case 3:
		{
			calc(mul);
			break;
		}
		case 4:
		{
			calc(div);
			break;
		}
		case 0:
		{
			printf("退出\n");
			break;
		}
		default:
			printf("err!\n");
			break;
		}
	} while (input);
	return 0;
}