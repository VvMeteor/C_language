#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//ָ�������

//int main()
//{
//	int a = 0x11223344;//0x��ʾ16���ƣ�11223344��ռ4���ֽڣ�1ռ����ֽڣ�����������λ��ʾ
// //��Ϊ����һ�����͵�2���ƣ���32λ��ɣ�ÿ��λ�������ֵ��Χ����һλʮ���������ֵķ�Χ
// ����0000~1111����0��15���Ǿ���һ��ʮ���������ֱ�ʾ�Ϳ����ˣ�����ʮ�����ƻ���8�����֣�ÿ������ռ����ֽڣ���4��bit
//	int* pa = &a;
//	char* pb = &a;//�����Դ�ŵ�ַ
//	*pa = 0;//��Ϊ��int*���͵�ָ�룬�����õ�ʱ�����һ���Է��ʺ��޸�4���ֽڣ�
//  ע��������ʵĲ���ָ����������ʺ�������Ҳ����ָ���������ֽڣ����ǴӴ�ŵ�ַ��ʼ������Ĵ洢���ַ��������͵��ֽڣ����ڴ�ռ䣩��
//	*pb = 0;//ֻ�ܷ���1���ֽں��޸�
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("pa=%p\n", pa);
//	printf("pa+1=%p\n", pa+1);
//	printf("pc=%p\n", pc);
//	printf("pc+1=%p\n", pc+1);
//
//	return 0;
//}
//ָ����������;�����pa+-1ʱ�������ֽ���

//�����ֽ����������ֽ���һ��Ҳ�ǲ���ͨ�õģ���Ϊ�洢��ʽ�ǲ�һ����

//Ұָ��
//1.δ��ʼ��
//int main()
//{
//	int* p;//pû�г�ʼ������ζ��pû����ȷ��ָ��
//	//һ���ֲ�����δ���г�ʼ�������õ������ֵ
//	*p = 10;//�Ƿ������ڴ棬p����Ұָ��
//	return 0;
//}
////2.ָ��Խ�����
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = i;
//		p++;//��11��ѭ��ʱ��ָ������ó������鷶Χ���γ�Ұָ��
//	}
//	return 0;
//}
////3.ָ��ָ��Ŀռ��ͷ�
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();//��Ϊ�����ַָ����Ǻ�����ľֲ�����a�����������ý����󣬾��޷�������
//	*p = 20;//����p�ͳ���Ұָ�룬��Ȼ���ҵ�a�ĵ�ַ�����ǲ��ܷ��ʺ��޸�
//	return 0;
//}

//ָ��Ӽ�����
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		//*p++ = 1;
//		//arr[i] = 1;
//		*(p + i) = 1;
//
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",arr[i]);
//
//	}
//	return 0;
//}

//ָ��-ָ��
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}

//ָ��-ָ��ʵ��mystrlen
//int mystrlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	char str[] = "abcdef";
//	int a=mystrlen(str);
//	printf("%d\n", a);
//	return 0;
//}

//ָ���ϵ����
//#define v 5
//int main()
//{
//	int i = 0;
//	int arr[v] = { 0 };
//	int* p = &arr[v];
//	for (p; p > arr;)
//	{
//		*--p = 1;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//
//#define v 5
//int main()
//{
//	int i = 0;
//	int arr[v] = { 0 };
//	int* p = &arr[v]-1;
//	for (p; p >= arr;p--)//������ѭ���漰��ָ���һ��Ԫ��ǰ�����һ���ڴ�ռ��뱾�ռ��ڵ�ַ�ıȽ�
//    //���Ǳ�׼������ģ���׼�����ռ���֮��Ƚϣ����ռ������һ��Ԫ�غ������һ��ռ���бȽ�
//	{
//		*p = 1;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//arr[i]�����㱾�����ҵ�arr+i,�ڶ�����н�����*��arr+i��

//����ָ��

//int main()
//{
//	int a = 0;
//	int* pa = &a;//pa��һ��ָ�����,ָ��a��*����˼�Ǹñ���Ϊָ�������int����ָ������ͣ�pa����������
//	int** ppa = &pa;//ppa�Ƕ���ָ�������ָ��pa��*����˼�Ǹñ���Ϊָ���������ָ���������int*��ppa����������
//	return 0;
//}

//ָ������
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int i = 0;
//	int* parr[10] = { &a,&b, & c };
//	for (i = 0; i < 3; i++)
//	{
//		printf("%p ", parr[i]);
//	}
//	return 0;
//}

//�����ά����

