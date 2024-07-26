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
//
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
//int add(int a,int b)
//{
//	int z = 0;
//	z = a + b;
//	return z;//或者是直接return a+b
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
	char arr1[3] = { '1','2','3'};*///和[]里不填一个效果,产生随机值,[]里面必须输入常量。不能是变量
/*	char arr2[4] = { '1','2','3' };*///不完全初始化，默认将剩余位置放入0，对应ASCII表的\0，结果为3
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	printf("%d\n", '\0');
//	return 0;
//}
//C99标准之前，数组的大小都是用常量或常量表达式来指定
//int arr1[10]={1,2,3}
//int arr2[4+6]={1,2,3}一样的
//C99标准之后，支持变长数组，允许数组的大小是变量，但是这种指定方式的数组是不能初始化的
//int m = 10;
//int arr3[m];是ok的
//但是不能int arr3[m]={1,2,3};
//
//求两个数的较大值
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
//计算y的值
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
//	printf("%d\n", a);//输出商
//	int b = 7 % 2;
//	printf("%d\n", b);//输出余数，取模操作符两端只能是整数
//	float c = 7 / 2.0;//除号两端都是整数时执行整数除法，只要有一端是浮点数，则执行浮点数除法
//	printf("%.2f\n", c);//输出3.50，通过加.1，.2控制位数
//	return 0;
//}
//int main()
//{
//	int a = 0;//初始化
//	a = 20;//赋值
//	a = a + 20;//等效于a+=20
//	a = a - 20;//等效于a-=20
//	return 0;
//}
/*int main()
{
	int a = 0;*///c语言中0为假，非零为真
//	if (!a)
//		printf("hehe");
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));//输出结果一样,是字节数4，sizeof是单目操作符，不是函数，甚至括号都可以省略（上面那种）
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof arr);
//	printf("%d\n", sizeof arr[0]);//这里是整型数组，不要把\0混进来
//	printf("%d\n", sizeof arr/sizeof arr[0]);//计算数组元素个数
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
///*	int b = a++;*///后置++，先使用a的值，后++
//	//先b=a，后a=a+1
//	int b = ++a;//前置++，先++，后使用
//	//先a=a+1，后b=a
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}//后置，前置--一个道理
//int main()
//{
//	int a = (int)3.14;//将浮点数3.14强制转化为整型，输出3
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
///*	if (a && b)*///a和b同时为真，非零，则可打印hehe，如果其中有一个为零，不打印
//		/*printf("hehe");*/
//	if (a || b )//a和b其中有一个为真就行了
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
//下标引用操作符
//int main()
//{
//	int arr[3] = { 1,2,3 };//这里的[]不是操作符，这个只是固定语法形式
//	arr[2];//这里的[]就是下标引用操作符，其操作数为arr和2
//	int n = 1;
//	printf("%d\n",arr[n]);//这里的数组已经确定，已经创建好了，[]里写变量是没问题的
//	return 0;
//}
//函数调用操作符
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int sum = add(2, 4);//这里的（）就是函数调用操作符，其操作数为add，2和4
//	return 0;
//}
//int main()
//{
//	auto int a = 0;//auto是自动的意思，a这里为自动变量，一般情况下auto可以省略
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
//	uint a2 = 1;//两者是等效的
//	struct node n1;
//	node n2;//两者等效
//	return 0;
//}

//static
//1.修饰局部变量
//2.修饰全局变量
//3.修饰函数

//1.修饰局部变量
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
}*///结果是生成10个2
//void test()//void的意思是不用返回，不需要return
//{
//	static int a = 1;//static修饰局部变量的时候，局部变量出了作用域，变量不销毁，本质上改变了变量的存储位置（栈区，堆区，静态区）
//	a++;
//	printf("%d ", a);//从而影响了变量的生命周期，使其生命周期变长，和整个程序的生命周期一样
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
//}//结果生成2~11
//2.修饰全局变量
//3.修饰函数：与修饰全局变量基本一致，函数与全局变量一样具有外部链接属性，可以通过extern来声明，使用，但是一旦经static修饰过后
//函数的外部链接属性就会被改变为内部链接属性，仅限于本文件使用。
//int main()
//{
//	register int a = 3;//建议：将3存放到寄存器中，因为寄存器和CPU的配合处理速度更快
//	//但是寄存器空间小，所以只是建议，不会一定存储在寄存器中，最终还是编译器说了算
//	return 0;
//}

//#define定义标识符常量
//#define num 100//这个num可以使用，打印，可以作为数组[]里的值，因为他是常量

//#define定义宏
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
	int a = 10;//向内存申请4个字节，存储10
	&a;//取地址操作符
	printf("%p\n", &a);//打印a的地址，十六进制，每一次重新运行程序，重新存储，地址会变
	int* p = &a;//把地址存起来，p就是指针变量
	return 0;
}