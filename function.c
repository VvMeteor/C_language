#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//函数：库函数主要是要靠自己读文档学习
//下面以两个函数为例
//一.strcpy//Copy a string
//#include<string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello world!";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//二.memset//将内存中的一块连续空间（即缓冲区）的每个位置都初始化为存储相同的字符
//#include<memory.h>
//int main()
//{
//	char arr[20] = "hello world!";
//	memset(arr, 'x', 3);//在arr后边加几就从几+1开始
//	printf("%s\n", arr);
//	return 0;
//}

//三.自己找的一个库函数：strcoll
//该函数作用是根据当前环境的区域设置（locale）来比较两个字符串的字典顺序，而不是比较它们的长度。
//逐字符比较过程中，一旦发现某一对被比较的字符之间不相等时，这一对字符的大小关系即为这一对字符串的大小关系。
//#include<string.h>
//int main()
//{
//	char a[20] = "nice to meet you!";
//	char b[30] = "nice to meet you too!";//这里实际上是！与空格之间的比较，前者ASCII值大于后者，所以第一句话大
//	int i=strcoll(a,b);
//	if (0 == i)
//		printf("两句话字典顺序一样");
//	else if (i<0)
//		printf("第二句话更大");
//	else
//		printf("第一句话更大");
//	return 0;
//}

//自定义函数
//一. 两个数求较大值
//int max(int x, int y)
//{
//	return (x >= y ? x:y);
//}
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d\n", max(a, b));
//	return 0;
//}

//二.交换两个整型内容
//void exchange(int x, int y)
//{
//	int i = 0;
//	i = x;
//	x = y;
//	y = i;
//}
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	exchange(a,b);
//	printf("%d %d\n", a, b);//会发现a，b没有交换
//	return 0;
//}
////这是因为exchange函数将实参a，b传输到函数里边，会拷贝出一份形参x，y，但是对形参的修改不会影响到实参，所以交换失败

//void exchange(int* x, int* y)
//{
//	int i = *x;
//	*x=*y;
//	*y = i;
//}
//int main()
//{
//	int a = 0, b = 0;
//	int* p1 = &a;
//	int* p2 = &b;
//	scanf("%d %d", p1, p2);
//	exchange(p1,p2);
//	printf("%d %d\n", a, b);
//	return 0;
//}
//这个方法和之前不同的是，这里将实际参数的地址传给函数，建立了更为稳固的联系，
//函数就可以通过地址来找到实际参数，并对其进行修改，完成交换的效果。

//如果需要对实际参数进行改变，那就需要传地址，如果不需要改实参，那直接传参数

//练习题1：输出100~200的素数，写一个函数判断素数
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int c = 0;//给素数个数计数
//	for (i = 101; i <= 199; i+=2)//排除偶数
//	{
//		int a = 1;//用来表示是否为素数，1为素数，0则不是
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)//sqrt是开平方，如果不是素数，在这之前一定能找到一个
//		{
//			if (i % j == 0)
//			{
//				a = 0;
//				break;
//			}
//		}
//	    if (1==a)
//	    {
//		    c++;
//		    printf("%d ", i);
//	    }
//	}
//	printf("\n%d\n", c);
//	return 0;
//}
//#include<string.h>
//#include<math.h>
//void test(int x)
//{
//	int i = 0;
//	int j = 1;
//	for (i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i == 0)
//		{
//			j = 0;
//			break;
//		}
//	}
//	if (1 == j)
//		printf("YES");
//	else
//		printf("NO");
//}
//int main()
//{
//	int a = 0;
//again:
//	scanf("%d", &a);
//	if (a > 1)
//		test(a);
//	else
//		goto again;
//	return 0;
//}

//练习题2：判断一个年份是不是闰年
//int test(int x)
//{
//	if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
//		return 1;
//	else
//		return 0;
//	
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	if (test(i))
//	{
//		printf("YES");
//	}
//	else
//		printf("NO");
//	return 0;
//}