//int main()
//{
//	int arr1[4] = { 1,2,3,4 };
//	int arr2[4] = { 2,3,4,5 };
//	int arr3[4] = { 3,4,5,6 };
//	int* parr[3] = { arr1,arr2,arr3 };//arr1��Щ����������Ԫ�ص�ַ�����Դ���ָ���������洢
//	int i = 0, j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//��ϰ��1

//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;//ǿ������ת����arrԭ����û�䣬����1����ռ4���ֽڣ���ʮ�����Ʊ�ʾ����
//	//0x 00 00 00 01,���ڴ��д�ŵ�ʱ������01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 00 05 00 00 00 00
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;//short*���͵�ָ�������һ��ֻ�ܷ��������ֽڣ���һ�ΰ�10 00�ĳ�00 00��
//		//�ڶ���i=1����2���ֽڰ�00 00�ĳ�00 00�������ΰ�02 00�ĳ�00 00�����Ĵθ�00 00 Ϊ00 00
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//��ϰ��2
//�ַ�������
//#include<string.h>
//int main()
//{
//	char ch[10] = { 0 };
//	scanf("%s", ch);//scanf�����ո��ֹͣ���գ���gets������������
//	int n = strlen(ch);
//	int i = 0;
//	char* p = (char*) & ch;
//	for (i = n - 1; i >=(n/2); i--)
//	{
//		char m = *p;
//		*(p) = *(ch + i);
//		*(ch + i) = m;
//		p++;
//
//	}
//	printf("%s\n", ch);
//	return 0;
//}
//����
//#include<string.h>
//int main()
//{
//	char ch[10] = { 0 };
//	gets(ch);
//	int n = strlen(ch);
//	int i = 0, j = 0;
//	char m = 0;
//	for (i=0;i<n-1;i++)
//	{
//		for (j=0;j<n-i-1;j++)
//		{
//			if (ch[j] > ch[1 + j])
//			{
//				m = ch[j];
//				ch[j] = ch[j + 1];
//				ch[j + 1] = m;
//			}
//		}
//	}
//		printf("%s\n", ch);
//	return 0;
//}

//��ӡ����

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int line = (n + 1) / 2;
//	//��
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//�ո�
//		int j = 0;
//		for (j = 0; j < line - 1-i; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��
//	for (i = 1; i < line; i++)
//	{
//		//�ո�
//		int j = 0;
//		for (j = 0; j < i; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j < 2 * line-1-i*2; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//ָ�����
//�ַ�ָ��
//int main()
//{
//	const char* p1 = "abcdef";//���ﲻ�ǰ�abcdef���p���棬p���ַ���ָ���������С4���ֽڷŲ��£�����p�д�ŵ����ַ��������ַ�a�ĵ�ַ��
//	const char* p2 = "abcdef";//�����ַ������洢��ֻ���ռ䣬�����޸ģ�ֻ���һ��
//	char arr1[] = "abcdef";//�����ֲ������������ַ�������Ԫ�ص�ַ������ͬ
//	char arr2[] = "abcdef";
//
//	if (p1 == p2)
//	{
//		printf("p1=p2\n");//��ָ��ֻ���ռ����ͬһ���ַ�����������ͬ
//	}
//	else
//		printf("p1!=p2\n");
//	if (arr1 == arr2)
//	{
//		printf("arr1=arr2\n");
//	}
//	else
//		printf("arr1!=arr2\n");
//	printf("%s\n", p1);//%s��ӡ����һ����ַ�Ϳ�ʼ��ӡ��ֱ������\0
//	return 0;
//}

//ָ������
//int main()
//{
//	int arr1[] = { 1,2,3 };
//	int arr2[] = { 2,3,4 };
//	int arr3[] = { 3,4,5 };
//
//	int* parr[3] = { arr1,arr2,arr3 };//�����ά�������ʵ��ά�������������ǰ������Ԫ�ز�һ��������ţ�����һ����������ŵ�
//	int i = 0, j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����ָ��
// int (*p)[10]

//int main()
//{
//	int arr[10] = { 0 };
//	char* ch[5] = {0};
//	char* (*p)[5] = &ch;//ָ�����������ָ��
//	int* p1 = arr;//p1Ϊ������Ԫ�ص�ַ
//	int (*p2)[10] = &arr;//p2Ϊ��������ĵ�ַ������Ϊint (*)[10]
//	return 0;
//}
//����ָ�벻���ʵ��÷�
//int main()
//{
//	int arr[] = { 1,2,3 };
//	int (*p)[3] = &arr;//���������һ��Ҫ����������ȻĬ��Ϊ0
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(*p + i));//p��ָ������ģ�*p�൱������������������������Ԫ�ص�ַ��*p����������Ԫ�ص�ַ
//	}
//	return 0;
//}
//��ȷ�÷�
//void print(int(*p)[2], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p+i) + j));//p��������int (*)[3],ָ��һ����������3��Ԫ�أ���1����3��int���͵���������
//			//printf("%d ",p[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int* p, int a)
//{
//	;
//}
//int main()
//{
//	int arr[2][3] = { 1,2,3,4,5,6 };
//	int arr1[3]= { 1,2,3 };
//	print1(arr1, 3);
//	print(arr, 2, 3);
//	return 0;
//}

