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

//struct stu
//{
//	int i;//��һ����Ա��ƫ����Ϊ0�ĵط���ʼ�ţ�ռ4���ֽ�
//	char c1;//char��СΪ1<8��������ȡ1��ȡ������4������i���
//	char c2;//ͬc1��ȡ������5���룬����c1���
//};
////�ܴ�Сռ6�ֽڣ����ǹ涨�ܴ�С�����ǳ�Ա�������������������Ǿ���4�ı�����8
//int main()
//{
//	int i = sizeof(struct stu);//8
//	printf("%d\n", i);
//}
//offsetof���ؽṹ���Աƫ����
//#include<stddef.h>
//struct stu
//{
//	char c1;
//	int i;
//	char c2;
//};
//int main()
//{
//	int  i = sizeof(struct stu);//12
//	printf("%d\n", i);
//
//	printf("%d\n", offsetof(struct stu, c1));
//	printf("%d\n", offsetof(struct stu, i));
//	printf("%d\n", offsetof(struct stu, c2));
//
//}

//struct s1
//{
//	char x;
//	double y;
//	char z;
//}p1 = {'c',8.2,'n'};//24
//struct s2
//{
//	char a;
//	struct s1;//s1�г�Ա��������Ϊ8����ô�ṹ��s1��8��Ϊ������
//	char b;
//};//�����ṹ���С�Խṹ�������г�Ա����������Ƕ�׽ṹ��Ķ����������ֵ�ı���
////40
//int main()
//{
//	int i = sizeof(struct s1);
//	int j = sizeof(struct s2);
//
//	printf("%d\n", i);
//	printf("%d\n", j);
//
//	return 0;
//}

//1.5�޸�Ĭ�϶�����
//#pragma

#pragma pack(4)//�������1��Ϊ�����룬���ŷ�

struct s1
{
	char a;
	double x;
};

#pragma pack()//�޸�����ٸĻ�Ĭ�϶�����8�����������s1�Ѿ���4Ϊ��������

int main()
{
	printf("%d\n", sizeof(struct s1));//12
	return 0;
}