//练习题三：二分查找函数
//int search(int arr[], int k, int sz)//这个地方数组传参int arr[]存放的不是整个数组，而是首元素的地址，
////本质上是一个指针变量，因为把整个数组拷过来占用空间太大，也可以写成int* arr，所以如果把sz放在函数里面来求的方式也是不对的。
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	printf("需要查找的数字：");
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int a = search(arr,k,sz);
//	if (-1 != a)
//	{
//		printf("找到了，下标是：%d\n", a);
//	}
//	else
//		printf("找不到\n");
//	return 0;
//}

//bool类型：C99之后引入的类型，用来表示真假的变量,一个字节
//#include<stdbool.h>
//#include<math.h>
//bool test(int i)
//{
//	int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//				return false;
//		}
//	return true;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (test(i))
//			printf("%d ", i);
//	}
//	return 0;
//}

//函数的嵌套调用
//void test()
//{
//	printf("hehe");
//}
//void print()
//{
//	int i = 0;
//	for (i = 0; i <= 3; i++)
//		test();
//}
//int main()
//{
//	print();
//	return 0;
//}
//函数的链式访问
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//printf返回打印内容的字符个数，必须要有返回值才能进行链式访问
//	return 0;
//}

//函数写法
//void test(void)//明确表示不需要参数
//{
//	;
//}

//int main(void)//明确表示不需要参数
//{
//	return 0;
//}
////但是实际上main函数是有参数的
//int main(int argc, char* argv[], char* envp[])
//{
//	return 0;
//}

//函数的声明和定义
/*int add(int, int);*///函数的声明
#include"add.h"//函数的声明放add.h的头文件，函数内容放add.c的源文件，这里直接用include把头文件相应的内容拷过来
//""用于自定义的 ，<>用于库里的头文件
//这里甚至可以把add.c转化为静态库存储形式，以此来隐藏其具体内容，需要使用的时候只需按下代码：
//#pragma comment(lib,"add.lib")
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = add(a,b);
//	printf("%d\n", c);
//	return 0;
//}
//int add(int x, int y)//函数的定义
//{
//	return x + y;
//}

//函数的递归
//练习题1：输入1234，依次打印1 2 3 4
//void print(unsigned int x)
//{
//	if (x > 9)//限制调用自身的条件，不然会栈溢出stack overflow
//	{
//		print(x / 10);
//	}
//	printf("%d ", x % 10);
//}
//int main()
//{
//	unsigned int i = 0;
//	scanf("%u", &i);
//	print(i);
//	return 0;
//}

//练习题2：写一个函数实现strlen的功能
//int mystrlen(char* arr)
//{
//	int a = 0;//创建了临时变量
//	while (*arr != '\0')
//	{
//		a++;
//		arr++;//找下一个字符，一个字符1个字节
//	}
//	return a;
//}
//int main()
//{
//	char arr[] = "abc";
//	int len = mystrlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//不创建临时变量
//int mystrlen(char* arr)
//{
//	if (arr[0] != '\0')
//	{
//		return 1 + mystrlen(arr + 1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "abcef";
//	int len = mystrlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//用函数的递归来写阶乘
//int f(int a)
//{
//	if (a <= 1)
//		return 1;
//	else
//		return a * f(a - 1);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int result = f(a);
//	printf("%d\n", result);
//	return 0;
//}

//求斐波那契数列的第n个数
//1，1，2，3，5，8，13，21，34，55，89
//int num = 0;
//int f(int x)
//{
//	if (x == 3)
//		num++;
//	if (x <= 2)
//		return 1;
//	else
//		return f(x - 1) + f(x - 2);
//}
////当n=30，需要求：
////       29          28
////   28     27    27    26
////  27 26 26 25 26 25 25  24
////...需要求的东西越来越多，而且是重复计算，这样计算效率太慢
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = f(n);
//	printf("%d\n", ret);
//	printf("%d\n", num);
//	return 0;
//}

