#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

//1.�������֣�����Ϊ1��ż��Ϊ0
//ʾ����123->101
//void print(int a)
//{
//	int sum = 0;
//	int i = 0;
//	while (a)
//	{
//		if ((a % 10) % 2 == 1)//����
//		{
//			sum+=1 * (int)pow(10, i);
//		}
//		a /= 10;
//		i++;
//	}
//	printf("%d\n", sum);
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}

//2.���ֱ��������
//5
//        *
//      * *
//    * * *
//  * * * *
//* * * * *
//�Լ��ķ���
//int main()
//{
//	int input;
//	scanf("%d", &input);
//	int  i = 0,j = 0;
//	for (j = 0; j < input; j++)
//	{
//		for (i = 0; i < (input - 1 - j)*2; i++)
//		{
//			//��ӡ�ո�
//			printf(" ");
//		}
//		for (i = 0; i < j + 1; i++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//���򵥵ķ���
//int main()
//{
//	int input;
//	scanf("%d", &input);
//	int  i = 0,j = 0;
//	for (j = 0; j < input; j++)
//	{
//		for (i = 0; i < input; i++)
//		{
//			if (i + j < input - 1)
//			{
//				printf("  ");
//			}
//			else
//			{
//				printf("* ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}

//3.�ж�����������

//int main()
//{
//	unsigned char a = 200;
//	//��д��200��ԭ��
//	//00000000 00000000 00000000 11001000
//	//�ضϴ洢-1100 1000
//	unsigned char b = 100;
//	//��д��100��ԭ��
//	//00000000 00000000 00000000 00101100
//	//�ضϴ洢-0010 1100
//	unsigned char c = 0;
//	c = a + b;
//	//a+b�漰���������������
//	//���������������������ķ���λ������unsigned char�����λ���Ƿ���λ������Чλ������ֱ�Ӳ�0
//	//a-00000000 00000000 00000000 11001000
//	//b-00000000 00000000 00000000 01100100
//	//  00000000000000000000000001 00101100 - a+b��300��
//	//���Ҫ����c��c��������unsigned char��ֻ�ܴ�8λ���ضϴ洢0010 1100 - 44
//	printf("%d %d", a + b, c);
//
//	return 0;
//}

//4.5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������:
//Aѡ��˵:B�ڶ����ҵ���;
//Bѡ��˵:�ҵڶ���E����;
//Cѡ��˵:�ҵ�һ��D�ڶ�;
//Dѡ��˵:C����ҵ���;
//Eѡ��˵:�ҵ��ģ�A��һ;
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�

//int main()
//{
//	int a, b, c, d, e;
//	for (a = 0; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if ((b == 2) + (a == 3) == 1
//							&& (b == 2) + (e == 4) == 1
//							&& (c == 1) + (d == 2) == 1
//							&& (c == 5) + (d == 3) == 1
//							&& (e == 4) + (a == 1) == 1)//�ص������ֱ�ʾ�ķ�ʽֵ��ѧϰ����ʵ����������Ϊ�������
//						{
//							if (a* b* c* d* e == 120)
//							{
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//5.�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ��
//����Ϊ4�����ɷ��Ĺ���:
//A˵:�����ҡ�
//B˵: ��C��
//C˵: ��D��
//D˵: C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���

//��xΪ���֣�a=1,b=2,c=3,d=4
//#include<ctype.h>
//int main()
//{
//	int x;
//	for (x = 1; x <= 4; x++)
//	{
//		if ((x != 1) + (x == 3) + (x == 4) + (x != 4) == 3)
//		{
//			printf("%c������\n", toupper(x + 96));
//		}
//	}
//	return 0;
//}

//6.��ӡ�������

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[5][5] = { 0 };
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0 || i==j)
//			{
//				arr[i][j] = 1;
//			}
//			else if (i>1 && j>0)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//
//		}
//	}
//	int n = 0;
//	for (i = 0; i < 5; i++)
//	{
//		for (n = 0; n < 4 - i; n++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//7.�ַ�������ת
//����תһ���ַ�ABCD->BCDA
//����ת�����ַ�ABCD->CDAB
//#include<string.h>
//int main()
//{
//	char src[10] = { 0 };
//	char dest[20] = { 0 };
//	int k = 0;
//	scanf("%s %d", src,&k);
//	int sz = strlen(src);
//	memmove(src+sz, src, k);
//	printf("%s\n", src+k);
//	return 0;
//}
//void leftmove(char arr[], int k)
//{
//	while (k--)
//	{
//		char m = arr[0];
//		int i = 1;
//		while (arr[i])
//		{
//			arr[i - 1] = arr[i];
//			i++;
//		}
//		arr[i - 1] = m;
//	}
//}
//int main()
//{
//	char a[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	leftmove(a, k);
//	printf(a);
//	return 0;
//}

