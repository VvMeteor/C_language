#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��ά����Ĵ����ͳ�ʼ��
//int main()
//{
//	int arr1[2][3] = {1,2,3,4,5,6};//����һ��2��3�еĶ�ά���鲢��ʼ��
//	//arr1�����ζ�ȡ����һ�ж��������ڶ��ж�������Ԫ�ز��������0
//	int arr2[2][3] = { {1,2},{3,4} };
//	//��Ԫ�ؽ��з��飬����
//	int arr3[][3] = { {1,2},{3,4} };
//	//����ʡ���У����ǲ���ʡ����
//	//���ڶ�ά�������Ԫ�ص��±꣬���к��ж��Ǵ�0��ʼ��
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

//ð�����򷽷�
//void sort(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)//һ����ѭ��sz-1�Σ���Ϊһ��sz��Ԫ�أ���sz-1���ź��ˣ����һ����ȻҲok��
//		//ÿѭ��һ�ξͻὫһ��Ԫ��������������λ�ã������ǴӴ�С����һ��ѭ��һ���������Ԫ���������ŵ����ȥ
//		//�ڶ��ξ��ǵڶ����...
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)//�����ǽ����ֵ������˵Ĳ���
//			//j֮����С��sz-1-i����Ϊ��iÿѭ��һ�Σ�����һ��Ԫ�ر��ź��ˣ���ô�����Ͼ��Ƕ�ǰ��sz-i��Ԫ�ص�����
//			//�����������˴�����Ϊ����
//		{
//			if (arr[j] > arr[j + 1])//����İ��˲���
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

//������Ԫ�ص�ַ
//������ȷʵ�ܱ�ʾ�׸�Ԫ�صĵ�ַ���������������⣺
//1.sizeof�������������������������ʾ�������飬���������������Ĵ�С����λ���ֽ�
//2.&���������������������ʾ�������飬ȡ���ĵ�ַ����������ĵ�ַ
//int main()
//{
//	int arr[10];// = { 0 };
//	printf("%p\n", arr);//��arr[0]���죬��Ԫ�ص�ַ
//	printf("%p\n", arr+1);//�ڶ���Ԫ�صĵ�ַ
//
//	printf("%p\n", &arr[0]);//��Ԫ�ص�ַ
//	printf("%p\n", &arr[0] + 1);//�ڶ���Ԫ�صĵ�ַ
//
//	printf("%p\n", &arr);//�����ַ
//	printf("%p\n", &arr+1);//������������
//
//	printf("%d\n", sizeof(arr));
//
//	return 0;
//}

//��ά��������������

//int main()
//{
//	int arr[3][4];
//	printf("%zu\n", sizeof(arr));
//	arr;//�����ʾ��ά�������Ԫ�ص�ַ
//	//��ά����Ҫ�������������һά���飬ÿһ�����鶼��һ��Ԫ�أ���ô��Ԫ�ص�ַҲ���ǵ�һ������ĵ�ַ��
//	//�����ǵ�һ������ĵ�һ��Ԫ�صĵ�ַ
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	int i = sizeof(arr) / sizeof(arr[0]);//��������
//	int j = sizeof(arr[0]) / sizeof(arr[0][0]);//��������
//	printf("%d %d\n", i, j);
//	return 0;
//}

//��������Ϸ
#include<stdlib.h>
#include<time.h>
#define ROW 3//���������
#define COL 3

void menu()//��ӡ�˵�
{
	printf("*************************\n");
	printf("******1.play 0.exit******\n");
	printf("*************************\n");
}
void initboard(char board[ROW][COL], int row, int col)//��ʼ���������
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
void display(char board[ROW][COL], int row, int col)//չʾ����
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
void playermove(char board[ROW][COL], int row, int col)//�������
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("�����������������:");
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
				printf("��λ��ռ�ã�����������\n");
		}
		else
			printf("���ӷ�Χ�������̣�����������\n");
		
	}
}
void techmove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�������壺\n");
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
char judg(char board[ROW][COL], int row, int col)//����'*'���Ӯ�����ء�#������Ӯ�����ء�Q��ƽ�֣����ء�c������
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
			printf("���ʤ����\n");
			break;
		}
		if (judg(board, ROW, COL) == 'Q')
		{
			printf("ƽ�֣�\n");
			break;
		}
		else
			;
		techmove(board, ROW, COL);
		judg(board, ROW, COL);
		if (judg(board, ROW, COL) == '#')
		{
			printf("��սʧ�ܣ�\n");
			break;
		}
	}
}
int main()
{
	menu();
	srand((unsigned int)time(NULL));//������������������
	int ch = 0;
	do
	{
		printf("��ѡ���Ƿ������Ϸ��");
		scanf("%d", &ch);
		if (1 == ch)
		{
			game();
		}
		else if (0==ch)
		{
			printf("�˳���Ϸ\n");
			break;
		}
		else
		{
			printf("ѡ�����\n");
		}
	} while (ch);
	return 0;
}

