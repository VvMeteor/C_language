#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<errno.h>
#include<stdio.h>
//读写字符
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//写文件
//	char i = 0;
//	for (i = 'a'; i <= 'z'; i++)
//	{
//		fputc(i, pf);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//读文件
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c ", ch);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//读写字符串
//int main()
//{
//	FILE* pf = fopen("test.txt", "a");//写文件操作会将文件清空再进行，改成a追加即可避免
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//写一行
//	fputs("hello\n", pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		perror("fopen");//作用等于上一行
//		return 1;
//	}
//	//读一行
//	char arr[20];
//	fgets(arr,5, pf);//读文件自带\0,所以有效字符 只能读4个
//	printf("%s", arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//格式读写
//以结构体为例
//写
//struct s
//{
//	char name[20];
//	int age;
//	float high;
//};
//int main()
//{
//	struct s peo = { "zhangsan",18,175.3f };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//      return 1;
//	}
//	fprintf(pf, "%s %d %f", peo.name, peo.age, peo.high);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//读
//struct s
//{
//	char name[20];
//	int age;
//	float high;
//};
//int main()
//{
//	struct s peo = {0};
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//      return 1;
//	}
//	fscanf(pf, "%s %d %f", peo.name, &(peo.age), &(peo.high));//这个函数的作用是从文件中摄取数据放入name，age，high中，自然需要的是地址
//	fprintf(stdout,"%s %d %f", peo.name, peo.age, peo.high);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//流
//FILE* 文件流

//任何一个c语言程序，只要运行起来就会默认打开三个流
//FILE* stdin - 标准输入流（键盘）
//FILE* stdout - 标准输出流（屏幕）
//FILE* stderror - 标准错误流（屏幕）

//二进制的读写
//struct s
//{
//	char name[20];
//	int age;
//	float high;
//};
//int main()
//{
//	struct s peo = { "zhangsan",18,175.3f };
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//      return 1;
//	}
//	//二进制方式写入
//	fwrite(&peo, sizeof(struct s), 1, pf);//第一个参数为要写的东西的地址，他的大小（byte），要写的个数，写进哪个文件流
//	return 0;
//}

//struct s
//{
//	char name[20];
//	int age;
//	float high;
//};
//int main()
//{
//	struct s peo = { 0 };
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//二进制方式读
//	fread(&peo, sizeof(struct s), 1, pf);//第一个参数为读出的东西存放的地址，他的大小（byte），要读的个数，从哪个文件流读
//	printf("%s %d %f\n", peo.name, peo.age, peo.high);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//scanf - 是针对标准输入的格式化输入语句
//printf - 是针对标准输出的格式化输出语句

//fscanf - 是针对所有输入流的格式化输入语句
//fprintf - 是针对所有输出流的格式化输出语句

//sprintf - 把一个格式化的数据转化成字符串
//sscanf - 把一个字符串转化为格式化数据
//struct s
//{
//	char name[20];
//	int age;
//	float high;
//};
//int main()
//{
//	struct s peo = {"zhangsan",18,175.0f};
//	struct s tmp = { 0 };
//	char buf[100] = { 0 };
//	sprintf(buf, "%s %d %f", peo.name, peo.age, peo.high);
//	//""zhangsan 18 175.000000"
//	printf("%s\n", buf);
//	sscanf(buf, "%s %d %f", peo.name, &(peo.age), &(peo.high));
//	printf("%s %d %f", peo.name, peo.age, peo.high);
//	return 0;
//}

//文件的随机读写
//fseek - 根据文件指针的位置和偏移量来定位文件指针
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//读文件
//	//定位文件指针
//	fseek(pf, 2, SEEK_SET);//SEEK_SET是文件首位
//	int ch = fgetc(pf);
//	printf("%c %d\n", ch,ftell(pf));//ftell返回当前文件指针偏移量
//
//	fseek(pf, 2, SEEK_CUR);//SEEK_CUR是文件指针当前位置
//	ch = fgetc(pf);
//	printf("%c %d\n", ch, ftell(pf));
//
//	fseek(pf, -2, SEEK_END);//SEEK_END是文件末位
//	ch = fgetc(pf);
//	printf("%c %d\n", ch, ftell(pf));
//
//	rewind(pf);//将文件指针恢复至起始位置
//	ch = fgetc(pf);
//	printf("%c %d\n", ch, ftell(pf));
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//文本文件和二进制文件
//数据文件根据组织形式分为文本文件和二进制文件
//数据在内存中以二进制形式存储，如果不加转化输出到外存，就是二进制文件
//经ASCII值转化以字符形式存储的就是文件形式


//feof返回1则说明是因为读到文件末尾而结束读操作，返回0表示其他原因而没有读到文件
//ferror判断读的时候是不是遇到错误了