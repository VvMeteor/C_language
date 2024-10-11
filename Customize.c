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

#pragma pack(4)//如果输入1则为不对齐，挨着放

struct s1
{
	char a;
	double x;
};

#pragma pack()//修改完后再改回默认对齐数8，但是上面的s1已经以4为对齐数了

int main()
{
	printf("%d\n", sizeof(struct s1));//12
	return 0;
}
