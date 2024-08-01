#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//1.分支语句和循环语句

//1.1分支语句：if语句
//int main()
//{
//	if (3 == 5)
//		printf("hehe");
//	return 0;
//}

//int main()
//{
//	int age =20 ;
//	if (age > 18)
//	{
//		printf("成年\n");//默认if后边跟一条语句，如果要多，则要加{}
//		printf("能饮酒\n");
//	}
//	else
//		printf("未成年\n");
//	return 0;
//}

//多分支
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("青少年\n");
//	//else if (18<=age<28)
//	// printf（"青年\n"）是会打印出来的，因为语句首先判断age=18是小于18的，所以18<=age<28前半为假，为0，则0<28成立，if判断为真，打印
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 40)
//		printf("中年\n");
//	else if (age >= 40 && age < 60)
//		printf("壮年\n");
//	else if (age >= 0 && age < 100)
//		printf("老年\n");
//	else 
//		printf("老寿星\n");
//	return 0;
//}

//易错点（else的就近原则）
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else
//		printf("haha\n");//else和最近的if搭配，所以当a不等于1，程序不进入if语句，那么后续的打印操作也不会执行
//	return 0;
//}
//相当于
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	return 0;
//}
//解决办法：加上代码块
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//	else
//		printf("haha\n");
//	return 0;
//}

//易错点（return）
//int test()
//{
//	int a = 3;
//	if (a == 3)//也可以写成if （3==a），一旦少了一个=就会报错，可以及时发现错误
//		return 1;
//	return 0;
//}//这里涉及到return的特性，一个代码块只能return一次，返回一个值，if判断成立就返回1，跳过执行return0，if不成立则return0
//int main()
//{
//	int r = test();
//	printf("%d\n", r);
//	return 0;
//}

//练习：判断是否为奇数
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 == 1)
//		printf("奇数");
//	else
//		printf("no");
//	return 0;
//}

//练习：输出1~100的奇数
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//switch的用法
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	    case 1://也可以是字符，字符存储是按ASCII值存储，本质也是整型
//			printf("星期1\n");
//			break;//不加break则会一直往下执行，不会跳出选择
//		case 2:
//			printf("星期2\n");
//			break;
//		case 3:
//			printf("星期3\n");
//			break;
//		case 4:
//			printf("星期4\n");
//			break;
//		case 5:
//			printf("星期5\n");
//			break;
//		case 6:
//			printf("星期6\n");
//			break;
//		case 7:
//			printf("星期天\n");
//			break;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default://所有case都没有被执行就会导入此处
//		printf("error");
//		break;
//	}
//	return 0;
//}

//循环语句while
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			break;//break直接终止循环
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			continue;//continue则会跳过后续代码，直接到下一次循环,这里i等于5时会一直陷入死循环，因为后面的i++被跳过了，也不会打印
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while(i <= 10)
//	{
//		i++;
//		if (5 == i)
//			continue;
//		printf("%d", i);
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//注意这里ch=getchar()外要有括号，EOF的意思是如果不输入字符就进入循环
//	//getchar（）能将输入的字符以ASCII码值获取，如果输入其他类型则会得到EOF
//	//输入一个字符时，需要敲一个enter，即\n才会运行程序，此时getchar会分别获取字符和、\n，所以打印效果会换行
//	{
//		putchar(ch);//或者printf("%c\n",ch);
//	}
//	return 0;
//}

