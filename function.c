#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�������⺯����Ҫ��Ҫ���Լ����ĵ�ѧϰ
//��������������Ϊ��
//һ.strcpy//Copy a string
//#include<string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello world!";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//��.memset//���ڴ��е�һ�������ռ䣨������������ÿ��λ�ö���ʼ��Ϊ�洢��ͬ���ַ�
//#include<memory.h>
//int main()
//{
//	char arr[20] = "hello world!";
//	memset(arr, 'x', 3);//��arr��߼Ӽ��ʹӼ�+1��ʼ
//	printf("%s\n", arr);
//	return 0;
//}

//��.�Լ��ҵ�һ���⺯����strcoll
//�ú��������Ǹ��ݵ�ǰ�������������ã�locale�����Ƚ������ַ������ֵ�˳�򣬶����ǱȽ����ǵĳ��ȡ�
//���ַ��ȽϹ����У�һ������ĳһ�Ա��Ƚϵ��ַ�֮�䲻���ʱ����һ���ַ��Ĵ�С��ϵ��Ϊ��һ���ַ����Ĵ�С��ϵ��
//#include<string.h>
//int main()
//{
//	char a[20] = "nice to meet you!";
//	char b[30] = "nice to meet you too!";//����ʵ�����ǣ���ո�֮��ıȽϣ�ǰ��ASCIIֵ���ں��ߣ����Ե�һ�仰��
//	int i=strcoll(a,b);
//	if (0 == i)
//		printf("���仰�ֵ�˳��һ��");
//	else if (i<0)
//		printf("�ڶ��仰����");
//	else
//		printf("��һ�仰����");
//	return 0;
//}

//�Զ��庯��
//һ. ��������ϴ�ֵ
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

//��.����������������
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
//	printf("%d %d\n", a, b);//�ᷢ��a��bû�н���
//	return 0;
//}
////������Ϊexchange������ʵ��a��b���䵽������ߣ��´����һ���β�x��y�����Ƕ��βε��޸Ĳ���Ӱ�쵽ʵ�Σ����Խ���ʧ��

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
//���������֮ǰ��ͬ���ǣ����ｫʵ�ʲ����ĵ�ַ���������������˸�Ϊ�ȹ̵���ϵ��
//�����Ϳ���ͨ����ַ���ҵ�ʵ�ʲ���������������޸ģ���ɽ�����Ч����

//�����Ҫ��ʵ�ʲ������иı䣬�Ǿ���Ҫ����ַ���������Ҫ��ʵ�Σ���ֱ�Ӵ�����

//��ϰ��1�����100~200��������дһ�������ж�����
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int c = 0;//��������������
//	for (i = 101; i <= 199; i+=2)//�ų�ż��
//	{
//		int a = 1;//������ʾ�Ƿ�Ϊ������1Ϊ������0����
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)//sqrt�ǿ�ƽ���������������������֮ǰһ�����ҵ�һ��
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

//��ϰ��2���ж�һ������ǲ�������
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

//��ϰ���������ֲ��Һ���
//int search(int arr[], int k, int sz)//����ط����鴫��int arr[]��ŵĲ����������飬������Ԫ�صĵ�ַ��
////��������һ��ָ���������Ϊ���������鿽����ռ�ÿռ�̫��Ҳ����д��int* arr�����������sz���ں�����������ķ�ʽҲ�ǲ��Եġ�
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
//	printf("��Ҫ���ҵ����֣�");
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int a = search(arr,k,sz);
//	if (-1 != a)
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", a);
//	}
//	else
//		printf("�Ҳ���\n");
//	return 0;
//}

//bool���ͣ�C99֮����������ͣ�������ʾ��ٵı���,һ���ֽ�
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

//������Ƕ�׵���
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
//��������ʽ����
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//printf���ش�ӡ���ݵ��ַ�����������Ҫ�з���ֵ���ܽ�����ʽ����
//	return 0;
//}

//����д��
//void test(void)//��ȷ��ʾ����Ҫ����
//{
//	;
//}

//int main(void)//��ȷ��ʾ����Ҫ����
//{
//	return 0;
//}
////����ʵ����main�������в�����
//int main(int argc, char* argv[], char* envp[])
//{
//	return 0;
//}

