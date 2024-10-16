#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

//一.动态内存管理

//1.1动态内存函数malloc
//申请一块内存空间，函数参数为申请的空间的字节大小
//返回值是指向所开辟的空间的指针,如果申请失败就返回空指针
int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	free(p);//释放这块空间，归还系统，但是p还是指向源地址
	*p = 2;//为啥还能改，释放怎么体现？
	p = NULL;//p成为空指针，无法再找到该空间
	return 0;
}