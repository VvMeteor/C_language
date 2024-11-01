#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"

//静态版本
//动态版本
//文件版本
int main()
{
	int input = 0;
	contact con;//创建通讯录
	//初始化通讯录
	initcon(&con);
	do
	{
		menu();
		printf("请输入：");
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
			printf("退出通讯录\n");
			break;
		default:
			printf("输入错误！\n");
		}
	} while (input);
	return 0;
}