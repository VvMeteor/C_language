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

//struct s
//{
//	//����8bit
//	char  a : 3;
//	char  b : 4;
//	//��1bit������8bit�����cֱ��ʹ���¿��ٵ�8bit���������µ�1bit�������滹��Ҫ�ٿ�8bit�������1bitҲʹ�õ�����ô16��bit�պù���
//	char  c : 5;
//	char  d : 4;
//	//��ʵ֤����Ҫ3���ֽڣ�cֱ��ʹ���¿��ٵ�8bit���������µ�1bit
//};
//int main()
//{
//	struct s s1 = { 0 };
//	printf("%zd\n", sizeof(struct s));
//	//����8bit 00000000
//	s1.a = 10;
//	//a-1010��ֻ��3bit���ضϴ���010�����ҵ����
//	//00000 010
//	s1.b = 12;
//	//b-1100����4bit���ضϴ���1100
//	//0 1100 010
//	//�ռ䲻������������8bit
//	s1.c = 3;
//	//c-00011����5bit���ضϴ���00011
//	//000 00011
//	//�ռ䲻�����ٿ���8bit
//	s1.d = 4;
//	//d-0100����4bit���ضϴ���0100
//	//0000 1000
//
//	//����ڴ���ʽ
//	//0110 0010/0000 0011/0000 0100
//	// 6    2     0    3    0    4
//	//���ﲻ�漰��С�˵����⣬��Ϊÿ�ξͿ���1�ֽ��ٽ���ʹ�ã��������ÿһ���ֽڣ�8bit���ȴӵ�λ��ʼ
//
//	return 0;
//}

//��.ö��
//enum day
//{
//	Mon,//Ĭ�ϴ�0��ʼ,�Ӹ�=1�ʹ�1��ʼ
//	Tues,//1
//	Wed,//2
//	Thur,//3
//	Fri,//4
//	Sat,//5
//	Sun//6//����ö�ٳ��������Ÿ���
//};
//int main()
//{
//	enum day d = Fri;
//	printf("%d\n", Mon);
//	printf("%d\n", Tues);
//	printf("%d\n", Wed);
//	printf("%d\n", Thur);
//	printf("%d\n", Fri);
//
//	return 0;
//}

//��.���ϣ���ͬ�壩
//������ͽṹ����������Ƶ�
//union un
//{
//	int a;
//	char b;
//};
//
//int main()
//{
//	union un u1;
//	printf("%zu\n", sizeof(union un));//4,�ռ乲�ã�a��b��ͬʱʹ��
//	printf("%p\n",&u1);
//	printf("%p\n",&u1.a);
//	printf("%p\n",&u1.b);
//
//	return 0;
//}

//3.1���Ͻ����С������

//int main()
//{
//	union//������ͬ�壬ֻ��һ��
//	{
//		int a;
//		char c;
//	}u;//������ͬ�����ͱ���
//	u.a = 1;
//	if (u.c == 1)//u.cһ��ֻ�ܷ���һ���ֽ�
//	{
//		printf("С��\n");
//	}
//	else
//		printf("���\n");
//	return 0;
//}

//3.2������Ĵ�С
union un
{
	char arr[5];
	int a;//������4
};//��С����5����8

int main()
{
	union un  u1;
	printf("%d\n", sizeof(u1));
	return 0;
}