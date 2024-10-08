#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//1.算术操作符
//+ - * / %

//2.移位操作符
//移动的是二进制位，其操作数只能是整数
//整数的二进制表示的3种方法：原码，反码，补码

//正整数的原码，反码，补码相同
//负整数的原码，反码，补码需要计算

//7
//00000000000000000000000000000111 - 原码，反码，补码
//最高位是符号位，0表示是正整数，1则为负整数

//-7
//10000000000000000000000000000111 - 原码（按内容直接写出）
//11111111111111111111111111111000 - 反码（最高位符号不变，其它位按位取反就是反码）
//11111111111111111111111111111001 - 补码（反码+1就是补码）

//整数在内存中存储的是补码，但是打印是按照原码

//左移操作符：左边丢弃，右边补0；
//00000000000000000000000000000111 - 7的补码
//0000000000000000000000000000111 - 左移，丢弃一个0
//00000000000000000000000000001110 -右边再补一个0，正整数补码和原码一致，得到14

//11111111111111111111111111111001 - -7的补码
//1111111111111111111111111111001 - 左移，丢弃一个1
//11111111111111111111111111110010 - 右边再补一个0，该结果为负整数补码
//11111111111111111111111111110001 - 补码-1得到反码
//10000000000000000000000000001110 - 最高位不变，由反码得到原码，得到-14

//右移操作符：
//算术移位：右边丢弃，左边补原符号位
//逻辑移位：右边丢弃，左边补0
//取决于编译器
//
//11111111111111111111111111111001 - -7的补码
// 1111111111111111111111111111100 - 右移，丢弃一个1
//11111111111111111111111111111100 - 左边按算术移位补原符号
//11111111111111111111111111111011 - 减1得到反码
//10000000000000000000000000000100 - 由反码得到原码，-4
//
// 
//int main()
//{
//	int a = -7;
//	int b = a << 1;
//	printf("a=%d\n", a);//移位操作不会改变a本身的值
//	printf("b=%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = -7;
//	int b = a >> 1;
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//	return 0;
//}

//3.位操作符

// & 按（2进制）位与
// 00000000000000000000000000000011 - 3的补码
// 11111111111111111111111111111011 - -5的补码
// 相同取同，异则取0
// 00000000000000000000000000000011 - 按位与结果码

// | 按（2进制）位或
// 00000000000000000000000000000011 - 3的补码
// 11111111111111111111111111111011 - -5的补码
// 有1取1，双0为0
// 11111111111111111111111111111011 - 按位或结果补码
// 10000000000000000000000000000101 - 原码，-5

// ^ 按（2进制）位异或
// 00000000000000000000000000000011 - 3的补码
// 11111111111111111111111111111011 - -5的补码
// 相同为0，相异为1
// 11111111111111111111111111111000 - 按位异或补码
// 10000000000000000000000000001000 - 原码，-8

//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a & b;
//	int d = a | b;
//	int e = a ^ b;
//	printf("c=%d\n", c);
//	printf("d=%d\n", d);
//	printf("e=%d\n", e);
//	return 0;
//}

//不创建临时变量，交换两个整数内容
//按位异或的规律
//3^3 -->a^a=0
//011
//011
//000 - 0

//0^5 -->0^a=a
//000
//101
//101 - 5

//3^5^3 -->满足交换律
//011
//101
//110
//011
//101 - 5

//局限性：小数不能使用，运算没有创建临时变量快

//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a=%d ", a);
//	printf("b=%d\n", b);
//	a = a ^ b;//3^5
//	b = a ^ b;//3^5^5=3
//	a = a ^ b;//3^5^3=5
//	printf("a=%d ", a);
//	printf("b=%d\n", b);
//	return 0;
//}

//求一个整数存储在内存中的二进制1的个数

//a=3
//00000000000000000000000000000011

//a&1
//00000000000000000000000000000011
//00000000000000000000000000000001
//00000000000000000000000000000001 - 结果

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int c = 0;
//	for (i = 0; i < 32; i++)
//	{
//		c += a & 1;
//		a = a >> 1;
//	}
//	printf("%d\n", c);
//	return 0;
//}

