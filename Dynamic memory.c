#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

//一.动态内存管理

//1.1动态内存函数malloc
//申请一块内存空间，函数参数为申请的空间的字节大小
//返回值是指向所开辟的空间的指针,如果申请失败就返回空指针
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);//释放这块空间，归还系统，但是p还是指向源地址,释放动态空间
//	*p = 2;//为啥还能改，释放怎么体现？
//	p = NULL;//p成为空指针，无法再找到该空间
//	return 0;
//}

//1.2动态内存函数calloc
//和malloc函数相似，但是有两个参数，第一个参数是要创建的元素个数，第二个是元素的大小
//并且创建好了之后将这些元素默认初始化为0，返回首元素指针

//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	int i = 0;
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//1.3 realloc函数
//用于调整malloc和calloc开辟的空间大小
//调大的时候，可能会出现两种情况，一是后边有充足空间，直接补充就行
//二是后边空间不够，realloc就会在内存中重新找一块空间，把原开辟的空间中的内容拷贝过去，再返回新的指针指向新的一块空间
//申请失败返回空指针，第二种情况申请成功自动释放原开辟的空间
//realloc(NULL,40)等价于malloc(40)
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	int* ptr = (int*)realloc(p, 80);//第一个参数为要调整的内存空间的指针，第二个是要调整到的空间大小
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i) = i);
//	}
//	return 0;
//}

//1.4动态内存函数多次使用容易造成内存空间碎片化，内存空间利用率会降低

//二.常见的动态内存错误

//2.1对NULL指针的解引用操作

//int main()
//{
//	int* p = (int*)malloc(40);
//	*p = 20;//这里缺乏对p的一个确认就直接解引用了是有风险的，正确操作应该在前面加if判断
//	free(p);
//	p = NULL;
//	return 0;
//}

//2.2对动态开辟的内存空间越界访问

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*(p + i) = i;
//	}//形成越界访问
//  free(p);
//	p = NULL;
//	return 0;
//}

//2.3对非动态开辟的内存使用free释放

//int main()
//{
//	int a = 0;
//	int* p = &a;
//	int i = 0;
//	//...
//
//	free(p);
//	p = NULL;
//	return 0;
//}

//2.4使用free释放动态内存空间的一部分空间

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//	free(p);//此时free的p已经指向最后四个字节了
//	p = NULL;
//	return 0;
//}

//2.5使用free多次释放同一块动态内存空间

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	free(p);
//	//...
//	free(p);
//	return 0;
//}

//2.6动态内存开辟忘记释放(内存泄露)

//2.6.1
//int test()
//{
//	int* p = (int*)malloc(40);
//	int i = 0;
//	scanf("%d", &i);
//	if (i == 5)
//	{
//		return 1;
//	}
//	free(p);
//	p = NULL;
//}
//int main()
//{
//	test();//该函数就有动态内存空间无法执行释放的危险
//	return 0;
//}

//2.6.2

//int* test()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return p;
//	}
//	//...
//	return p;
//}
//int main()
//{
//	int* ret = test();
//	//后续忘记释放test里面开辟的动态内存空间
//	return 0;
//}