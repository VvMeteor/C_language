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

//杨氏矩阵
//8.有一个数字矩阵,矩阵的每行从左到右是递增的,矩阵从上到下是递增的,
//请编写程序在这样的矩阵中查找某个数字是否存在。
//要求:时间复杂度小于0(N);
//看看能不能实现多次查找
//struct coor 
//{
//	int x;
//	int y;
//};
//struct coor find(int arr[3][3], int r, int c, int k)
//{
//	int x = 0;
//	int y = c - 1;//表示右上角位置
//	struct coor p = { -1,-1 };
//	while (x <= r - 1 && y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			p.x = x;
//			p.y = y;
//			return p;
//		}
//	}
//	return p;
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,2,3,4,3,4,5 };
//	int k = 0;
//	scanf("%d", &k);
//	struct coor p=find(arr, 3, 3, k);
//	printf("%d %d\n", p.x, p.y);
//	return 0;
//}

//9.判断一个字符串是不是由另外一个字符串旋转的来
//bcdefa就是由abcdef旋转而来，FABCDE不是
#include<string.h>
//方法1
//int is_turn(char arr1[], char arr2[])
//{
//	int  len = strlen(arr1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		int j = 0;
//		char tmp = arr1[0];
//		for (j = 0; j < len - 1; j++)
//		{
//			arr1[j] = arr1[j + 1];
//		}
//		arr1[len - 1] = tmp;
//		if (strcmp(arr1, arr2) == 0)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	char pre[] = "abcdef";
//	char rep[] = "cdefab";
//	int ret = is_turn(pre, rep);
//	if (ret == 1)
//		printf("ok\n");
//	else
//		printf("no\n");
//	return 0;
//}
//方法2 
//int is_turn1(char arr1[], char arr2[])
//{
//	size_t len1 = strlen(arr1);
//	size_t len2 = strlen(arr2);
//	if (len1 != len2)
//		return 0;
//	strncat(arr1, arr1, len1);
//	if (strstr(arr1, arr2) != NULL)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	char pre[20] = "abcdef";
//	char rep[] = "cdefab";
//	int ret = is_turn1(pre, rep);
//	if (ret == 1)
//		printf("ok\n");
//	else
//		printf("no\n");
//	return 0;
//}

//10.实现转置矩阵
//如1 2 3
//  4 5 6
//转成1 4
//    2 5
//    3 6

//int main()
//{
//	int arr[2][3] = { 1,2,3,4,5,6 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 2; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//11.给定一个二维数组，设计一个高效的峰值查找程序

//int main()
//{
//	int arr1[5][6] = { 0 };
//	int arr2[3][4] = { 1,2,3,4,5,6,14,8,9,10,15,12 };
//	int i = 0;
//	for (i = 1; i < 4; i++)
//	{
//		int j = 0;
//		for (j = 1; j < 5; j++)
//		{
//			arr1[i][j] = arr2[i - 1][j - 1];
//		}
//	}
//	for (i = 1; i < 4; i++)
//	{
//		int j = 0;
//		for (j = 1; j < 5; j++)
//		{
//			if (arr1[i][j] > arr1[i - 1][j]
//				&& arr1[i][j] > arr1[i - 1][j - 1]
//				&& arr1[i][j] > arr1[i][j - 1]
//				&& arr1[i][j] > arr1[i + 1][j - 1]
//				&& arr1[i][j] > arr1[i + 1][j]
//				&& arr1[i][j] > arr1[i + 1][j + 1]
//				&& arr1[i][j] > arr1[i][j + 1])
//			{
//				printf("%d %d\n", i, j);
//			}
//		}
//	}
//	return 0;
//}

//12.设计程序判断一个方阵是否属于上三角矩阵
//上三角矩阵是指左上到右下对角线以下元素全为0

//int  main()
//{
//	int arr[3][3] = { 1,2,3,0,1,2,0,0,1 };
//	int i = 0;
//	int judge = 1;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < i; j++)
//		{
//			if (arr[i][j] != 0)
//			{
//				judge = 0;
//				goto end;
//			}
//		}
//	}
//end:
//	if (judge)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}

//13.打印爱心

//int  main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i=0;i<n)
//
//	return 0;
//}