//int main()
//{
//	char password[20]= {0};//password[20]为数组类型，里面存放字符，这里初始化，20为存储空间，也可以char password=0，'\0'或者{0}初始化，后面的c和&要相应改动
//	//切记'0'和0，{0}有区别
//	printf("请输入密码：");
//	scanf("%s",password);//这里scanf以字符串的形式打印数组password的字符元素，作为数组的password无需&，因为创建的时候已经以password作为地址头展开空间了
//	//char password ='0';
//	//scanf("%c",&password);这是以常规字符形式的操作
//	int ch = 0;//以int的形式创建，是因为getchar的返回类型字符本质上也是整型，而char类型只能存储1个字节，而如果返回EOF，那大小为4个字节，这时用int创建则可以正常存储
//	while ((ch = getchar()) != '\n')//getchar将\n及其之前的字符包括空格全部摄取掉，因为scanf只能摄取空格以前的内容，遇到空格停止摄取，
//		//所以这种方法密码读取和实际密码不一样
//	
//	{
//		;
//	}
//	printf("请确认密码(Y/N)");
//	int ch2 = getchar();//此时输入缓冲区没有字符，只能等待输入
//	if ('Y' == ch2)
//		printf("YES");
//	else
//		printf("NO");
//	return 0;
//}
//int main()
//{
//	char ch = 's';
//	printf("%zu\n", sizeof('s'));
//	printf("%zu\n", sizeof(char));
//	printf("%zu\n", sizeof(ch));
//	return 0;
//}
//练习题1
//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar() )!= EOF)
//	{
//		if (ch < '0' || ch>'9')
//		    continue;
//		printf("%c", ch);
//	}
//	return 0;
//}

//练习题2
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year, &month, &date);//%后的数字代表摄取的个数
//	printf("year=%4d\n", year);
//	printf("month=%02d\n", month);//02表示摄取两位数字，且如果第一位数字为0也依旧显示，否则如果输入20130125，这里只输出 1
//	printf("date=%02d\n", date);
//
//	return 0;
//}

//练习题3
//int main()
//{
//	int id = 0;
//	float math = 0.0f;//double类型的精度高于float，去掉f就是double类型
//	scanf("%d;%f", &id, &math);
//	printf("%d;%0.2f", id, math);
//	return 0;
//}

//练习题4
//int main()
//{
//	int a = printf("hello world!");
//	printf("\n%d\n", a);//在%d前面加\n的原因是和打印的hello world换行
//	return 0;
//}

//练习题5
//int main()
//{
//	int a, b, c, d = 0;
//	scanf("%d %d %d %d",&a,&b,&c,&d);
//	if (a >= b && a >= c && a >= d)
//		printf("%d\n", a);
//	else if (b >= a && b >= c && b >= d)
//		printf("%d\n", b);
//	else if (c >= a && c >= b && c >= d)
//		printf("%d\n", c);
//	else
//		printf("%d\n", d);
//	return 0;
//}
//int main()
//{
//	int arr[4] = { 0 };
//	int i = 0;
//	while (i < 4)
//	{
//		scanf("%d", &arr[i]);//对于数组中的某个元素是需要取地址的
//		i++;
//	}
//	int max = arr[0];
//	int n = 1;
//	while (n < 4)
//	{
//		if (max < arr[n])
//		{ 
//			max = arr[n];
//		}
//		n++;
//	}
//	printf("%d\n", max);
//	return 0;
//}

//for循环

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)//for循环中三个部分都可以省略，省略判断部分说明判断会恒成立
//	{ 
//		if (i == 5)
//			//break;
//			continue;//这里只会跳过后面的printf，跳过后转入i++
//	    printf("%d ", i);
//	}
//	return 0;
//}

//三个表达式最好不要省略
//int main()
//{
//	int i, j = 0;//这里只有j初始化了，a其实没有被初始化
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//			printf("hehe\n");//输出9个hehe
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0,j = 0;
//	for (; i < 3; i++)
//	{
//		for (; j < 3; j++)
//			printf("hehe\n");//输出3个hehe
//	}
//	return 0;
//}

//易错点

//int main()
//{
//	int x = 0, y = 0;
//	for (x = 0, y = 0; y = 0; x++, y++)//因为y=0是赋值，而0又是假，所以循环0次
//		printf("hehe");
//	return 0;
//}

//do...while循环

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;//死循环
//		printf("%d\n", i);
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}

//练习题计算n的阶乘
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	int s = 1;
//	for (i = 1; i <= n; i++)
//		s *= i;
//	printf("%d\n", s);
//	return 0;
//}
//练习题计算1！+2！+3！+...+n!
//int jiecheng(int x)
//{
//	int i = 0;
//	int s = 1;
//	for (i = 1; i <= x; i++)
//		s *= i;
//	return s;
//}
//int main()
//{
//	int a = 1;
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (a = 1; a <= n; a++)
//		sum += jiecheng(a);
//	printf("%d\n", sum);
//	return 0;
//}