//�����������Ͷ���
/*int add(int, int);*///����������
#include"add.h"//������������add.h��ͷ�ļ����������ݷ�add.c��Դ�ļ�������ֱ����include��ͷ�ļ���Ӧ�����ݿ�����
//""�����Զ���� ��<>���ڿ����ͷ�ļ�
//�����������԰�add.cת��Ϊ��̬��洢��ʽ���Դ���������������ݣ���Ҫʹ�õ�ʱ��ֻ�谴�´��룺
//#pragma comment(lib,"add.lib")
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = add(a,b);
//	printf("%d\n", c);
//	return 0;
//}
//int add(int x, int y)//�����Ķ���
//{
//	return x + y;
//}

//�����ĵݹ�
//��ϰ��1������1234�����δ�ӡ1 2 3 4
//void print(unsigned int x)
//{
//	if (x > 9)//���Ƶ����������������Ȼ��ջ���stack overflow
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

//��ϰ��2��дһ������ʵ��strlen�Ĺ���
//int mystrlen(char* arr)
//{
//	int a = 0;//��������ʱ����
//	while (*arr != '\0')
//	{
//		a++;
//		arr++;//����һ���ַ���һ���ַ�1���ֽ�
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

//��������ʱ����
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

//�ú����ĵݹ���д�׳�
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

//��쳲��������еĵ�n����
//1��1��2��3��5��8��13��21��34��55��89
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
////��n=30����Ҫ��
////       29          28
////   28     27    27    26
////  27 26 26 25 26 25 25  24
////...��Ҫ��Ķ���Խ��Խ�࣬�������ظ����㣬��������Ч��̫��
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = f(n);
//	printf("%d\n", ret);
//	printf("%d\n", num);
//	return 0;
//}

//��������˼·��쳲�������n����
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

//�������������Ӵ�С���
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

//���1~100��3�ı���

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//		if (i % 3 == 0)
//			printf("%d ", i);
//	return 0;
//}

//�������������Լ��

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

//շת�����
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

//���1`100��������9���ֵĴ���
//9��19��29��39��49��59��69��79��89��99
//90��91��92��93��94��95��96��97��98��99
//int main()
//{
//	int i = 0;
//	int c = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)//�жϸ�λ
//			c++;
//		if (i / 10 == 9)//�ж�ʮλ
//			c++;
//	}
//	printf("%d\n", c);
//	return 0;
//}

//����1-1/2+1/3-1/4+1/5-1/6+...+1/99-1/100
//#include<math.h>
//int main()
//{
//	int i = 0;
//	double sum = 0;//���double���͵ģ���Ȼ1/i���ȫ��0
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum - (1.0 / i)*pow(-1,i);//pow����-1Ϊ�ף�iΪָ���ĺ�����������1.0����Ϊdouble������Ҫ������һ���Ǹ�����
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//�ҳ�10�������е����ֵ
 
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//�������Ҫ�������鴴������������Ԫ�صĻ����Ͳ���int arr[]={0},��������Ĭ������ֻ�ܴ�һ��Ԫ��
//    //Ҳ���ܽ�10��Ϊ20����Ϊ20������û������λ��Ĭ����0���������Ԫ�ض��Ǹ�������ʱ�����ֵ����ϵͳĬ�������0��
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

//���9*9�˷���

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)//��ӡ9��
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)//�ڵڼ��оʹ�ӡ����
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);//2����˼�Ǵ�ӡ��λ��û�о��ÿո������-�ŵ���˼������룬���Ӿ���Ĭ���Ҷ���
//		}
//		printf("\n");
//	}
//	return 0;
//}

//��ά����Ĵ����ͳ�ʼ��
//int main()
//{
//	int arr1[2][3] = {1,2,3,4,5,6};//����һ��2��3�еĶ�ά���鲢��ʼ��
//	//arr1�����ζ�ȡ����һ�ж��������ڶ��ж�������Ԫ�ز��������0
//	int arr2[2][3] = { {1,2},{3,4} };
//	//��Ԫ�ؽ��з��飬����
//	int arr3[][3] = { {1,2},{3,4} };
//	//����ʡ���У����ǲ���ʡ����
//	//���ڶ�ά�������Ԫ�ص��±꣬���к��ж��Ǵ�0��ʼ��
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

