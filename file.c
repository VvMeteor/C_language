#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<errno.h>
#include<stdio.h>
//��д�ַ�
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//д�ļ�
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
//	//���ļ�
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c ", ch);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//��д�ַ���
//int main()
//{
//	FILE* pf = fopen("test.txt", "a");//д�ļ������Ὣ�ļ�����ٽ��У��ĳ�a׷�Ӽ��ɱ���
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//дһ��
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
//		perror("fopen");//���õ�����һ��
//		return 1;
//	}
//	//��һ��
//	char arr[20];
//	fgets(arr,5, pf);//���ļ��Դ�\0,������Ч�ַ� ֻ�ܶ�4��
//	printf("%s", arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//��ʽ��д
//�Խṹ��Ϊ��
//д
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
//��
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
//	fscanf(pf, "%s %d %f", peo.name, &(peo.age), &(peo.high));//��������������Ǵ��ļ�����ȡ���ݷ���name��age��high�У���Ȼ��Ҫ���ǵ�ַ
//	fprintf(stdout,"%s %d %f", peo.name, peo.age, peo.high);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//��
//FILE* �ļ���

//�κ�һ��c���Գ���ֻҪ���������ͻ�Ĭ�ϴ�������
//FILE* stdin - ��׼�����������̣�
//FILE* stdout - ��׼���������Ļ��
//FILE* stderror - ��׼����������Ļ��

//�����ƵĶ�д
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
//	//�����Ʒ�ʽд��
//	fwrite(&peo, sizeof(struct s), 1, pf);//��һ������ΪҪд�Ķ����ĵ�ַ�����Ĵ�С��byte����Ҫд�ĸ�����д���ĸ��ļ���
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
//	//�����Ʒ�ʽ��
//	fread(&peo, sizeof(struct s), 1, pf);//��һ������Ϊ�����Ķ�����ŵĵ�ַ�����Ĵ�С��byte����Ҫ���ĸ��������ĸ��ļ�����
//	printf("%s %d %f\n", peo.name, peo.age, peo.high);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//scanf - ����Ա�׼����ĸ�ʽ���������
//printf - ����Ա�׼����ĸ�ʽ��������

//fscanf - ����������������ĸ�ʽ���������
//fprintf - ���������������ĸ�ʽ��������

//sprintf - ��һ����ʽ��������ת�����ַ���
//sscanf - ��һ���ַ���ת��Ϊ��ʽ������
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