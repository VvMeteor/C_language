#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//二维数组的创建和初始化
//int main()
//{
//	int arr1[2][3] = {1,2,3,4,5,6};//创建一个2行3列的二维数组并初始化
//	//arr1会依次读取，第一行读三个，第二行读三个，元素不够则填充0
//	int arr2[2][3] = { {1,2},{3,4} };
//	//对元素进行分组，放入
//	int arr3[][3] = { {1,2},{3,4} };
//	//可以省略行，但是不能省略列
//	//对于二维数组里的元素的下标，其行和列都是从0开始的
//	return 0;
//}

//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	for (i = 0; i <= 2; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= 2;j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//冒泡排序方法
//void sort(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)//一共会循环sz-1次，因为一共sz个元素，把sz-1个排好了，最后一个自然也ok了
//		//每循环一次就会将一个元素排在属于他的位置，而且是从大到小，第一次循环一定会把数组元素中最大的排到最后去
//		//第二次就是第二大的...
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)//这里是将最大值往后搬运的操作
//			//j之所以小于sz-1-i是因为，i每循环一次，就有一个元素被排好了，那么本质上就是对前面sz-i个元素的排序
//			//这里以最大帮运次数作为考虑
//		{
//			if (arr[j] > arr[j + 1])//具体的搬运操作
//			{
//				int con = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = con;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,5,6,10,3,8,5,4,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr, sz);
//	int n = 0;
//	for (n = 0; n < sz; n++)
//	{
//		printf("%d ", arr[n]);
//	}
//	return 0;
//}

//数组首元素地址
//数组名确实能表示首个元素的地址，但是有两个例外：
//1.sizeof（数组名），这里的数组名表示整个数组，计算的是整个数组的大小，单位是字节
//2.&数组名，这里的数组名表示整个数组，取出的地址是整个数组的地址
//int main()
//{
//	int arr[10];// = { 0 };
//	printf("%p\n", arr);//和arr[0]无异，首元素地址
//	printf("%p\n", arr+1);//第二个元素的地址
//
//	printf("%p\n", &arr[0]);//首元素地址
//	printf("%p\n", &arr[0] + 1);//第二个元素的地址
//
//	printf("%p\n", &arr);//数组地址
//	printf("%p\n", &arr+1);//跳过整个数组
//
//	printf("%d\n", sizeof(arr));
//
//	return 0;
//}

//二维数组的数组名理解

//int main()
//{
//	int arr[3][4];
//	printf("%zu\n", sizeof(arr));
//	arr;//这个表示二维数组的首元素地址
//	//二维数组要把它看作数组的一维数组，每一行数组都是一个元素，那么首元素地址也就是第一行数组的地址了
//	//而不是第一行数组的第一个元素的地址
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	int i = sizeof(arr) / sizeof(arr[0]);//计算行数
//	int j = sizeof(arr[0]) / sizeof(arr[0][0]);//计算列数
//	printf("%d %d\n", i, j);
//	return 0;
//}

//三子棋游戏
#include<stdlib.h>
#include<time.h>
#define ROW 3//几子棋控制
#define COL 3

void menu()//打印菜单
{
	printf("*************************\n");
	printf("******1.play 0.exit******\n");
	printf("*************************\n");
}
void initboard(char board[ROW][COL], int row, int col)//初始化下棋面板
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void display(char board[ROW][COL], int row, int col)//展示棋盘
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}
void playermove(char board[ROW][COL], int row, int col)//玩家下棋
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请玩家输入落子坐标:");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (' ' == board[x - 1][y - 1])
			{
				board[x - 1][y - 1] = '*';
				display(board, ROW, COL);
				break;
			}
			else
				printf("棋位被占用，请重新落子\n");
		}
		else
			printf("落子范围超出棋盘，请重新落子\n");
		
	}
}
void techmove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑下棋：\n");
	while (1)
	{
		int x = rand() % row ;
		int y = rand() % col ;
		if (' ' == board[x][y])
		{
			board[x][y] = '#';
			display(board, ROW, COL);
			break;
		}
	}

}
//int judg1(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		int c = 0;
//		for (j = 0; j < col; j++)
//		{
//			if ('*' == board[i][j])
//			{
//				c++;
//			}
//		}
//		if (c == row)
//		{
//			return 0;
//		}
//	}
//	for (j = 0; j < col; j++)
//	{
//		int c = 0;
//		for (i = 0; i < row; i++)
//		{
//			if ('*' == board[i][j])
//			{
//				c++;
//			}
//		}
//		if (c == col)
//		{
//			return 0;
//		}
//	}
//	if (board[0][0] == '*' && board[1][1] == '*' && board[2][2] == '*')
//	{
//		return 0;
//	}
//	else if (board[0][2] == '*' && board[1][1] == '*' && board[2][0] == '*')
//	{
//		return 0;
//	}
//}
//int judg2(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		int c = 0;
//		for (j = 0; j < col; j++)
//		{
//			if ('#' == board[i][j])
//			{
//				c++;
//			}
//		}
//		if (c == row)
//		{
//			return 0;
//		}
//	}
//	for (j = 0; j < col; j++)
//	{
//		int c = 0;
//		for (i = 0; i < row; i++)
//		{
//			if ('#' == board[i][j])
//			{
//				c++;
//			}
//		}
//		if (c == col)
//		{
//			return 0;
//		}
//	}
//	if (board[0][0] == '#' && board[1][1] == '#' && board[2][2] == '#')
//	{
//		return 0;
//	}
//	else if (board[0][2] == '#' && board[1][1] == '#' && board[2][0] == '#')
//	{
//		return 0;
//	}
//}
char judg(char board[ROW][COL], int row, int col)//返回'*'玩家赢，返回’#’电脑赢，返回’Q’平局，返回’c’继续
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
		{
			return board[0][j];
		}
	}
	if (board[0][0] == board[1][1] && board[2][2] ==board[1][1] && board[0][0]!=' ')
	{
		return board[0][0];
	}
	else if (board[0][2] == board[1][1] && board[1][1] == board[2][0] &&board[1][1]!=' ')
	{
		return board[1][1];
	}
	int c = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] != ' ')
			{
				c++;
			}
		}
	}
	if (c == 9)
	{
		return 'Q';
	}
	else
		return 'c';
}
void game()
{
	char board[ROW][COL] = { 0 };
	initboard(board, ROW, COL);
	display(board, ROW, COL);
	while (1)
	{
		playermove(board, ROW, COL);
		if (judg(board, ROW, COL) == '*')
		{
			printf("玩家胜利！\n");
			break;
		}
		if (judg(board, ROW, COL) == 'Q')
		{
			printf("平局！\n");
			break;
		}
		else
			;
		techmove(board, ROW, COL);
		judg(board, ROW, COL);
		if (judg(board, ROW, COL) == '#')
		{
			printf("挑战失败！\n");
			break;
		}
	}
}
int main()
{
	menu();
	srand((unsigned int)time(NULL));//设置随机数的生成起点
	int ch = 0;
	do
	{
		printf("请选择是否进行游戏：");
		scanf("%d", &ch);
		if (1 == ch)
		{
			game();
		}
		else if (0==ch)
		{
			printf("退出游戏\n");
			break;
		}
		else
		{
			printf("选择错误\n");
		}
	} while (ch);
	return 0;
}

