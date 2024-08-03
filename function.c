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
////本质上是一个指针变量，因为把整个数组拷过来占用空间太大，所以如果把sz放在函数里面来求的方式也是不对的。
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
int main()
{
	int a = 10;
	int b = 20;
	int c = a + b;
	printf("%d\n", c);
	return 0;
}