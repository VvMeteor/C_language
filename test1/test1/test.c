#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int main()
//{
//	printf("hehe\n");
//	return 0;
//}
#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char));/*�ַ�*//*���صĵ�λ���ֽ�*/
//	printf("%d\n", sizeof(short));/*������*/
//	printf("%d\n", sizeof(int));/*����*/
//	printf("%d\n", sizeof(long));/*������*/
//	printf("%d\n", sizeof(long long));/*��������*/
//	printf("%d\n", sizeof(float));	/*�����ȸ�����*/
//	printf("%d\n", sizeof(double));/*˫���ȸ�����*/

//	return 0;
//}
//int a = 100;
//int main()
//{
//	int a = 10;/*ȫ�ֱ������ƺ;ֲ�������ͻ���ֲ�����*/
//	printf("a=%d\n", a);
//	return 0;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d",&num1,&num2);
//	int sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}
/*int a = 10; *//*��������ͨ��extern int a;���������������ļ���a*/
//void test()
//{
//	printf("a-->%d\n", a);
//}
//int main()
//{
//	test();
//	{
//		printf("a=%d\n", a);
//	}
//	printf("a=%d\n", a);
//	return 0;
//}
//const int a = 10;const���ε�a�����Ǳ�����ֻ�Ǿ��г������ԣ�������һ�лᱨ��
//int arr[a] = { 0 };

/*#define max 100*//*#define����ı�ʶ������max�ȿ���ֱ�Ӵ�ӡ������Ҳ���Ա�ʹ������ֵ*/
//int main()
//{
//	printf("max=%d\n", max);
//	int a = max;
//	printf("a=%d\n", a);
//	return 0;
//}
/*enum Color *//*ö�ٳ���*//*������ֵ*/
//{
//	RED,
//	GREEN,
//	BLUE
//
//};
#include<string.h>/*strlen()��������\0ǰ���ַ�������*/
/*int main()
{

	char arr1[] = "abcdef";*//*arr1�����в����������ݺ���洢�����Զ�����������������Ҫ���ڴ洢�ַ���*//*��������ᷢ�ִ洢��abcdef��\0*/
/*	char arr2[] = { 'a','b','c','d','e','f' };*//*��������ᷢ��ֻ�洢��abcdef,����printf������ֹabcdef*/
/*	char arr3[] = { 'a','b','c','d','e','f','\0','g'};*//*����\0�ñ�����֪�����Ľ���*/
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	return 0;
//
//}
//ת���ַ�
//����ĸ��
//??)-->]
//??(-->[
//int main()
//{
	//printf("%s\n", "(are you ok ??)");
	//���ܴ�ӡΪ(are you ok ]
	//printf("%s\n", "(are you ok \?\?)");
	//������һ����ӡ����are you ok ??��
	//printf("%c\n", '\'');
	//printf("120");//ֻ���ַ���""����ֱ�Ӵ�ӡ����
	//printf("abc\0ef");
	//ֻ��ӡabc
	//printf("abc\\0ef");
	//�õ�һ��\ȥת��ڶ���\��ʹ��\0�ֿ�����Ϊ��ͨ���ַ������ɴ�ӡ��\0
	/*printf("%c\n", '\130');*/
	//\ddd�е�ddd��ָ1~3λ�˽��Ƶ������������Ὣ��תΪʮ���Ƶ������ٸ���ASCII������ҵ���Ӧ�ķ��ţ����
	/*printf("%c\n", '\x33');*/
	//\xdd�е�dd��ָ1~2λʮ�����Ƶ������������Ὣ����תΪʮ���Ƶ������ٸ���ASCII������ҵ���Ӧ�ķ��ţ������������Χû�����壬�����
	/*printf("%d\n", strlen("c:\test\628\test.c"));*/
	//\t��һ���ַ���\62��һ���ַ�������8��ԭ���ǰ˽��Ʋ���8���ܼ�14���ַ�
//	return 0;
//}

//int main()
//{
//	printf("try your best,yes or no ?\n");
//	int input = 0;//��ʼ��input��ֵ
//	scanf("%d", &input);//�����input��ֵ
//	if (input == 1)
//	{
//		printf("better\n");
//	}
//	else
//	{
//		printf("worse\n");
//	}
//	
//	return 0;
//}
//int main()
//{
//
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	while(line<10)
//	{
//		printf("����:%d\n",line);
//		line++;//��Ч��line=line+1
//	}
//	if (line >= 10)
//	{
//		printf("���");
//	}
//	else
//	{
//		printf("error");
//	}
//	return 0;
//}
int add(int a,int b)
{
//	int z = 0;
//	z = a + b;
//	return z;//������ֱ��return a+b
	return (a + b);
}
int main()
{
	int n1 = 0;
	int n2 = 0;
	scanf("%d %d", &n1, &n2);
	printf("%d\n", add(n1, n2));
	return 0;
}
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	printf("%d\n", arr[2]);
//	int i = 0;
//	while (i < 5)
//	{
//		printf("%d\n", arr[i]);
//		i = i + 1;
//	}
//	return 0;
//}