//4.赋值操作符
//连续赋值

//int main()
//{
//	int a = 10;
//	int b = 0;
//	int c = 20;
//	a = b= c - 2;
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}

//5.单目操作符
// ~ 按（二进制）位取反
//00000000000000000000000000000000 - 0补码
//11111111111111111111111111111111 - 取反补码
//10000000000000000000000000000001 - 求得原码，-1

//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);
//	return 0;
//}

//实现对二进制的修改
//int main()
//{
//	int a = 13;
	//00000000000000000000000000001101 - 把倒数第二个0改为1
	//00000000000000000000000000000010 - 按位或上1<<1
	//a |= 1 << 1;
	//printf("%d\n", a);

	//00000000000000000000000000001101 - 把倒数第二个1改为0
	//11111111111111111111111111111011 - 按位与上此补码
	//得来的方式：
	//1<<2
	//00000000000000000000000000000100
	//按位取反~
	//11111111111111111111111111111011
	/*a &= ~(1 << 2);
	printf("%d\n", a);
	return 0;
}*/

//int main()
//{
//	int a = 10;
//	printf("%d\n", a--);
//	printf("%d\n", a);
//	test(a--);//传参也是先使用，后--
//	return 0;
//}

//int main()
//{
//	printf("%d\n", !9);
//	return 0;
//}

//sizeof知识点：sizeof和strlen的本质区别在于一个是操作符，一个是函数，所以sizeof后边括号可省略，strlen不行
//void test1(int arr[])//这里的类型实质上是指针，所以下面sizeof计算的实质上是指针大小，指针大小只和系统位数有关
//{
//	printf("(2)%zu\n", sizeof(arr));//4
//}
//void test2(char ch[])
//{
//	printf("(4)%zu\n", sizeof(ch));//4
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("(1)%zu\n", sizeof(arr));//40
//	printf("(3)%zu\n", sizeof(ch));//10
//	test1(arr);
//	test2(ch);
//	return 0;
//}

//6.关系操作符

//7.逻辑操作符
//&& 左边为假，右边不再计算
//|| 左边为真，右边不再计算
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;//从左到右看，a=0先使用，并在此终止，导致后续都为假，++b和d++都未运算，所以只有a+1
//	i = a++ || ++b || d++;//a=1为真，后续不会运算
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//	return 0;
//}

//8.条件操作符（a>b?a;b;）

//9.逗号表达式(a=a-b,b=c-5,d=c++;)

//10.下标引用，函数调用和结构成员
//下标引用
//int main()
//{
//	int arr[10] = { 0 };
//	arr[7] = 8;
//	7[arr] = 9;//7和arr都只是[]的操作数，可以交换
//	printf("%d\n", arr[7]);
//	*(arr + 7) = 10;//arr是首元素地址，+7跳过7个元素，为第8个元素地址，*解引用，和arr[7]一样
//	//arr[7]->*(arr+7)->*(7+arr)->7[arr]定义的时候不行，访问的时候可以
//	printf("%d\n", arr[7]);
//	return 0;
//}
//函数调用：()

//结构成员：.和->

//隐式类型转换
//整型提升
//int main()
//{
//	char a = 4;
//	//00000100
//	char b = 125;
//	//01111101
//	char c = a + b;//先将字符类型提升为普通整型，再进行计算
//	//00000000000000000000000000000100 - 4
//	//00000000000000000000000001111101 - 125
//	//00000000000000000000000010000001 - 计算结果
//	//10000001 - 存储到变量c的结果
//	printf("%d\n", c);//先将字符类型提升为普通整型，再进行打印
//	//10000001
//	//11111111111111111111111110000001 - 变量的补码
//	//10000000000000000000000001111111 - 变量的原码，-127
//	return 0;
//}
//负数的整型提升
//char a = -1;
//变量a的补码只有8bit
//存储的补码为11111111
//整型提升时，按符号位补充高位
//得11111111111111111111111111111111

//正数的整型提升
//char b = 1；
//00000001 - 补码
//00000000000000000000000000000001

//无符号整型提升直接补0

