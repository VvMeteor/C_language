#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

//һ.��̬�ڴ����

//1.1��̬�ڴ溯��malloc
//����һ���ڴ�ռ䣬��������Ϊ����Ŀռ���ֽڴ�С
//����ֵ��ָ�������ٵĿռ��ָ��,�������ʧ�ܾͷ��ؿ�ָ��
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
	free(p);//�ͷ����ռ䣬�黹ϵͳ������p����ָ��Դ��ַ
	*p = 2;//Ϊɶ���ܸģ��ͷ���ô���֣�
	p = NULL;//p��Ϊ��ָ�룬�޷����ҵ��ÿռ�
	return 0;
}