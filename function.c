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
////��������һ��ָ���������Ϊ���������鿽����ռ�ÿռ�̫�����������sz���ں�����������ķ�ʽҲ�ǲ��Եġ�
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
int main()
{
	int a = 10;
	int b = 20;
	int c = a + b;
	printf("%d\n", c);
	return 0;
}