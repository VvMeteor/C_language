#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//一.结构体
//1.1结构体特殊声明
//结构体的不完全声明，匿名结构体类型,仅能使用一次
//struct
//{
//	int age;
//	char name[20];
//}s1;

//1.2结构体的自引用
//struct Node
//{
//	int data;//数据域存放当前节点数据
//	struct Node* next;//指针域存放下一个节点的地址
//};

//1.3结构体与typedef组合
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}*linklist;//在创建结构体类型的同时，将struct Node*重命名为linklist

//struct Node
//{
//	int data;
//	struct Node* next;
//};
//typedef struct Node* linklst; //先创建结构体类型，再将struct Node* 重命名为linklist

//1.4结构体内存对齐

struct stu
{
	int i;
	char c1;
	char c2;
};