//函数迭代思路求斐波那契第n个数
//int f(int x)
//{
//	int i = 1;
//	int j = 1;
//	int c = 1;
//	int num = 0;
//	while (num<=x-2)
//	{
//		c = i + j;
//		i = j;
//		j = c;
//		num++;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;;
//	scanf("%d", &n);
//	int ret = f(n);
//	printf("%d\n", ret);
//	return 0;
//}

//输入三个数，从大到小输出
//void exchange(int* x, int* y)
//{
//	int* c = *x;
//	*x = *y;
//	*y = c;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	scanf("%d %d %d", &i, &j, &n);
//	if (i < j)
//		exchange(&i, &j);
//	if (i < n)
//		exchange(&i, &n);
//	if (j < n)
//		exchange(&j, &n);
//	printf("%d %d %d\n", i, j, n);
//	return 0;
//}

//输出1~100中3的倍数

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//		if (i % 3 == 0)
//			printf("%d ", i);
//	return 0;
//}

//求两个数的最大公约数

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	scanf("%d %d", &a, &b);
//	int min = a < b ? b:a;
//	for (i = min; i >= 1; i--)
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			printf("%d\n", i);
//			break;
//		}
//	}
//	return 0;
//}

//辗转相除法
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);;
//	while (a % b)
//	{
//		int c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("%d\n",b);
//	return 0;
//}

//输出1`100的数字中9出现的次数
//9，19，29，39，49，59，69，79，89，99
//90，91，92，93，94，95，96，97，98，99
//int main()
//{
//	int i = 0;
//	int c = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)//判断个位
//			c++;
//		if (i / 10 == 9)//判断十位
//			c++;
//	}
//	printf("%d\n", c);
//	return 0;
//}

//计算1-1/2+1/3-1/4+1/5-1/6+...+1/99-1/100
//#include<math.h>
//int main()
//{
//	int i = 0;
//	double sum = 0;//输出double类型的，不然1/i后边全是0
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum - (1.0 / i)*pow(-1,i);//pow是以-1为底，i为指数的函数，这里用1.0是因为double类型需要两边有一边是浮点型
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//找出10个整数中的最大值
 
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//这里如果要进行数组创建，后续输入元素的话，就不能int arr[]={0},这样他会默认数组只能存一个元素
//    //也不能将10改为20，改为20后，其他没填充完的位置默认填0，如果数组元素都是负数，这时候最大值就是系统默认填入的0了
//	int sz = sizeof(arr) / sizeof(arr[0])-1;
//	printf("%d\n", sz);
//	int i = 0;
//	int max = arr[0];
//	for (i = 1; i <= sz; i++)
//	{
//		if (arr[0] < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}

//输出9*9乘法表

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)//打印9行
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)//在第几行就打印几列
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);//2的意思是打印两位，没有就用空格替代，-号的意思是左对齐，不加就是默认右对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}

//二维数组的创建和初始化
//int main()
//{
//	int arr1[2][3] = {1,2,3,4,5,6};//创建一个2行3列的二维数组并初始化
//	//arr1会依次读取，第一行读三个，第二行读三个，元素不够则填充0
//	int arr2[2][3] = { {1,2},{3,4} };
//	//对元素进行分组，放入
//	int arr3[][3] = { {1,2},{3,4} };
//	//可以省略行，但是不能省略列
//	//对于二维数组里的元素的下标，其行和列都是从0开始的
//	return 0;
//}