//例子
//int main()
//{
//	char a = 1;
//	printf("%zu\n", sizeof a);
//	printf("%zu\n", sizeof +a);//进行了运算，会整型提升
//	printf("%zu\n", sizeof -a);
//
//	return 0;
//}

//算术转换：见文档记录

//作业

//1.写一个函数返回参数二进制中1的个数
//int count1(int a)
//{
//	int i = 0;
//	int b = 1;
//	int c = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((a & b) == b)
//		{
//			c++;
//		}
//		b <<= 1;
//	}
//	return c;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d\n",count1(a));
//	return 0;
//}

//方法2：
//int count1(int a)//该方法对负数不管用，如-1，进入函数后，除2商0，结束循环
//{
//	int c = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			c++;
//		}
//		a /= 2;
//	}
//	return c;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d\n",count1(a));
//	return 0;
//	
//}

//int count1(unsigned int a)//稍加改进,加上unsigned int，内存照样存的是-1的补码，
////但是识别的时候会把它当正数识别，识别成一个很大的数
//{
//	int c = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			c++;
//		}
//		a /= 2;
//	}
//	return c;
//}
//int main()
//{
//	unsigned int a = 0;
//	scanf("%d", &a);
//	printf("%d\n", count1(a));
//	return 0;
//
//}

//方法3
//假如n=11
//1011 - n
//1010 - n-1
//1010 - n&(n-1)
//1010 - n
//1001 - n-1
//1000 - n&(n-1)
//1000 - n
//0111 - n-1
//0000 - n&(n-1)
//n=0
//运行一次就减少从右到左的一个1，直到n=0；
//这里的n=n&（n-1）还可以用来判断是不是2的n次方，因为2的n次方一定只有1个1，所以去掉一个1后一定为0
//if (n=n&(n-1)==0)
//int count1(int a)
//{
//	int c = 0;
//	while (a)
//	{
//		c++;
//		a = a & (a - 1);
//	}
//	return c;
//}
//int main()
//{
//	unsigned int a = 0;
//	scanf("%d", &a);
//	printf("%d\n", count1(a));
//	return 0;
//
//}

//2.求两个整数的二进制不同位的个数
//int test1(int a, int b)
//{
//	int ret = a ^ b;
//	int c = 0;
//	//按位异或，相同为0，相异为1
//	while (ret)//统计1的个数
//	{
//		ret = ret & (ret - 1);
//		c++;
//	}
//	return c;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	int c = 0;
//	scanf("%d%d", &a, &b);
//	for (i = 0; i < 32; i++)
//	{
//		if (((a>>i) & 1) != ((b>>i) & 1))//对比两边不加()括号的时候会出问题，原因是操作符优先级出问题
//		{
//			c++;
//		}
//	}
//	printf("%d\n", c);
//	printf("%d\n", test1(a, b));
//	return 0;
//}

//3.获取一个整数的二进制奇数位和偶数位，分别打印
//void test1(int a)
//{
//	int i = 0;
//	for (i = 0; i < 32; i += 2)
//	{
//		int c = (a>>i) & 1;
//		printf("%d ", c);
//	}
//	printf("\n");
//	for (i = 1; i < 32; i += 2)
//	{
//		int c = (a >> i) & 1;
//		printf("%d ", c);
//	}
//	printf("\n");
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	test1(a);
//	return 0;
//}

//4.程序错误，垃圾代码

//int main()
//{
//	int c = 1;
//	int a = (++c) + (++c) + (++c);
//	printf("%d\n", a);
//}

//5.超级无敌陷阱题
//全局变量，静态变量存放在静态区，当它们没有初始化的时候会默认初始化为0；
//局部变量存放在栈区，不初始化，默认值是随机值
int a;//0
int main()
{
	a--;//-1
	if (a > sizeof(a))//算术转化，unsigned int高于int，a转化为无符号整型，-1的补码直接转化得到数值极大的整型，
		//每一位都是有效数字
		printf(">");
	else
		printf("<");
	return 0;
}

//6.打印X

//int main()
//{
//	int x = 0;
//	int i = 0;
//	int j = 0;
//	scanf("%d", &x);
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < x; j++)
//		{
//			if (j==i || i + j == x - 1)
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//	return 0;
//}