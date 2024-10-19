#pragma once
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>

#define INITCOUNT 3
#define MAXCOUNT 3
#define MAXNAME 20
#define MAXSEX 10
#define MAXTELE 12
#define MAXADDR 30
#define UP 2



enum option
{
	EXIT,
	add,
	del,
	search,
	modify,
	show,
	sort
};
void menu();
//类型的声明
//人的信息
typedef struct peoinfo
{
	char name[MAXNAME];
	int age;
	char sex[MAXSEX];
	char tele[MAXTELE];
	char addr[MAXADDR];
}peoinfo;

//静态通讯录
//typedef struct contact
//{
//	peoinfo data[MAXCOUNT];//存储人的信息
//	int count;//记录通讯录中实际的人数
//}contact;

//动态通讯录
typedef struct contact
{
	peoinfo* data;//指向存储人的信息的空间
	int count;//记录通讯录中实际的人数
	int capacity;//记录当前通讯录容量
}contact;

//初始化通讯录
//void initcon(contact* p);//静态版
int initcon(contact* p);//动态版

//添加联系人
void addcon(contact* p);

//显示通讯录
void showcon(contact* p);

//删除联系人
void delcon(contact* p);

//查找联系人
void searcon(contact* p);

//修改联系人
void modifycon(contact* p);

//按名字排序联系人
void qsortcon(contact* p);