#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

//1.输入数字，奇数为1，偶数为0
//示例：123->101
//void print(int a)
//{
//	int sum = 0;
//	int i = 0;
//	while (a)
//	{
//		if ((a % 10) % 2 == 1)//奇数
//		{
//			sum+=1 * (int)pow(10, i);
//		}
//		a /= 10;
//		i++;
//	}
//	printf("%d\n", sum);
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}

//2.输出直角三角形
//5
//        *
//      * *
//    * * *
//  * * * *
//* * * * *
//自己的方法
//int main()
//{
//	int input;
//	scanf("%d", &input);
//	int  i = 0,j = 0;
//	for (j = 0; j < input; j++)
//	{
//		for (i = 0; i < (input - 1 - j)*2; i++)
//		{
//			//打印空格
//			printf(" ");
//		}
//		for (i = 0; i < j + 1; i++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//更简单的方法
//int main()
//{
//	int input;
//	scanf("%d", &input);
//	int  i = 0,j = 0;
//	for (j = 0; j < input; j++)
//	{
//		for (i = 0; i < input; i++)
//		{
//			if (i + j < input - 1)
//			{
//				printf("  ");
//			}
//			else
//			{
//				printf("* ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}

//3.判断下面程序输出

//int main()
//{
//	unsigned char a = 200;
//	//先写出200的原码
//	//00000000 00000000 00000000 11001000
//	//截断存储-1100 1000
//	unsigned char b = 100;
//	//先写出100的原码
//	//00000000 00000000 00000000 00101100
//	//截断存储-0010 1100
//	unsigned char c = 0;
//	c = a + b;
//	//a+b涉及运算进行整型提升
//	//由于整型提升看储存编码的符号位，但是unsigned char的最高位不是符号位，是有效位，所以直接补0
//	//a-00000000 00000000 00000000 11001000
//	//b-00000000 00000000 00000000 01100100
//	//  00000000000000000000000001 00101100 - a+b（300）
//	//如果要存入c，c的类型是unsigned char，只能存8位，截断存储0010 1100 - 44
//	printf("%d %d", a + b, c);
//
//	return 0;
//}

//4.5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果:
//A选手说:B第二，我第三;
//B选手说:我第二，E第四;
//C选手说:我第一，D第二;
//D选手说:C最后，我第三;
//E选手说:我第四，A第一;
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。

//int main()
//{
//	int a, b, c, d, e;
//	for (a = 0; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if ((b == 2) + (a == 3) == 1
//							&& (b == 2) + (e == 4) == 1
//							&& (c == 1) + (d == 2) == 1
//							&& (c == 5) + (d == 3) == 1
//							&& (e == 4) + (a == 1) == 1)//重点是这种表示的方式值得学习，将实际问题描述为编程语言
//						{
//							if (a* b* c* d* e == 120)
//							{
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//5.日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个
//以下为4个嫌疑犯的供词:
//A说:不是我。
//B说: 是C。
//C说: 是D。
//D说: C在胡说
//已知3个人说了真话，1个人说的是假话。

//设x为凶手，a=1,b=2,c=3,d=4
//#include<ctype.h>
//int main()
//{
//	int x;
//	for (x = 1; x <= 4; x++)
//	{
//		if ((x != 1) + (x == 3) + (x == 4) + (x != 4) == 3)
//		{
//			printf("%c是凶手\n", toupper(x + 96));
//		}
//	}
//	return 0;
//}

//6.打印杨辉三角

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[5][5] = { 0 };
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0 || i==j)
//			{
//				arr[i][j] = 1;
//			}
//			else if (i>1 && j>0)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//
//		}
//	}
//	int n = 0;
//	for (i = 0; i < 5; i++)
//	{
//		for (n = 0; n < 4 - i; n++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//7.字符串左旋转
//左旋转一个字符ABCD->BCDA
//左旋转两个字符ABCD->CDAB
//#include<string.h>
//int main()
//{
//	char src[10] = { 0 };
//	char dest[20] = { 0 };
//	int k = 0;
//	scanf("%s %d", src,&k);
//	int sz = strlen(src);
//	memmove(src+sz, src, k);
//	printf("%s\n", src+k);
//	return 0;
//}
//void leftmove(char arr[], int k)
//{
//	while (k--)
//	{
//		char m = arr[0];
//		int i = 1;
//		while (arr[i])
//		{
//			arr[i - 1] = arr[i];
//			i++;
//		}
//		arr[i - 1] = m;
//	}
//}
//int main()
//{
//	char a[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	leftmove(a, k);
//	printf(a);
//	return 0;
//}