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
//
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
//int add(int a,int b)
//{
//	int z = 0;
//	z = a + b;
//	return z;//������ֱ��return a+b
//}
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	scanf("%d %d", &n1, &n2);
//	printf("%d\n", add(n1, n2));
//	return 0;
//}
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
/*int main()
{
	char arr1[3] = { '1','2','3'};*///��[]�ﲻ��һ��Ч��,�������ֵ,[]����������볣���������Ǳ���
/*	char arr2[4] = { '1','2','3' };*///����ȫ��ʼ����Ĭ�Ͻ�ʣ��λ�÷���0����ӦASCII���\0�����Ϊ3
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	printf("%d\n", '\0');
//	return 0;
//}
//C99��׼֮ǰ������Ĵ�С�����ó����������ʽ��ָ��
//int arr1[10]={1,2,3}
//int arr2[4+6]={1,2,3}һ����
//C99��׼֮��֧�ֱ䳤���飬��������Ĵ�С�Ǳ�������������ָ����ʽ�������ǲ��ܳ�ʼ����
//int m = 10;
//int arr3[m];��ok��
//���ǲ���int arr3[m]={1,2,3};
//
//���������Ľϴ�ֵ
//#include<stdio.h>
//int max(int a, int b)
//{
//	if (a >= b)
//	{
//		return a;
//	}
//	else
//		return b;
//}
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d\n", max(a, b));
//	return 0;
//}
//����y��ֵ
//#include<stdio.h>
//int f(int x)
//{
//	if ( x < 0)
//		return 1;
//	else if (x > 0)
//		return -1;
//	else
//		return 0;
//	
//}
//int x;
//int main()
//{
//	scanf("%d", &x);
//	printf("%d\n", f(x));
//	return 0;
//}
//int main()
//{
//	int a = 7 / 2;
//	printf("%d\n", a);//�����
//	int b = 7 % 2;
//	printf("%d\n", b);//���������ȡģ����������ֻ��������
//	float c = 7 / 2.0;//�������˶�������ʱִ������������ֻҪ��һ���Ǹ���������ִ�и���������
//	printf("%.2f\n", c);//���3.50��ͨ����.1��.2����λ��
//	return 0;
//}
//int main()
//{
//	int a = 0;//��ʼ��
//	a = 20;//��ֵ
//	a = a + 20;//��Ч��a+=20
//	a = a - 20;//��Ч��a-=20
//	return 0;
//}
/*int main()
{
	int a = 0;*///c������0Ϊ�٣�����Ϊ��
//	if (!a)
//		printf("hehe");
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));//������һ��,���ֽ���4��sizeof�ǵ�Ŀ�����������Ǻ������������Ŷ�����ʡ�ԣ��������֣�
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof arr);
//	printf("%d\n", sizeof arr[0]);//�������������飬��Ҫ��\0�����
//	printf("%d\n", sizeof arr/sizeof arr[0]);//��������Ԫ�ظ���
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
///*	int b = a++;*///����++����ʹ��a��ֵ����++
//	//��b=a����a=a+1
//	int b = ++a;//ǰ��++����++����ʹ��
//	//��a=a+1����b=a
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}//���ã�ǰ��--һ������
//int main()
//{
//	int a = (int)3.14;//��������3.14ǿ��ת��Ϊ���ͣ����3
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
///*	if (a && b)*///a��bͬʱΪ�棬���㣬��ɴ�ӡhehe�����������һ��Ϊ�㣬����ӡ
//		/*printf("hehe");*/
//	if (a || b )//a��b������һ��Ϊ�������
//	    printf("hehe\n");
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int r = a > b ? a : b;
//	printf("%d\n", r);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = (a = c + 1, b = c - 2,c=a+b, c += 3, c++,++c);
//	printf("%d\n", d);
//	return 0;
//}
//�±����ò�����
//int main()
//{
//	int arr[3] = { 1,2,3 };//�����[]���ǲ����������ֻ�ǹ̶��﷨��ʽ
//	arr[2];//�����[]�����±����ò��������������Ϊarr��2
//	int n = 1;
//	printf("%d\n",arr[n]);//����������Ѿ�ȷ�����Ѿ��������ˣ�[]��д������û�����
//	return 0;
//}
//�������ò�����
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int sum = add(2, 4);//����ģ������Ǻ������ò��������������Ϊadd��2��4
//	return 0;
//}
//int main()
//{
//	auto int a = 0;//auto���Զ�����˼��a����Ϊ�Զ�������һ�������auto����ʡ��
//	return 0;
//}
//typedef unsigned int uint;
//typedef struct node
//{
//	int data;
//	struct node* next;
//}node;
//int main()
//{
//	unsigned int a1 = 1;
//	uint a2 = 1;//�����ǵ�Ч��
//	struct node n1;
//	node n2;//���ߵ�Ч
//	return 0;
//}

//static
//1.���ξֲ�����
//2.����ȫ�ֱ���
//3.���κ���

//1.���ξֲ�����
/*void test()
{
	int a = 1;
	a++;
	printf("%d ", a);
}
int main()
{
	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}
	return 0;
}*///���������10��2
//void test()//void����˼�ǲ��÷��أ�����Ҫreturn
//{
//	static int a = 1;//static���ξֲ�������ʱ�򣬾ֲ��������������򣬱��������٣������ϸı��˱����Ĵ洢λ�ã�ջ������������̬����
//	a++;
//	printf("%d ", a);//�Ӷ�Ӱ���˱������������ڣ�ʹ���������ڱ䳤���������������������һ��
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}//�������2~11
//2.����ȫ�ֱ���
//3.���κ�����������ȫ�ֱ�������һ�£�������ȫ�ֱ���һ�������ⲿ�������ԣ�����ͨ��extern��������ʹ�ã�����һ����static���ι���
//�������ⲿ�������Ծͻᱻ�ı�Ϊ�ڲ��������ԣ������ڱ��ļ�ʹ�á�
//int main()
//{
//	register int a = 3;//���飺��3��ŵ��Ĵ����У���Ϊ�Ĵ�����CPU����ϴ����ٶȸ���
//	//���ǼĴ����ռ�С������ֻ�ǽ��飬����һ���洢�ڼĴ����У����ջ��Ǳ�����˵����
//	return 0;
//}

//#define�����ʶ������
//#define num 100//���num����ʹ�ã���ӡ��������Ϊ����[]���ֵ����Ϊ���ǳ���

//#define�����
//#define add(x,y) x+y
//int main()
//{
//	int a= 10;
//	int b = 20;
//	printf("%d\n", add(a, b));
//	return 0;
//}

int main()
{
	int a = 10;//���ڴ�����4���ֽڣ��洢10
	&a;//ȡ��ַ������
	printf("%p\n", &a);//��ӡa�ĵ�ַ��ʮ�����ƣ�ÿһ���������г������´洢����ַ���
	int* p = &a;//�ѵ�ַ��������p����ָ�����
	return 0;
}