//方法2
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//练习题二分法查找
//在一组有序数字中查找某个数字的下标
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
//	int k = 13;
//	int sz = sizeof(arr) / sizeof(arr[0]);//求元素个数
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (k > arr[mid])
//		{
//			left = mid + 1;//缩小范围
//		}
//		else if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到");
//	return 0;
//}

//练习题三
//#include<string.h>
//#include<windows.h>//包含Sleep
//#include<stdlib.h>//包含system
////int main()
//{
//	char arr1[] = "hello!";
//	char arr2[] = "######";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	int i = 1;
//	printf("%s\n", arr2);
//	Sleep(2000);
//	system("cls");
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//		Sleep(2000);//2000的单位是ms
//		system("cls");//清空屏幕;system是一个库函数，可以执行系统命令
//	}
//	printf("%s", arr2);
//	return 0;
//}

//练习题四
#include<string.h>
//int main()
//{
//	int i = 0;
//	char s[20];//密码是123456789
//	while (i < 3)
//	{
//		printf("输入密码：");
//		scanf("%s", s);
//		if (strcmp(s, "123456789") == 0)//比较两个字符串是否相等不能用==，要用库函数strcmp，如果相等，返回0
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//			printf("密码错误\n");
//		i++;
//	}
//	if (i ==3)
//		printf("连续三次输错密码，退出程序\n");
//	return 0;
//}

//练习题五：设计小游戏猜数字
//生成1~100的随机数字，并猜数字
//#include<stdio.h>
//#include<stdlib.h>//srand和rand使用需要引用
//#include<time.h>//引用时间戳time
//void guess()//猜数字游戏的运行函数
//{
//	int j = 0;
//	int random = rand() % 100 + 1;//生成1~100的随机数，rand是生成0~RAND_MAX的一个随机数，但多次输出的结果固定，所以需要srand
//	while (1)
//	{
//		scanf("%d", &j);
//		if (random < j)
//			printf("猜大了\n");
//		else if (random>j)
//			printf("猜小了\n");
//		else
//		{
//			printf("恭喜你，猜对了！\n");
//			break;//直到猜对了才能跳出循环
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	srand((unsigned int)time(NULL));//srand借助时间戳time协助rand生成随机数，time括号里需要一个指针变量，这里NULL给它初始化
//	//time()可以获取时间戳，这是一个随时间变化的值，正好满足srand括号里的要求
//	do
//	{
//		printf("****************\n");
//		printf("*****1.play*****\n");
//		printf("*****1.exit*****\n");
//		printf("****************\n");
//		printf("请选择：");
//		scanf("%d", &i);
//		if (1 == i)
//		{
//			printf("猜数字\n");
//			guess();
//		}
//		else if (0 == i)
//		{
//			printf("退出游戏\n");
//			break;
//		}
//		else
//			printf("错误操作，请重新输入\n");
//
//	} while(i);
//	return 0;
//}

//goto语句的使用场景
//int main()
//{
//	char ch[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("电脑将在60s后自动关机，请输入：\"我是猪\"取消关机\n");
//	scanf("%s", ch);
//	if (strcmp(ch, "我是猪")==0)
//	{
//		system("shutdown -a");
//	}
//	else
//		goto again;
//	return 0;
//}

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

void exchange(int* x, int* y)
{
	int i = *x;
	*x=*y;
	*y = i;
}
int main()
{
	int a = 0, b = 0;
	int* p1 = &a;
	int* p2 = &b;
	scanf("%d %d", p1, p2);
	exchange(p1,p2);
	printf("%d %d\n", a, b);
	return 0;
}
//这个方法和之前不同的是，这里将实际参数的地址传给函数，建立了更为稳固的联系，
//函数就可以通过地址来找到实际参数，并对其进行修改，完成交换的效果。
