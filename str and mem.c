#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
//strlen
//遇到\0停止，返回\0之前的字符串长度
//int main()
//{
//	char a[] = "abcdef";
//	printf("%d\n", strlen(a));
//	return 0;
//}
//返回值类型为size_t，无符号整型
//int  main()
//{
//	if (strlen("abc") - strlen("abcdef")>0)
//	{
//		printf(">\n");
//	}
//	else
//		printf("<\n");
//	return 0;
//}
//模拟strlen
//1.计数 2.指针减指针 3.递归
//size_t mystrlen(char* str)
//{
//	assert(str);
//	size_t c = 0;
//	while (*str++ != '\0')
//	{
//		c++;
//	}
//	return c;
//}
//int main()
//{
//	char a[] = "abcdef";
//	printf("%zu\n", mystrlen(a));
//	return 0;
//}



//strcpy
//源字符串必须以'\0'结束
//会将源字符串中的'\0'拷贝到目标空间
//目标空间必须足够大，以确保能存放源字符串目标空间必须可变
//int main()
//{
//	char  name[20] = { 0 };
//	strcpy(name, "abcdef");
//	printf("%s\n", name);
//}
//学会模拟实现
//char* mystrcpy(char* a2, const char* a1)
//{
//	assert(a1);
//	assert(a2);
//	char* p = a2;
//	while (*a2++ = *a1++);
//	return p;
//}
//int main()
//{
//	char a1[] = "abcdef";
//	char a2[20] = { 0 };
//	mystrcpy(a2, a1);
//	printf("%s\n", a2);
//	return 0;
//}

//strcat字符串追加
//源字符串必须以'\0'结束
//目标空间必须有足够的大，能容纳下源字符串的内容
//目标空间必须可修改
//int main()
//{
//	char a[10] = "abc";
//	strcat(a, "def");
//	printf("%s\n", a);
//	return 0;
//}
//模拟实现
//char* mystrcat(char* dest, const char* str)
//{
//	assert(dest && str);
//	char* p = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *str++)
//	{
//		;
//	}
//	return p;
//}
//int main()
//{
//	char a[10] = "abc";
//	char b[] = "def";
//	mystrcat(a, b);
//	printf("%s\n", a);
//	return 0;
//}

//strcmp字符串比较

//int main()
//{
//	char a[20] = "zhangsan";
//	char b[20] = "zhangsan";
//	if (a == b)//这是在比较两个地址
//	{
//		printf("=");
//	}
//	else
//		printf("!=");
//	return 0;
//}

//int main()
//{
//	char a[20] = "zhangsan";
//	char b[20] = "zhangz";
//	int ret = strcmp(a, b);
//	if (ret<0)
//	{
//		printf("<\n");
//	}
//	else if (ret == 0)
//	{
//		printf("=\n");
//	}
//	else
//	{
//		printf(">\n");
//	}
//	return 0;
//}

//模拟实现
//int mystrcmp(const char* a1, const char* a2)
//{
//	assert(a1 && a2);
//	while (*a1 == *a2)
//	{
//		if (*a1 == '\0')
//		{
//			return 0;
//		}
//		a1++, a2++;
//	}
//	return *a1 - *a2;
//}
//int main()
//{
//	char a[20] = "zhangsan";
//	char b[20] = "zhangsan";
//	int ret = mystrcmp(a, b);
//	if (ret < 0)
//	{
//		printf("<\n");
//	}
//	else if (ret == 0)
//	{
//		printf("=\n");
//	}
//	else
//	{
//		printf(">\n");
//	}
//	return 0;
//}

//strncpy
//int main()
//{
//	char a[20] = "abcdef";
//	char b[] = "bit";
//	strncpy(a, b, 3);//比strcpy多一个参数，限制copy的字节数
//	printf("%s\n", a);
//	return 0;
//}

//strncat
//int main()
//{
//	char a[20] = "abcdef";
//	char b[] = "bit";
//	strncat(a, b, 3);//比strncat多一个参数，限制追加的字节数
//	printf("%s\n", a);
//	return 0;
//}

//strncmp也是多一个参数来限制比较的个数

//strstr查找子串的一个函数
//int main()
//{
//	char a[20] = "abcdef";
//	char b[] = "def";
//	char* ret = strstr(a, b);//在a中查找b
//	if (ret == NULL)
//	{
//		printf("子串不存在\n");
//	}
//	else
//		printf("%s\n", ret);
//	return 0;
//}

//模拟实现
//char* mystrstr(const char* a1, const char* a2)
//{
//	assert(a1 && a2);
//	const char* s1 = a1;
//	const char* s2 = a2;
//	const char* p = a1;
//	while (*p)
//	{
//		s1 = p;
//		s2 = a2;
//		while (*s1!='\0'&& *s2!='\0'&& * s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)p;
//		}
//		p++;
//	}
//	return NULL;
//}
//int main()
//{
//	char a[20] = "abcddefgh";
//	char b[] = "def";
//	char* ret = mystrstr(a, b);//在a中查找b
//	if (ret == NULL)
//	{
//		printf("子串不存在\n");
//	}
//	else
//		printf("%s\n", ret);
//	return 0;
//}

//strtok字符串切割
//char *strtok( char *str, const char *strDelimit )第二个参数是分隔符，作为标记
//第一个参数非NULL就从str的开头开始找，找到第一个分割标记并保存，是NULL那就从上一个保存的标记点开始找
//找到的标记替换为\0，返回一个指向该标记的指针
//该函数会改变原字符串，建议拷贝一份
//int main()
//{
//	char a[] = "123547@hnu.com";
//	const char b[] = "@.";
//	char c[30] = { 0 };
//	strcpy(c, a);
//	char* ret = NULL;
//	for (ret=strtok(c, b);
//		 ret!=NULL;
//	  	 ret= strtok(NULL, b))
//		printf("%s\n", ret);
//	return 0;
//}

//strerror返回错误码，所对应的错误信息
//c语言中的库函数执行失败就会返回错误码
//errno-c语言设置的一个存放全局错误码的变量
#include<errno.h>
//int main()
//{
//	printf("%s\n", strerror(0));
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));
//
//	return 0;
//}

//int main()
//{
//	FILE* p = fopen("1.txt", "r");
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	else;
//	return 0;
//}

//memcpy内存拷贝
//和strncpy相似，适用范围广,拷贝两块独立空间
//想要实现重叠拷贝，要用到memmove,这里由于编译器的原因，memcpy超量完成了memmove的功能
int main()
{
	int a1[] = { 1,2,3,4,5,6,7 };
	int a2[10] = { 0 };
	int a3[] = { 2,4,6,8,10 };
	int a4[] = { 2,4,6,8,10,12,14 };

	memcpy(a2, a1, 28);
	memcpy(a3+2, a3, 12);
	memmove(a4+3, a4, 16);

	int i = 0;
	for (i = 0; i < 7; i++)
	{
		printf("%d ", *(a2 + i));
	}
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", *(a3 + i));
	}
	printf("\n");
	for (i = 0; i < 7; i++)
	{
		printf("%d ", *(a4 + i));
	}
}

//模拟实现
//void* mymemcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		((char*)dest)++;
//		((char*)src)++;
//	}
//	return ret;
//}
//int main()
//{
//	int a1[] = { 1,2,3,4,5,6,7 };
//	int a2[10] = { 0 };
//	mymemcpy(a2, a1, 28);
//	int i = 0;
//	for (i = 0; i < 7; i++)
//	{
//		printf("%d ", *(a2 + i));
//	}
//}

//memmove