//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	for (i = 0; i <= 2; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= 2;j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//冒泡排序方法
//void sort(int* arr,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)//一共会循环sz-1次，因为一共sz个元素，把sz-1个排好了，最后一个自然也ok了
//	//每循环一次就会将一个元素排在属于他的位置，而且是从大到小，第一次循环一定会把数组元素中最大的排到最后去
//	//第二次就是第二大的...
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)//这里是将最大值往后搬运的操作
//		//j之所以小于sz-1-i是因为，i每循环一次，就有一个元素被排好了，那么本质上就是对前面sz-i个元素的排序
//		//这里以最大帮运次数作为考虑
//		{
//			if (arr[j] > arr[j + 1])//具体的搬运操作
//			{
//				int con = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = con;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,5,6,10,3,8,5,4,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr, sz);
//	int n = 0;
//	for (n = 0; n < sz; n++)
//	{
//		printf("%d ", arr[n]);
//	}
//	return 0;
//}

//递归的作业
//将字符串倒序:一般方法
//void turn(char arr[], int i, int j)
//{
//	if (i < j)
//	{
//		char m = arr[i];
//		arr[i] = arr[j];
//		arr[j] = m;
//		i++;
//		j--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0])-1;
//	int j = sz-1;
//	turn(arr, i, j);
//	printf("%s", arr);
//	
//	return 0;
//}

//方法2
//int len(char* arr)
//{
//	int i = 0;
//	int c = 0;
//	for (i = 0; arr[i] != '\0'; i++)
//	{
//		c++;
//	}
//	return c;
//}
//void turn(char* arr)//仅传一个参数，先将数组第一个元素存储到m，最后一个元素搬到第一个位置，最后一个位置
// 填充'\0',这样数组交换turn（arr+1）实质上是除去两边元素的中间元素的倒序，最后再将最后一个位置放入m
//{
//	int i = 0;
//	int j = len(arr) - 1;
//	char m = arr[i];
//	arr[i] = arr[j];
//	arr[j] = '\0';
//	if (len(arr) >= 2)
//	{
//		turn(arr + 1);
//	}
//	arr[j] = m;
//}
//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", arr);
//	printf("%d\n", len(arr));
//	turn(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//方法3：
//int len(char* arr)
//{
//	int i = 0;
//	int c = 0;
//	for (i = 0; arr[i] != '\0'; i++)
//	{
//		c++;
//	}
//	return c;
//}
//void turn(char* arr, int i, int j)//基本思想同一般方法
//{
//
//	if (i < j)
//	{
//		char m = arr[i];
//		arr[i] = arr[j];
//		arr[j] = m;
//		turn(arr, i + 1, j - 1);
//	}
//}
//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", arr);
//	int i = 0;
//	int j = len(arr)-1;
//	turn(arr,i,j);
//	printf("%s\n", arr);
//	return 0;
//}

//输入一个非负整数，输出其每一位之和
//int spsum(int num)
//{
//	if (num > 9)
//	{
//		return num % 10 + spsum(num / 10);
//	}
//	return num;
//}
//int main()
//{
//	int num = 0;
//	do
//	{
//		scanf("%d", &num);
//	} while (num < 0);
//	printf("%d\n", spsum(num));
//	return 0;
//}

//递归实现n的k次方
//double power(int n, int k)
//{
//	double ret=0;
//	if (k > 0)
//	{
//		ret = n * power(n, k - 1);
//	}
//	else if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		ret = 1.0 / power(n, -k);
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	do
//	{
//		scanf("%d %d", &n,&k);
//	} while (n < 0);
//	printf("%.2lf\n", power(n, k));
//	return 0;
//}

//作业
//1.实现输入n级台阶，小米一次可以走一步或两步，输出其爬完台阶的方法种数
//#include<stdlib.h>
//#include<time.h>
//int test(int n)
//{
//	if (n > 2)
//	{
//		return test(n-1) + test(n-2);
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	int n = 0;
//	int i = 1;
//	do
//	{
//		printf("n=");
//		scanf("%d", &n);
//		if (n > 0 && n <= 30)
//		{
//			i = 0;
//		}
//	} while (i);
//	test(n);
//	printf("方法数=%d\n", test(n));
//	return 0;
//}