//���Ͼ���
//8.��һ�����־���,�����ÿ�д������ǵ�����,������ϵ����ǵ�����,
//���д�����������ľ����в���ĳ�������Ƿ���ڡ�
//Ҫ��:ʱ�临�Ӷ�С��0(N);
//�����ܲ���ʵ�ֶ�β���
//struct coor 
//{
//	int x;
//	int y;
//};
//struct coor find(int arr[3][3], int r, int c, int k)
//{
//	int x = 0;
//	int y = c - 1;//��ʾ���Ͻ�λ��
//	struct coor p = { -1,-1 };
//	while (x <= r - 1 && y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			p.x = x;
//			p.y = y;
//			return p;
//		}
//	}
//	return p;
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,2,3,4,3,4,5 };
//	int k = 0;
//	scanf("%d", &k);
//	struct coor p=find(arr, 3, 3, k);
//	printf("%d %d\n", p.x, p.y);
//	return 0;
//}

//9.�ж�һ���ַ����ǲ���������һ���ַ�����ת����
//bcdefa������abcdef��ת������FABCDE����
#include<string.h>
//����1
//int is_turn(char arr1[], char arr2[])
//{
//	int  len = strlen(arr1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		int j = 0;
//		char tmp = arr1[0];
//		for (j = 0; j < len - 1; j++)
//		{
//			arr1[j] = arr1[j + 1];
//		}
//		arr1[len - 1] = tmp;
//		if (strcmp(arr1, arr2) == 0)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	char pre[] = "abcdef";
//	char rep[] = "cdefab";
//	int ret = is_turn(pre, rep);
//	if (ret == 1)
//		printf("ok\n");
//	else
//		printf("no\n");
//	return 0;
//}
//����2 
//int is_turn1(char arr1[], char arr2[])
//{
//	size_t len1 = strlen(arr1);
//	size_t len2 = strlen(arr2);
//	if (len1 != len2)
//		return 0;
//	strncat(arr1, arr1, len1);
//	if (strstr(arr1, arr2) != NULL)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	char pre[20] = "abcdef";
//	char rep[] = "cdefab";
//	int ret = is_turn1(pre, rep);
//	if (ret == 1)
//		printf("ok\n");
//	else
//		printf("no\n");
//	return 0;
//}

//10.ʵ��ת�þ���
//��1 2 3
//  4 5 6
//ת��1 4
//    2 5
//    3 6

//int main()
//{
//	int arr[2][3] = { 1,2,3,4,5,6 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 2; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//11.����һ����ά���飬���һ����Ч�ķ�ֵ���ҳ���

//int main()
//{
//	int arr1[5][6] = { 0 };
//	int arr2[3][4] = { 1,2,3,4,5,6,14,8,9,10,15,12 };
//	int i = 0;
//	for (i = 1; i < 4; i++)
//	{
//		int j = 0;
//		for (j = 1; j < 5; j++)
//		{
//			arr1[i][j] = arr2[i - 1][j - 1];
//		}
//	}
//	for (i = 1; i < 4; i++)
//	{
//		int j = 0;
//		for (j = 1; j < 5; j++)
//		{
//			if (arr1[i][j] > arr1[i - 1][j]
//				&& arr1[i][j] > arr1[i - 1][j - 1]
//				&& arr1[i][j] > arr1[i][j - 1]
//				&& arr1[i][j] > arr1[i + 1][j - 1]
//				&& arr1[i][j] > arr1[i + 1][j]
//				&& arr1[i][j] > arr1[i + 1][j + 1]
//				&& arr1[i][j] > arr1[i][j + 1])
//			{
//				printf("%d %d\n", i, j);
//			}
//		}
//	}
//	return 0;
//}

//12.��Ƴ����ж�һ�������Ƿ����������Ǿ���
//�����Ǿ�����ָ���ϵ����¶Խ�������Ԫ��ȫΪ0

//int  main()
//{
//	int arr[3][3] = { 1,2,3,0,1,2,0,0,1 };
//	int i = 0;
//	int judge = 1;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < i; j++)
//		{
//			if (arr[i][j] != 0)
//			{
//				judge = 0;
//				goto end;
//			}
//		}
//	}
//end:
//	if (judge)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}

//13.��ӡ����

//int  main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i=0;i<n)
//
//	return 0;
//}


