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
		printf("��ѡ��");
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
			printf("�˳���Ϸ\n");
			break;
		}
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (i);
	return 0;
}
//������չ
//1.��ǹ���
//2.�Զ�չ��һ��Ƭ���ܣ�1.�����겻���ף�2.��������Χû���ף�3.������û�б��Ų����