//删除序列中的指定元素

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int out = 0;
//	int arr[10] = { 0 };
//	scanf("%d", &n);
//	printf("\n");
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", arr+i);
//	}
//	printf("\n");
//	scanf("%d", &out);
//	int c = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (out != arr[i])
//		{
//			arr[c] = arr[i];
//			c++;
//		}
//		else
//			continue;
//	}
//	for (j = 0; j < c; j++)
//	{
//		printf("%d ", arr[j]);
//	}
//	return 0;
//}

//方法2

//int main()
//{
//	int n = 0;
//	int a = 0;
//	int b = 0;
//	int out = 0;
//	int arr[10] = { 0 };
//	int arr1[10] = { 0 };
//	scanf("%d", &n);
//	printf("\n");
//	for (a = 0; a < n; a++)
//	{
//		scanf("%d", arr+a);
//	}
//	printf("\n");
//	scanf("%d", &out);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (out == arr[i])
//		{
//			j = i - 1;
//			int m = arr[i];
//			arr[i] = arr[i + 1];
//			arr[i + 1] = m;
//		}
//	}
//	for (b = 0; b <= j; b++)
//	{
//		printf("%d ", arr[b]);
//	}
//	return 0;
//}

//输入n个成绩，输出最高分与最低分的差值
//int max(int* arr,int n)
//{
//	int i = 0;
//	int MAX = *arr;
//	for (i = 1; i < n; i++)
//	{
//		if (arr[i] > MAX)
//		{
//			MAX = arr[i];
//		}
//	}
//	return MAX;
//}
//int min(int* arr, int n)
//{
//	int i = 0;
//	int MIN = *arr;
//	for (i = 1; i < n; i++)
//	{
//		if (arr[i] < MIN)
//		{
//			MIN = arr[i];
//		}
//	}
//	return MIN;
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int arr[10] = { 0 };
//	scanf("%d", &n);
//	printf("\n");
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", arr+i);
//	}
//	int c = max(arr,n) - min(arr,n);
//	printf("%d\n", c);
//	return 0;
//}

//字母大小写转化

//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)//读取成功就返回1，失败返回EOF
//	{
//		if (ch >= 'a' && ch <= 'z')
//		{
//			printf("%c\n", ch-32);
//		}
//		else
//			printf("%c\n", ch+32);
//		getchar();//因为输入字符的时候需要输入回车，实际上就输入了一个字符和\n,\n+32就是*号
//		//scanf("%c")的格式，每次只读取一个字符，所以第一个字符字母会正常读入，输出，第二个字符\n在被读取前被getchar消耗
//	}
//	return 0;
//}
//
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)//读取成功就返回读取个数，失败返回EOF
//	{
//		if (ch >= 'a' && ch <= 'z')
//		{
//			printf("%c\n", ch - 32);
//		}
//		else if (ch >= 'A' && ch <= 'Z')//严格限制范围，确保其他字符如\n不会进入
//			printf("%c\n", ch + 32);
//	}
//	return 0;
//}
//#include<ctype.h>
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)//读取成功就返回读取个数，失败返回EOF
//	{
//		if (islower(ch))//判断小写，小写为真
//		{
//			printf("%c\n", toupper(ch));//大写转化
//		}
//		else if (isupper(ch))//判断大写，大写为真
//			printf("%c\n", tolower(ch));//小写转化
//	}
//	return 0;
//}

//判断输入是不是字母
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)//也可以不用getchar，在%c前面加个空格，意思是scanf会跳过下一个字符前的所有空白字符
//	{
//		if (ch >= 'A' && ch <= 'z')
//		{
//			printf("%c is an alphabet.\n",ch);
//		}
//		else
//			printf("%c is not an alphabet.\n", ch);
//		getchar();
//	}
//	return 0;
//}

//求五位数的变种水仙花数

