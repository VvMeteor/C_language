#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"

//��̬�汾
//��̬�汾
//�ļ��汾
int main()
{
	int input = 0;
	contact con;//����ͨѶ¼
	//��ʼ��ͨѶ¼
	initcon(&con);
	do
	{
		menu();
		printf("�����룺");
		scanf("%d", &input);
		switch(input)
		{
		case add:
			addcon(&con);
			break;
		case del:
			delcon(&con);
			break;
		case search:
			searcon(&con);
			break;
		case modify:
			modifycon(&con);
			break;
		case show:
			showcon(&con);
			break;
		case sort:
			qsortcon(&con);
			break;
		case EXIT:
			savecon(&con);
			free(con.data);
			con.data = NULL;
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("�������\n");
		}
	} while (input);
	return 0;
}