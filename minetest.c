#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	init(mine, ROWS, COLS,'0');
	init(show, ROWS, COLS,'*');
	setmine(mine, ROW, COL);
	display(mine, ROW, COL);
	display(show, ROW, COL);
	findmine(mine,show, ROW, COL);
}
int main()
{
	int i = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &i);
		switch (1)
		{
		case 1:
		{
			game();
			break;
		}
		case 0:
		{
			printf("退出游戏\n");
			break;
		}
		default:
			printf("选择错误\n");
			break;
		}
	} while (i);
	return 0;
}
//功能拓展
//1.标记功能
//2.自动展开一大片功能（1.该坐标不是雷；2.该坐标周围没有雷；3.该坐标没有被排查过）