//#include<math.h>
//int judge(int i)
//{
//	int a = 0;
//	int b = 0;
//	int j = 0;
//	int c = 0;
//    for (j=0;j<5;j++)
//	{
//		int m = (int)pow(10, 4 - j);
//		a = i / m;
//		b = i % m;
//		c += a * b;
//	}
//	if (c == i)
//	{
//		return i;
//	}
//	else
//	    return 0;
	/*int a = i / 10000;
	int b = i%(10000 * a);
	int c = i / 1000;
	int d = i - 1000 * c;
	int e = i / 100;
	int f = i - e * 100;
	int g = i / 10;
	int h = i - g * 10;
	if (a * b + c * d + e * f + g * h == i)
	{
		return 1;
	}
	else
		return 0;*/
//}
//int main()
//{
//	int i = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		if (judge(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//判断三角形
//#include<math.h>
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	double cosc = (pow(a, 2) + pow(b, 2) - pow(c, 2)) / (2 * a * b);
//	double cosb = (pow(a, 2) + pow(c, 2) - pow(b, 2)) / (2 * a * c);
//	double cosa = (pow(c, 2) + pow(b, 2) - pow(a, 2)) / (2 * c * b);
//	if (a + b > c && a + c > b && b + c > a)
//	{
//		if (cosc < 0 || cosa<0 ||cosb<0)
//		{
//			printf("钝角三角形\n");
//		}
//		else if (cosc == 0 || cosa == 0 || cosb == 0)
//		{
//			printf("直角三角形\n");
//		}
//		else
//		{
//			printf("锐角三角形\n");
//		}
//	}
//	else
//		printf("无法构成三角形\n");
//	return 0;
//
//}

//#include<math.h>
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a + b > c && a + c > b && b + c > a)
//	{
//		if (a == b || a == c || b==c)
//		{
//			if (a == b && a != c)
//			{
//				printf("等腰三角形");
//			}
//			else if (a == c && a != b)
//			{
//				printf("等腰三角形");
//			}
//			else if (b == c && b != a)
//			{
//				printf("等腰三角形");
//			}
//			else
//				printf("等边三角形");
//		}
//		else
//		{
//			printf("普通三角形\n");
//		}
//	}
//	else
//		printf("无法构成三角形\n");
//	return 0;
//
//}

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以买多少汽水(编程实现)

//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int get = money;//得到的汽水
//	int empty = money;//空瓶数量
//	while (empty >=2)
//	{
//		get+= empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", get);
//	return 0;
//}

//将一串数字的奇数放在偶数前面，输出
//int main()
//{
//	int arr[4] = { 0 };
//	int i = 0, j = 4;
//	for (i = 0; i < 4; i++)
//	{
//		scanf("%d", arr + i);
//	}
//	i = 0;
//	while (i < j)
//	{
//		if (arr[i] % 2 != 1 && arr[j] % 2 == 1)
//		{
//			int tmp = arr[i];
//			arr[i] = arr[j];
//			arr[j] = tmp;
//			i++;
//			j--;
//		}
//		if (arr[i] % 2 == 1)
//		{
//			i++;
//		}
//		if (arr[j] % 2 != 1)
//		{
//			j--;
//		}
//	}
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d", *(arr + i));
//	}
//	return 0;
//}

//有序序列合并输出

int main()
{
	int i = 0, j = 0;
	int arr1[2],arr2[3];
	for (i = 0; i < 2; i++)
	{
		scanf("%d", arr1 + i);
	}
	for (j = 0; j < 3; j++)
	{
		scanf("%d", arr2 + j);
	}
	i = 0, j = 0;
	while (i < 2 && j < 3)
	{
		if (arr1[i] < arr2[j])
		{
			printf("%d ", arr1[i]);
			i++;
		}
		else if (arr1[i] >= arr2[j])
		{
			printf("%d ", arr2[j]);
			j++;
		}
	}
	if (i < 2)
	{
		for (; i < 2; i++)
		{
			printf("%d ", arr1[i]);
		}
	}

	else
	{
		for (; j < 3;j++)
		{
			printf("%d ", arr2[j]);
		}
	}
	return 0;
}
