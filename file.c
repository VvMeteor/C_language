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
struct s
{
	char name[20];
	int age;
	float high;
};
int main()
{
	struct s peo = {"zhangsan",18,175.0f};
	struct s tmp = { 0 };
	char buf[100] = { 0 };
	sprintf(buf, "%s %d %f", peo.name, peo.age, peo.high);
	//""zhangsan 18 175.000000"
	printf("%s\n", buf);
	sscanf(buf, "%s %d %f", peo.name, &(peo.age), &(peo.high));
	printf("%s %d %f", peo.name, peo.age, peo.high);
	return 0;
}