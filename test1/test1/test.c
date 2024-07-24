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
//	printf("%d\n", sizeof(char));/*字符*//*返回的单位是字节*/
//	printf("%d\n", sizeof(short));/*短整型*/
//	printf("%d\n", sizeof(int));/*整型*/
//	printf("%d\n", sizeof(long));/*长整型*/
//	printf("%d\n", sizeof(long long));/*更长整型*/
//	printf("%d\n", sizeof(float));	/*单精度浮点型*/
//	printf("%d\n", sizeof(double));/*双精度浮点型*/

//	return 0;
//}
//int a = 100;
//int main()
//{
//	int a = 10;/*全局变量名称和局部变量冲突，局部优先*/
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
/*int a = 10; *//*甚至可以通过extern int a;来申明引入其他文件的a*/
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
//const int a = 10;const修饰的a本质是变量，只是具有常量属性，所以下一列会报错
//int arr[a] = { 0 };

/*#define max 100*//*#define定义的标识符常量max既可以直接打印出来，也可以被使用他的值*/
//int main()
//{
//	printf("max=%d\n", max);
//	int a = max;
//	printf("a=%d\n", a);
//	return 0;
//}
/*enum Color *//*枚举常量*//*不允许赋值*/
//{
//	RED,
//	GREEN,
//	BLUE
//
//};
#include<string.h>/*strlen()函数是求\0前的字符串长度*/
/*int main()
{

	char arr1[] = "abcdef";*//*arr1括号中不输入则会根据后面存储内容自动调整，若输入则需要大于存储字符数*//*监视器里会发现存储了abcdef和\0*/
/*	char arr2[] = { 'a','b','c','d','e','f' };*//*监视器里会发现只存储了abcdef,但是printf出来不止abcdef*/
/*	char arr3[] = { 'a','b','c','d','e','f','\0','g'};*//*加上\0让编译器知道在哪结束*/
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	return 0;
//
//}
//转义字符
//三字母词
//??)-->]
//??(-->[
//int main()
//{
	//printf("%s\n", "(are you ok ??)");
	//可能打印为(are you ok ]
	//printf("%s\n", "(are you ok \?\?)");
	//这样就一定打印出（are you ok ??）
	//printf("%c\n", '\'');
	//printf("120");//只有字符串""才能直接打印出来
	//printf("abc\0ef");
	//只打印abc
	//printf("abc\\0ef");
	//用第一个\去转义第二个\，使得\0分开，成为普通的字符，即可打印出\0
	/*printf("%c\n", '\130');*/
	//\ddd中的ddd是指1~3位八进制的数，编译器会将它转为十进制的数，再根据ASCII编码表找到对应的符号，输出
	/*printf("%c\n", '\x33');*/
	//\xdd中的dd是指1~2位十六进制的数，编译器会将他们转为十进制的数，再根据ASCII编码表找到对应的符号，输出，超过表范围没有意义，不输出
	/*printf("%d\n", strlen("c:\test\628\test.c"));*/
	//\t是一个字符，\62是一个字符，不带8的原因是八进制不含8，总计14个字符
//	return 0;
//}

//int main()
//{
//	printf("try your best,yes or no ?\n");
//	int input = 0;//初始化input的值
//	scanf("%d", &input);//输入给input赋值
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
//		printf("继续:%d\n",line);
//		line++;//等效于line=line+1
//	}
//	if (line >= 10)
//	{
//		printf("完成");
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
//	return z;//或者是直接return a+b
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