//14.二维数组查找一个峰值
//struct point
//{
//	int x;
//	int y;
//};
//
//struct point localmax_find(int arr[5][5], int raw, int col)
//{
//	struct point p = { 0 };
//	int up = 0;
//	int down = raw - 1;
//	while (up <= down && up >= 0 && up <= raw - 1 && down>=0 && down <= raw - 1)
//	{
//		int mid = (up + down) / 2;
//		int i = 0;
//		int j = 0;
//		int rawmax = 0;
//		for (i = 0; i < col; i++)
//		{
//			if (arr[mid][i] > rawmax)
//			{
//				rawmax = arr[mid][i];
//				p.x = mid;
//				p.y = i;
//				j = i;
//			}
//		}
//		if (arr[mid][j] >= arr[mid - 1][j] && arr[mid][j] >= arr[mid + 1][j])
//			return p;
//		else if (arr[mid][j] < arr[mid - 1][j])
//		{
//			down = mid - 1;
//		}
//		else if (arr[mid][j] < arr[mid + 1][j])
//		{
//			up = mid + 1;
//		}
//	}
//}
//int main()
//{
//	int arr[5][5] = { 1,2,4,3,5,4,3,3,2,1,2,4,2,2,1,3,5,2,10,4,1,2,13,10,5};
//	struct point p=localmax_find(arr, 5, 5);
//	printf("%d %d\n", p.x, p.y);
//	return 0;
//}

//15.输入一串数列，判断是否有序，升序降序都可以
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int arr[20] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int flag1 = 0;
//	int flag2 = 0;
//	for (i = 0; i < n-1; i++)
//	{
//		if (arr[i] > arr[i + 1])
//		{
//			flag1 = 1;
//		}
//		else if (arr[i] < arr[i + 1])
//		{
//			flag2 = 1;
//		}
//	}
//	if (flag1 == 1 && flag2 != 1)
//		printf("降序\n");
//	else if (flag2 == 1 && flag1 != 1)
//		printf("升序\n");
//	else
//		printf("有序\n");
//	return 0;
//}

//16.求两个正整数的最大公约数和最大公倍数的和

//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d%d", &a, &b);
//	int max, min;
//	int n, m;
//	max = a > b ? a : b;
//	min = a <= b ? a : b;
//
//	int i = 0;
//	for (i = min; i<=min; i--)
//	{
//		if (max % i == 0 && min % i == 0)
//		{
//			n = i;
//		}
//		break;
//	}
//	for (i =max; i >= max; i++)
//	{
//		if (i % max == 0 && i % min == 0)
//		{
//			m = i;
//		}
//		break;
//	}
//	printf("%d\n", n + m);
//	return 0;
//}//时间复杂度过高

//改进版
//辗转相除求最大公约数
//两数相乘除最大公约数得最小公倍数
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d%d", &a, &b);
//	int max, min;
//	int n, m;
//	max = a > b ? a : b;
//	min = a <= b ? a : b;
//	int i = max;
//	int  j = min;
//	while (i % j)
//	{
//		int tmp = i % j;
//		i = j;
//		j = tmp;
//	}
//	n = j;
//	m = max * min / j;
//	printf("%d\n", n + m);
//	return 0;
//}

//17.打印空心正方形
//方法一笨方法
//int main()
//{
//	int  input = 0;
//	scanf("%d", &input);
//	int i = 0;
//	for (i = 0; i < input; i++)
//	{
//		printf("* ");
//	}
//	printf("\n");
//	int ret = input;
//	while (input - 2)
//	{
//		printf("* ");
//		int j = 0;
//		for (j = 0; j < (ret-2)*2; j++)
//		{
//			printf(" ");
//		}
//		printf("* ");
//		printf("\n");
//		input--;
//	}
//	for (i = 0; i < ret; i++)
//	{
//		printf("* ");
//	}
//	return 0;
//}

//方法二
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	int i = 0,j=0;
//	for (i = 0; i < input; i++)
//	{
//		for (j = 0; j < input; j++)
//		{
//			if (i == 0 || i == input - 1 || j == 0 || j == input-1)
//			{
//				printf("* ");
//			}
//			else
//			{
//				printf("  ");
//			}
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//18.打印箭型图案
//输入3
//      *
//    **
//  ***
//****
//  ***
//    **
//      *
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int col = 1;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n - i; j++)
//		{
//			printf("  ");
//		}
//		int num = 0;
//		for (num = 0; num < col; num++)
//		{
//			printf("*");
//		}
//		col++;
//		printf("\n");
//	}
//	for (i = 0; i < n + 1; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	col = n;
//	for (i = n; i >0; i--)
//	{
//		int j = 0;
//		for (j = 0; j < n - i+1; j++)
//		{
//			printf("  ");
//		}
//		int num = 0;
//		for (num = 0; num < col; num++)
//		{
//			printf("*");
//		}
//		col--;
//		printf("\n");
//	}
//	return 0;
//}