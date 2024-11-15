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

//struct stu
//{
//	int i;//第一个成员从偏移量为0的地方开始放，占4个字节
//	char c1;//char大小为1<8，对齐数取1，取整数倍4，接在i后边
//	char c2;//同c1，取整数倍5对齐，接在c1后边
//};
////总大小占6字节，但是规定总大小必须是成员最大对齐数的整数倍，那就是4的倍数，8
//int main()
//{
//	int i = sizeof(struct stu);//8
//	printf("%d\n", i);
//}
//offsetof返回结构体成员偏移量
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
//	struct s1;//s1中成员最大对齐数为8，那么结构体s1以8作为对齐数
//	char b;
//};//整个结构体大小以结构体内所有成员对齐数包括嵌套结构体的对齐数的最大值的倍数
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

//1.5修改默认对齐数
//#pragma

//#pragma pack(4)//如果输入1则为不对齐，挨着放
//
//struct s1
//{
//	char a;
//	double x;
//};
//
//#pragma pack()//修改完后再改回默认对齐数8，但是上面的s1已经以4为对齐数了
//
//int main()
//{
//	printf("%d\n", sizeof(struct s1));//12
//	return 0;
//}

//1.6结构体传参
//结构体传参首选传地址，print1直接传结构体，那么函数会临时创建一大块空间，耗时费内存，print2更为高效
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

//1.7结构体实现位段的能力
//位段只能在结构体内实现，可以节省空间
//位段必须是整形家族成员，位段成员后面有一个冒号和数字
//struct s
//{
//	//位段的内存分配，看类型，int，一次性先开4个字节
//	int a : 2;//本来int类型需要32个bit，这里位段的作用就是用2个bit来存储a的值，原因在于有些值它本身具有明显的范围，不需要那么多空间来存储
//	int b : 4;
//	int c : 10;
//	//还剩16bit，不够存d了，再开辟4个字节来存下d
//	int d : 30;
//};
//int main()
//{
//	printf("%d", sizeof(struct s));//8
//	return 0;
//}

//1.8位段如何分配内存

//struct s
//{
//	//开辟8bit
//	char  a : 3;
//	char  b : 4;
//	//余1bit，开辟8bit，如果c直接使用新开辟的8bit，舍弃余下的1bit，则下面还需要再开8bit，如果将1bit也使用掉，那么16个bit刚好够用
//	char  c : 5;
//	char  d : 4;
//	//事实证明需要3个字节，c直接使用新开辟的8bit，舍弃余下的1bit
//};
//int main()
//{
//	struct s s1 = { 0 };
//	printf("%zd\n", sizeof(struct s));
//	//开辟8bit 00000000
//	s1.a = 10;
//	//a-1010，只有3bit，截断存入010，从右到左放
//	//00000 010
//	s1.b = 12;
//	//b-1100，有4bit，截断存入1100
//	//0 1100 010
//	//空间不够，继续开辟8bit
//	s1.c = 3;
//	//c-00011，有5bit，截断存入00011
//	//000 00011
//	//空间不够，再开辟8bit
//	s1.d = 4;
//	//d-0100，有4bit，截断存入0100
//	//0000 1000
//
//	//最后内存形式
//	//0110 0010/0000 0011/0000 0100
//	// 6    2     0    3    0    4
//	//这里不涉及大小端的问题，因为每次就开辟1字节再进行使用，而且填充每一个字节（8bit）先从低位开始
//
//	return 0;
//}

//二.枚举
//enum day
//{
//	Mon,//默认从0开始,加个=1就从1开始
//	Tues,//1
//	Wed,//2
//	Thur,//3
//	Fri,//4
//	Sat,//5
//	Sun//6//都是枚举常量，逗号隔开
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

//三.联合（共同体）
//联合体和结构体有许多相似点
//union un
//{
//	int a;
//	char b;
//};
//
//int main()
//{
//	union un u1;
//	printf("%zu\n", sizeof(union un));//4,空间共用，a，b不同时使用
//	printf("%p\n",&u1);
//	printf("%p\n",&u1.a);
//	printf("%p\n",&u1.b);
//
//	return 0;
//}

//3.1联合解决大小端问题

//int main()
//{
//	union//匿名共同体，只用一次
//	{
//		int a;
//		char c;
//	}u;//创建共同体类型变量
//	u.a = 1;
//	if (u.c == 1)//u.c一次只能访问一个字节
//	{
//		printf("小端\n");
//	}
//	else
//		printf("大端\n");
//	return 0;
//}

//3.2联合体的大小
union un
{
	char arr[5];
	int a;//对齐数4
};//大小不是5，是8

int main()
{
	union un  u1;
	printf("%d\n", sizeof(u1));
	return 0;
}