//ð�����򷽷�
//void sort(int* arr,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)//һ����ѭ��sz-1�Σ���Ϊһ��sz��Ԫ�أ���sz-1���ź��ˣ����һ����ȻҲok��
//	//ÿѭ��һ�ξͻὫһ��Ԫ��������������λ�ã������ǴӴ�С����һ��ѭ��һ���������Ԫ���������ŵ����ȥ
//	//�ڶ��ξ��ǵڶ����...
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)//�����ǽ����ֵ������˵Ĳ���
//		//j֮����С��sz-1-i����Ϊ��iÿѭ��һ�Σ�����һ��Ԫ�ر��ź��ˣ���ô�����Ͼ��Ƕ�ǰ��sz-i��Ԫ�ص�����
//		//�����������˴�����Ϊ����
//		{
//			if (arr[j] > arr[j + 1])//����İ��˲���
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

//�ݹ����ҵ
//���ַ�������:һ�㷽��
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

//����2
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
//void turn(char* arr)//����һ���������Ƚ������һ��Ԫ�ش洢��m�����һ��Ԫ�ذᵽ��һ��λ�ã����һ��λ��
// ���'\0',�������齻��turn��arr+1��ʵ�����ǳ�ȥ����Ԫ�ص��м�Ԫ�صĵ�������ٽ����һ��λ�÷���m
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

//����3��
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
//void turn(char* arr, int i, int j)//����˼��ͬһ�㷽��
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

//����һ���Ǹ������������ÿһλ֮��
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

//�ݹ�ʵ��n��k�η�
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

//��ҵ
//1.ʵ������n��̨�ף�С��һ�ο�����һ�������������������̨�׵ķ�������
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
//	printf("������=%d\n", test(n));
//	return 0;
//}

//ɾ�������е�ָ��Ԫ��

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

//����2

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

//����n���ɼ��������߷�����ͷֵĲ�ֵ
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

//��ĸ��Сдת��

//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)//��ȡ�ɹ��ͷ���1��ʧ�ܷ���EOF
//	{
//		if (ch >= 'a' && ch <= 'z')
//		{
//			printf("%c\n", ch-32);
//		}
//		else
//			printf("%c\n", ch+32);
//		getchar();//��Ϊ�����ַ���ʱ����Ҫ����س���ʵ���Ͼ�������һ���ַ���\n,\n+32����*��
//		//scanf("%c")�ĸ�ʽ��ÿ��ֻ��ȡһ���ַ������Ե�һ���ַ���ĸ���������룬������ڶ����ַ�\n�ڱ���ȡǰ��getchar����
//	}
//	return 0;
//}
//
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)//��ȡ�ɹ��ͷ��ض�ȡ������ʧ�ܷ���EOF
//	{
//		if (ch >= 'a' && ch <= 'z')
//		{
//			printf("%c\n", ch - 32);
//		}
//		else if (ch >= 'A' && ch <= 'Z')//�ϸ����Ʒ�Χ��ȷ�������ַ���\n�������
//			printf("%c\n", ch + 32);
//	}
//	return 0;
//}
//#include<ctype.h>
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)//��ȡ�ɹ��ͷ��ض�ȡ������ʧ�ܷ���EOF
//	{
//		if (islower(ch))//�ж�Сд��СдΪ��
//		{
//			printf("%c\n", toupper(ch));//��дת��
//		}
//		else if (isupper(ch))//�жϴ�д����дΪ��
//			printf("%c\n", tolower(ch));//Сдת��
//	}
//	return 0;
//}

//�ж������ǲ�����ĸ
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)//Ҳ���Բ���getchar����%cǰ��Ӹ��ո���˼��scanf��������һ���ַ�ǰ�����пհ��ַ�
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

//����λ���ı���ˮ�ɻ���

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

//�ж�������
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
//			printf("�۽�������\n");
//		}
//		else if (cosc == 0 || cosa == 0 || cosb == 0)
//		{
//			printf("ֱ��������\n");
//		}
//		else
//		{
//			printf("���������\n");
//		}
//	}
//	else
//		printf("�޷�����������\n");
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
//				printf("����������");
//			}
//			else if (a == c && a != b)
//			{
//				printf("����������");
//			}
//			else if (b == c && b != a)
//			{
//				printf("����������");
//			}
//			else
//				printf("�ȱ�������");
//		}
//		else
//		{
//			printf("��ͨ������\n");
//		}
//	}
//	else
//		printf("�޷�����������\n");
//	return 0;
//
//}

//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�������������ˮ(���ʵ��)

//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int get = money;//�õ�����ˮ
//	int empty = money;//��ƿ����
//	while (empty >=2)
//	{
//		get+= empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", get);
//	return 0;
//}

//��һ�����ֵ���������ż��ǰ�棬���
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

//�������кϲ����

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