//int arr1[5];arr1Ϊ��������
//int* arr2[5];arr2Ϊָ������
//int (*parr1)[5];parr1������ָ��
//int (*parr2[10])[5];parr2�Ǵ������ָ������飬���������ʮ��Ԫ�أ�ÿһ��Ԫ�ض�������ָ������int ��*��[5]

//���������ָ�����
//һά���鴫��
//void test(int arr[])
//void test(int* arr)
//void test1(int* arr[])
//void test1(int** arr)
//
//int main()
//{
//	int arr1[10] = { 0 };
//	int* arr2[10] = { 0 };
//	test(arr1);
//	test1(arr2);
//	return 0;
//}
//��ά���鴫��
//void test(int arr[][5])
//void test(int* arr)//���󣬴�����͵�ַ�� ָ����ܲ���һ������
//void test(int** arr)//����
//void test(int (*arr)[5])//��ȷ����Ϊ���������ǵ�һ������ĵ�ַ
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}

//һ��ָ�봫��
//void print(int* p)
//{
//	;
//}
//int main()
//{
//	int a = 0;
//	int* p = &a;
//	int arr[5] = { 0 };
//	print(&a);
//	print(p);
//	print(arr);
//	return 0;
//}

//����ָ�봫��
//void print(int** p)
//{
//	;
//}
//int main()
//{
//	int a = 0;
//	int* p = &a;
//	int** pp = &p;
//	int* arr[10];//ָ������
//	print(pp);
//	print(&p);
//	print(arr);
//	return 0;
//}

//����ָ��
//int add(int x, int y)
//{
//	return x + y;
//}
//void test(int (*p)(int, int))
//{
//	int a = 1, b = 2;
//	int c=(*p)(a, b);
//	printf("%d\n", c);
//}
//int main()
//{
//	printf("%p\n", &add);
//	printf("%p\n", add);
//	int (*p1)(int,int) = &add;//p1�Ǻ���ָ�룬()��ʾָ��������������Ǻ����������ͣ���ǰ���int�Ƿ�������
//	int (*p2)(int, int) =add;//����ָ��������ǿ�����ʱ���ã��޸ĺ���
//	printf("%p\n", p1);
//	printf("%p\n", p2);
//	int ret = (*p1)(5, 8);//ʵ���������*û�����ã�д���ٸ�������ν����p1(5,8)һ��������Ҫд�Ļ��ͼ����ţ�ԭ����&�������ͺ��������Ǻ����ĵ�ַ����p��*pҲһ��
//	printf("%d\n", ret);
//	test(add);
//	return 0;
//}


//C������ȱ��
//int main()
//{
//	(*(void (*)())0)();//�⴮���뱾����һ�κ�������void (*)()���޷���ֵ���޲εĺ������ͣ�(void (*)())��ǿ������ת������0ǿ������ת��Ϊ����ָ��
//	//*�ٽ��н�����,���ú���
//	return 0;
//}
//void(* signal(int,void (*)(int)))(int);
//����һ�κ���������signal�Ǻ���������������һ����int��һ���Ǻ���ָ�룬signal����ֵ����Ҳ�Ǻ���ָ�����ͣ�signal���������صĵ�ַ��ָ��ĺ���������Ϊint���޷���ֵ

//����ָ�����;

//ʵ��һ���򵥼�����
void print()
{
	printf("*****************************\n");
	printf("********1.�ӷ� 2.����********\n");
	printf("********3.�˷� 4.����********\n");
	printf("********    0.�˳�   ********\n");
	printf("*****************************\n");

}
int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}
void calc(int (*p)(int, int))
{
	int x = 0, y = 0;
	printf("�������������");
	scanf("%d%d", &x, &y);
	printf("%d\n",p(x, y));
}
int main()
{
	int input = 0;
	do
	{
		print();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{
			calc(add);
			break;
		}
		case 2:
		{
			calc(sub);
			break;
		}
		case 3:
		{
			calc(mul);
			break;
		}
		case 4:
		{
			calc(div);
			break;
		}
		case 0:
		{
			printf("�˳�\n");
			break;
		}
		default:
			printf("err!\n");
			break;
		}
	} while (input);
	return 0;
}