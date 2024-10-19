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
//���͵�����
//�˵���Ϣ
typedef struct peoinfo
{
	char name[MAXNAME];
	int age;
	char sex[MAXSEX];
	char tele[MAXTELE];
	char addr[MAXADDR];
}peoinfo;

//��̬ͨѶ¼
//typedef struct contact
//{
//	peoinfo data[MAXCOUNT];//�洢�˵���Ϣ
//	int count;//��¼ͨѶ¼��ʵ�ʵ�����
//}contact;

//��̬ͨѶ¼
typedef struct contact
{
	peoinfo* data;//ָ��洢�˵���Ϣ�Ŀռ�
	int count;//��¼ͨѶ¼��ʵ�ʵ�����
	int capacity;//��¼��ǰͨѶ¼����
}contact;

//��ʼ��ͨѶ¼
//void initcon(contact* p);//��̬��
int initcon(contact* p);//��̬��

//�����ϵ��
void addcon(contact* p);

//��ʾͨѶ¼
void showcon(contact* p);

//ɾ����ϵ��
void delcon(contact* p);

//������ϵ��
void searcon(contact* p);

//�޸���ϵ��
void modifycon(contact* p);

//������������ϵ��
void qsortcon(contact* p);