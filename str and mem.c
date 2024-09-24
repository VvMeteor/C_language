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
int main()
{
	char a[] = "123547@hnu.com";
	const char b[] = "@.";
	char c[30] = { 0 };
	strcpy(c, a);
	char* ret = NULL;
	for (ret=strtok(c, b);
		 ret!=NULL;
	  	 ret= strtok(NULL, b))
		printf("%s\n", ret);
	return 0;
}

