#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
//strlen
//����\0ֹͣ������\0֮ǰ���ַ�������
//int main()
//{
//	char a[] = "abcdef";
//	printf("%d\n", strlen(a));
//	return 0;
//}
//����ֵ����Ϊsize_t���޷�������
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
//ģ��strlen
//1.���� 2.ָ���ָ�� 3.�ݹ�
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
//Դ�ַ���������'\0'����
//�ὫԴ�ַ����е�'\0'������Ŀ��ռ�
//Ŀ��ռ�����㹻����ȷ���ܴ��Դ�ַ���Ŀ��ռ����ɱ�
//int main()
//{
//	char  name[20] = { 0 };
//	strcpy(name, "abcdef");
//	printf("%s\n", name);
//}
//ѧ��ģ��ʵ��
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

//strcat�ַ���׷��
//Դ�ַ���������'\0'����
//Ŀ��ռ�������㹻�Ĵ���������Դ�ַ���������
//Ŀ��ռ������޸�
//int main()
//{
//	char a[10] = "abc";
//	strcat(a, "def");
//	printf("%s\n", a);
//	return 0;
//}
//ģ��ʵ��
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

//strcmp�ַ����Ƚ�

//int main()
//{
//	char a[20] = "zhangsan";
//	char b[20] = "zhangsan";
//	if (a == b)//�����ڱȽ�������ַ
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

//ģ��ʵ��
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
//	strncpy(a, b, 3);//��strcpy��һ������������copy���ֽ���
//	printf("%s\n", a);
//	return 0;
//}

//strncat
//int main()
//{
//	char a[20] = "abcdef";
//	char b[] = "bit";
//	strncat(a, b, 3);//��strncat��һ������������׷�ӵ��ֽ���
//	printf("%s\n", a);
//	return 0;
//}

//strncmpҲ�Ƕ�һ�����������ƱȽϵĸ���

//strstr�����Ӵ���һ������
//int main()
//{
//	char a[20] = "abcdef";
//	char b[] = "def";
//	char* ret = strstr(a, b);//��a�в���b
//	if (ret == NULL)
//	{
//		printf("�Ӵ�������\n");
//	}
//	else
//		printf("%s\n", ret);
//	return 0;
//}

//ģ��ʵ��
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
//	char* ret = mystrstr(a, b);//��a�в���b
//	if (ret == NULL)
//	{
//		printf("�Ӵ�������\n");
//	}
//	else
//		printf("%s\n", ret);
//	return 0;
//}

//strtok�ַ����и�
//char *strtok( char *str, const char *strDelimit )�ڶ��������Ƿָ�������Ϊ���
//��һ��������NULL�ʹ�str�Ŀ�ͷ��ʼ�ң��ҵ���һ���ָ��ǲ����棬��NULL�Ǿʹ���һ������ı�ǵ㿪ʼ��
//�ҵ��ı���滻Ϊ\0������һ��ָ��ñ�ǵ�ָ��
//�ú�����ı�ԭ�ַ��������鿽��һ��
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

