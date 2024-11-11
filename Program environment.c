#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//1.程序的翻译环境和执行环境
//1.1翻译环境是指将源代码转化为可执行的机器指令（二进制）
//1.2执行环境用于实际执行代码
//源文件（.c）->编译器(cl.exe)->目标文件（.obj）+链接库->链接器(link.exe)->可执行程序（.exe）

//预处理：头文件包含，define定义符号的替换，删除定义的符号，删除注释
//编译：把c语言代码转化为汇编代码
//汇编：将汇编代码转化为二进制代码或机器指令，形成符号表

//链接：合并段表，符号表的合并和重定位

//运行环境：程序载入内存，找到程序入口，开始执行代码

//2.预处理详解
//2.1预定义符号
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("file:%s line:%d date:%s time:%s i=%d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//	return 0;
//}

//2.2#define定义标识符
//#define max 100//定义数字
//#define str "hehe"//定义字符串
//#define print printf("hehe\n")//定义语句
//#define pri printf//定义关键字
//#define print1 printf("file:%s line:%d date:%s time:%s i=%d\n", \
//__FILE__, __LINE__, \
//__DATE__, __TIME__, i);//续航符，转义回车，让换行不是换行
//
//int main()
//{
//	int i = 0;
//	printf("%d\n", max);
//	printf("%s\n", str);
//	print;
//	pri("%d\n", max);
//	return 0;
//}

//3.#define定义宏
//#define square(x) x*x
//#define sq(x) ((x)*(x))
//int main()
//{
//	printf("%d\n", square(5));
//	printf("%d\n", square(5 + 1));
//	//定义的宏具有缺陷，宏是替代,不是计算
//	//5+1*5+1=11
//	printf("%d\n", sq(5 + 1));
//
//	return 0;
//}
//3.1#和##
//#define print(N) printf("the value of "#N" is %d\n",N)
////#N的作用是用代表N的字符来替代，而后面的N直接用数值替代
//#define PRINT(N,format) printf("the value of "#N" is "format"\n",N)
//#define add_(str,num) str##num
//int main()
//{
//	int a = 10;
//	int b = 20;
//	float f = 30.0f;
//	int a1 = 100;
//	print(a);
//	printf("the value of ""a"" is %d\n", a);
//
//	print(b);
//	printf("the value of ""b"" is %d\n", b);
//
//	PRINT(a, "%d");
//	PRINT(f, "%f");
//
//	printf("%d\n", add_(a, 1));//##的作用是将两个参数合并为一个字符
//	printf("%d\n", a1);
//
//	printf("hello ""world\n");
//	return 0;
//}

//3.2define的副作用参数
//#define max(x,y) ((x)>(y)?(x):(y))
//int main()
//{
//	int a = 5;
//	int b = 4;
//	printf("%d\n", max(a++, b++));
//	//((a++)>(b++)?(a++):b(b++))
//	//a=5>b=4,a++=6,b++=5,执行a++,先把a=6返回，a再++=7，b++不再执行
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}

//3.3宏和函数
//宏的优势
//对于计算比较简单的问题，宏的优势在于替换，不会像函数那样传参，创建函数栈帧，进行计算，返回值
//等一系列工作，所以宏的工作效率更快，只是完成替代，然后执行代码；另外宏对于参数的要求没有函数那么严格，
//函数只能针对设置好的参数类型进行计算执行。
//宏可以传类型，函数不行
//#define MALLOC(num,type) (type*)malloc((num)*sizeof(type))
//int main()
//{
//	int* p = MALLOC(10, int);
//	return 0;
//}

//宏相对于函数的劣势
//宏完成代码的替换，但是如果替代的代码过长，就会造成程序的长度大幅增加
//宏是没办法调试的
//宏对于类型没有特别的限制，缺乏严谨性
//宏可能会带来运算符优先级的问题，容易出错，函数不会有
//宏不能递归，函数可以

//3.4命名约定
//宏一般是全大写，函数一般不全大写

//4.#undef
//取消一个宏定义
//#define M 100
//int main()
//{
//	printf("%d\n", M);
//#undef M
//	//printf("%d\n", M);//这里的M识别不了
//
//	return 0;
//}

//5.条件编译
//#define _DEBUG_
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//#ifdef _DEBUG_//当_DEBUG_定义有效时进行
//		printf("%d\n", arr[i]);
//#endif
//	}
//	return 0;
//}

//5.1多分支条件编译
//#define M 5
//int main()
//{
//#if 1//常量表达式
//	printf("hehe\n");
//#endif
//
//#if M>5
//	printf(">\n");
//#elif M==5
//	printf("=\n");
//#else
//	printf("<\n");
//#endif
//	return 0;
//}

//5.2判断一个符号是否被定义
//#define MAX 1
//int main()
//{
//#if defined(MAX)
//	printf("hehe\n");//如果MAX被定义了就打印
//#endif
//#if !defined(M)
//	printf("haha\n");//如果M没被定义了就打印
//#endif
//
//#ifdef MAX
//	printf("hehe\n");//如果MAX被定义了就打印
//#endif
//#ifndef M
//	printf("haha\n");//如果M没被定义了就打印
//#endif
//	return 0;
//}

//5.3避免头文件被多次包含
//头文件被多次包含会造成代码冗余
//#ifndef _TEST_H_
//#define _TEST_H_
//int add(int x, int y);
//#endif//这样写头文件只会被包含一次
//或者
//#pragma once
//int add(int x, int y);

//宏offsetof返回结构体成员偏移量
//#include<stddef.h>
struct s
{
	char c1;
	int i;
	char c2;
};
//int main()
//{
//  struct s s1={0};
//	printf("%d\n", offsetof(struct s, c1));
//	printf("%d\n", offsetof(struct s, i));
//	printf("%d\n", offsetof(struct s, c2));
//
//	return 0;
//}
//模拟实现offsetof
#define OFFSETOF(type,name) (size_t)&(((type*)0)->name)
//将0强制类型转化为一个类型的指针形式，相当于这个类型的起始地址为0，再找到成员，取出它们的地址，以size_t的类型输出即为偏移量
int main()
{
	struct s s1 = { 0 };
	printf("%u\n", OFFSETOF(struct s, c1));
	printf("%u\n", OFFSETOF(struct s, i));
	printf("%u\n", OFFSETOF(struct s, c2));

	return 0;
}
