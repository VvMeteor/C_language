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

//#pragma pack(4)//�������1��Ϊ�����룬���ŷ�
//
//struct s1
//{
//	char a;
//	double x;
//};
//
//#pragma pack()//�޸�����ٸĻ�Ĭ�϶�����8�����������s1�Ѿ���4Ϊ��������
//
//int main()
//{
//	printf("%d\n", sizeof(struct s1));//12
//	return 0;
//}

//1.6�ṹ�崫��
//�ṹ�崫����ѡ����ַ��print1ֱ�Ӵ��ṹ�壬��ô��������ʱ����һ���ռ䣬��ʱ���ڴ棬print2��Ϊ��Ч
//struct s
//{
//	int data[100];
//	int x;
//};
//void print1(struct s s1)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", s1.data[i]);
//	}
//	printf("%d ", s1.x);
//}
//void print2(const struct s* s1)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", s1->data[i]);
//	}
//	printf("%d ", s1->x);
//}
//int main()
//{
//	struct s s1 = { {1,2,3},100 };
//	print1(s1);
//	printf("\n");
//	print2(&s1);
//
//	return 0;
//}

//1.7�ṹ��ʵ��λ�ε�����
//λ��ֻ���ڽṹ����ʵ�֣����Խ�ʡ�ռ�
//λ�α��������μ����Ա��λ�γ�Ա������һ��ð�ź�����
//struct s
//{
//	//λ�ε��ڴ���䣬�����ͣ�int��һ�����ȿ�4���ֽ�
//	int a : 2;//����int������Ҫ32��bit������λ�ε����þ�����2��bit���洢a��ֵ��ԭ��������Щֵ������������Եķ�Χ������Ҫ��ô��ռ����洢
//	int b : 4;
//	int c : 10;
//	//��ʣ16bit��������d�ˣ��ٿ���4���ֽ�������d
//	int d : 30;
//};
//int main()
//{
//	printf("%d", sizeof(struct s));//8
//	return 0;
//}

//1.8λ����η����ڴ�

struct s
{
	//����8bit
	char  a : 3;
	char  b : 4;
	//��1bit������8bit�����cֱ��ʹ���¿��ٵ�8bit���������µ�1bit�������滹��Ҫ�ٿ�8bit�������1bitҲʹ�õ�����ô16��bit�պù���
	char  c : 5;
	char  d : 4;
	//��ʵ֤����Ҫ3���ֽڣ�cֱ��ʹ���¿��ٵ�8bit���������µ�1bit
};
int main()
{
	struct s s1 = { 0 };
	printf("%d\n", sizeof(struct s));

	return 0;
}