//14.��ά�������һ����ֵ
//struct point
//{
//	int x;
//	int y;
//};
//
//struct point localmax_find(int arr[5][5], int raw, int col)
//{
//	struct point p = { 0 };
//	int up = 0;
//	int down = raw - 1;
//	while (up <= down && up >= 0 && up <= raw - 1 && down>=0 && down <= raw - 1)
//	{
//		int mid = (up + down) / 2;
//		int i = 0;
//		int j = 0;
//		int rawmax = 0;
//		for (i = 0; i < col; i++)
//		{
//			if (arr[mid][i] > rawmax)
//			{
//				rawmax = arr[mid][i];
//				p.x = mid;
//				p.y = i;
//				j = i;
//			}
//		}
//		if (arr[mid][j] >= arr[mid - 1][j] && arr[mid][j] >= arr[mid + 1][j])
//			return p;
//		else if (arr[mid][j] < arr[mid - 1][j])
//		{
//			down = mid - 1;
//		}
//		else if (arr[mid][j] < arr[mid + 1][j])
//		{
//			up = mid + 1;
//		}
//	}
//}
//int main()
//{
//	int arr[5][5] = { 1,2,4,3,5,4,3,3,2,1,2,4,2,2,1,3,5,2,10,4,1,2,13,10,5};
//	struct point p=localmax_find(arr, 5, 5);
//	printf("%d %d\n", p.x, p.y);
//	return 0;
//}

//15.����һ�����У��ж��Ƿ����������򶼿���
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int arr[20] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int flag1 = 0;
//	int flag2 = 0;
//	for (i = 0; i < n-1; i++)
//	{
//		if (arr[i] > arr[i + 1])
//		{
//			flag1 = 1;
//		}
//		else if (arr[i] < arr[i + 1])
//		{
//			flag2 = 1;
//		}
//	}
//	if (flag1 == 1 && flag2 != 1)
//		printf("����\n");
//	else if (flag2 == 1 && flag1 != 1)
//		printf("����\n");
//	else
//		printf("����\n");
//	return 0;
//}

//16.�����������������Լ������󹫱����ĺ�

//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d%d", &a, &b);
//	int max, min;
//	int n, m;
//	max = a > b ? a : b;
//	min = a <= b ? a : b;
//
//	int i = 0;
//	for (i = min; i<=min; i--)
//	{
//		if (max % i == 0 && min % i == 0)
//		{
//			n = i;
//		}
//		break;
//	}
//	for (i =max; i >= max; i++)
//	{
//		if (i % max == 0 && i % min == 0)
//		{
//			m = i;
//		}
//		break;
//	}
//	printf("%d\n", n + m);
//	return 0;
//}//ʱ�临�Ӷȹ���

//�Ľ���
//շת��������Լ��
//������˳����Լ������С������
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d%d", &a, &b);
//	int max, min;
//	int n, m;
//	max = a > b ? a : b;
//	min = a <= b ? a : b;
//	int i = max;
//	int  j = min;
//	while (i % j)
//	{
//		int tmp = i % j;
//		i = j;
//		j = tmp;
//	}
//	n = j;
//	m = max * min / j;
//	printf("%d\n", n + m);
//	return 0;
//}

//17.��ӡ����������
//����һ������
//int main()
//{
//	int  input = 0;
//	scanf("%d", &input);
//	int i = 0;
//	for (i = 0; i < input; i++)
//	{
//		printf("* ");
//	}
//	printf("\n");
//	int ret = input;
//	while (input - 2)
//	{
//		printf("* ");
//		int j = 0;
//		for (j = 0; j < (ret-2)*2; j++)
//		{
//			printf(" ");
//		}
//		printf("* ");
//		printf("\n");
//		input--;
//	}
//	for (i = 0; i < ret; i++)
//	{
//		printf("* ");
//	}
//	return 0;
//}

//������
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	int i = 0,j=0;
//	for (i = 0; i < input; i++)
//	{
//		for (j = 0; j < input; j++)
//		{
//			if (i == 0 || i == input - 1 || j == 0 || j == input-1)
//			{
//				printf("* ");
//			}
//			else
//			{
//				printf("  ");
//			}
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//18.��ӡ����ͼ��
//����3
//      *
//    **
//  ***
//****
//  ***
//    **
//      *
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int col = 1;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n - i; j++)
//		{
//			printf("  ");
//		}
//		int num = 0;
//		for (num = 0; num < col; num++)
//		{
//			printf("*");
//		}
//		col++;
//		printf("\n");
//	}
//	for (i = 0; i < n + 1; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	col = n;
//	for (i = n; i >0; i--)
//	{
//		int j = 0;
//		for (j = 0; j < n - i+1; j++)
//		{
//			printf("  ");
//		}
//		int num = 0;
//		for (num = 0; num < col; num++)
//		{
//			printf("*");
//		}
//		col--;
//		printf("\n");
//	}
//	return 0;
//}