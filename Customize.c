#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//һ.�ṹ��
//1.1�ṹ����������
//�ṹ��Ĳ���ȫ�����������ṹ������,����ʹ��һ��
//struct
//{
//	int age;
//	char name[20];
//}s1;

//1.2�ṹ���������
//struct Node
//{
//	int data;//�������ŵ�ǰ�ڵ�����
//	struct Node* next;//ָ��������һ���ڵ�ĵ�ַ
//};

//1.3�ṹ����typedef���
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}*linklist;//�ڴ����ṹ�����͵�ͬʱ����struct Node*������Ϊlinklist

//struct Node
//{
//	int data;
//	struct Node* next;
//};
//typedef struct Node* linklst; //�ȴ����ṹ�����ͣ��ٽ�struct Node* ������Ϊlinklist

//1.4�ṹ���ڴ����

struct stu
{
	int i;
	char c1;
	char c2;
};