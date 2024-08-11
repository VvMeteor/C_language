#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

void menu()
{
	printf("**********************\n");
	printf("******* 1.play *******\n");
	printf("******* 0.exit *******\n");
	printf("**********************\n");
}

void init(char board[ROWS][COLS], int rows, int cols,char ch)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = ch;
		}
	}
}

void setmine(char board[ROWS][COLS], int row, int col)
{
	int c = Mine;
	while (c)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			c--;
		}
	}
}

void display(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("------扫雷游戏------\n");
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("------扫雷游戏------\n");
}

int count(char board[ROWS][COLS], int x, int y)
{
	return board[x - 1][y] + board[x - 1][y - 1] + board[x][y - 1] + board[x + 1][y - 1] + board[x + 1][y]
		+ board[x + 1][y + 1] + board[x][y + 1] + board[x - 1][y + 1] - 8 * '0';
	//int i = 0;
	//int j = 0;
	//int c = 0;
	//for (i = -1; i <= 1; i++)
	//{
	//	for (j = -1; j <= 1; j++)
	//	{
	//		if (board[i + x][y + j] == '1')
	//		{
	//			c++;
	//		}
	//	}
	//}
	//return c;
}

void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-Mine)
	{
		printf("请输入排雷坐标：");
		scanf("%d%d", &x,&y);
		if (x >= 1 && x <= 9 && y >= 1 && y <= 9 && show[x][y]=='*')
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，游戏失败！\n");
				display(mine, ROW, COL);
				break;
			}
			else
			{
				win++;
				int c = count(mine, x, y);
				show[x][y] = c + '0';//数字转化为符号
				display(show, ROW, COL);
			}
		}
		else
		{
			printf("坐标输入有误，请重新输入!\n");
		}
	}
	if (win == row * col - Mine)
	{
		printf("游戏成功！\n");
		display(mine, ROW, COL);
	}
}