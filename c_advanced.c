#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//1.��֧����ѭ�����

//1.1��֧��䣺if���
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
//		printf("����\n");//Ĭ��if��߸�һ����䣬���Ҫ�࣬��Ҫ��{}
//		printf("������\n");
//	}
//	else
//		printf("δ����\n");
//	return 0;
//}

//���֧
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("������\n");
//	//else if (18<=age<28)
//	// printf��"����\n"���ǻ��ӡ�����ģ���Ϊ��������ж�age=18��С��18�ģ�����18<=age<28ǰ��Ϊ�٣�Ϊ0����0<28������if�ж�Ϊ�棬��ӡ
//	else if (age >= 18 && age < 28)
//		printf("����\n");
//	else if (age >= 28 && age < 40)
//		printf("����\n");
//	else if (age >= 40 && age < 60)
//		printf("׳��\n");
//	else if (age >= 0 && age < 100)
//		printf("����\n");
//	else 
//		printf("������\n");
//	return 0;
//}

//�״�㣨else�ľͽ�ԭ��
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else
//		printf("haha\n");//else�������if���䣬���Ե�a������1�����򲻽���if��䣬��ô�����Ĵ�ӡ����Ҳ����ִ��
//	return 0;
//}
//�൱��
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
//����취�����ϴ����
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

//�״�㣨return��
//int test()
//{
//	int a = 3;
//	if (a == 3)//Ҳ����д��if ��3==a����һ������һ��=�ͻᱨ�����Լ�ʱ���ִ���
//		return 1;
//	return 0;
//}//�����漰��return�����ԣ�һ�������ֻ��returnһ�Σ�����һ��ֵ��if�жϳ����ͷ���1������ִ��return0��if��������return0
//int main()
//{
//	int r = test();
//	printf("%d\n", r);
//	return 0;
//}

//��ϰ���ж��Ƿ�Ϊ����
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 == 1)
//		printf("����");
//	else
//		printf("no");
//	return 0;
//}

//��ϰ�����1~100������
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

//switch���÷�
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	    case 1://Ҳ�������ַ����ַ��洢�ǰ�ASCIIֵ�洢������Ҳ������
//			printf("����1\n");
//			break;//����break���һֱ����ִ�У���������ѡ��
//		case 2:
//			printf("����2\n");
//			break;
//		case 3:
//			printf("����3\n");
//			break;
//		case 4:
//			printf("����4\n");
//			break;
//		case 5:
//			printf("����5\n");
//			break;
//		case 6:
//			printf("����6\n");
//			break;
//		case 7:
//			printf("������\n");
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
//	default://����case��û�б�ִ�оͻᵼ��˴�
//		printf("error");
//		break;
//	}
//	return 0;
//}

//ѭ�����while
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			break;//breakֱ����ֹѭ��
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
//			continue;//continue��������������룬ֱ�ӵ���һ��ѭ��,����i����5ʱ��һֱ������ѭ������Ϊ�����i++�������ˣ�Ҳ�����ӡ
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
//	while ((ch = getchar()) != EOF)//ע������ch=getchar()��Ҫ�����ţ�EOF����˼������������ַ��ͽ���ѭ��
//	//getchar�����ܽ�������ַ���ASCII��ֵ��ȡ��������������������õ�EOF
//	//����һ���ַ�ʱ����Ҫ��һ��enter����\n�Ż����г��򣬴�ʱgetchar��ֱ��ȡ�ַ��͡�\n�����Դ�ӡЧ���ỻ��
//	{
//		putchar(ch);//����printf("%c\n",ch);
//	}
//	return 0;
//}

//int main()
//{
//	char password[20]= {0};//password[20]Ϊ�������ͣ��������ַ��������ʼ����20Ϊ�洢�ռ䣬Ҳ����char password=0��'\0'����{0}��ʼ���������c��&Ҫ��Ӧ�Ķ�
//	//�м�'0'��0��{0}������
//	printf("���������룺");
//	scanf("%s",password);//����scanf���ַ�������ʽ��ӡ����password���ַ�Ԫ�أ���Ϊ�����password����&����Ϊ������ʱ���Ѿ���password��Ϊ��ַͷչ���ռ���
//	//char password ='0';
//	//scanf("%c",&password);�����Գ����ַ���ʽ�Ĳ���
//	int ch = 0;//��int����ʽ����������Ϊgetchar�ķ��������ַ�������Ҳ�����ͣ���char����ֻ�ܴ洢1���ֽڣ����������EOF���Ǵ�СΪ4���ֽڣ���ʱ��int��������������洢
//	while ((ch = getchar()) != '\n')//getchar��\n����֮ǰ���ַ������ո�ȫ����ȡ������Ϊscanfֻ����ȡ�ո���ǰ�����ݣ������ո�ֹͣ��ȡ��
//		//�������ַ��������ȡ��ʵ�����벻һ��
//	
//	{
//		;
//	}
//	printf("��ȷ������(Y/N)");
//	int ch2 = getchar();//��ʱ���뻺����û���ַ���ֻ�ܵȴ�����
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
//��ϰ��1
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

//��ϰ��2
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year, &month, &date);//%������ִ�����ȡ�ĸ���
//	printf("year=%4d\n", year);
//	printf("month=%02d\n", month);//02��ʾ��ȡ��λ���֣��������һλ����Ϊ0Ҳ������ʾ�������������20130125������ֻ��� 1
//	printf("date=%02d\n", date);
//
//	return 0;
//}

//��ϰ��3
//int main()
//{
//	int id = 0;
//	float math = 0.0f;//double���͵ľ��ȸ���float��ȥ��f����double����
//	scanf("%d;%f", &id, &math);
//	printf("%d;%0.2f", id, math);
//	return 0;
//}

//��ϰ��4
//int main()
//{
//	int a = printf("hello world!");
//	printf("\n%d\n", a);//��%dǰ���\n��ԭ���Ǻʹ�ӡ��hello world����
//	return 0;
//}

//��ϰ��5
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
//		scanf("%d", &arr[i]);//���������е�ĳ��Ԫ������Ҫȡ��ַ��
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

//forѭ��

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)//forѭ�����������ֶ�����ʡ�ԣ�ʡ���жϲ���˵���жϻ�����
//	{ 
//		if (i == 5)
//			//break;
//			continue;//����ֻ�����������printf��������ת��i++
//	    printf("%d ", i);
//	}
//	return 0;
//}

//�������ʽ��ò�Ҫʡ��
//int main()
//{
//	int i, j = 0;//����ֻ��j��ʼ���ˣ�a��ʵû�б���ʼ��
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//			printf("hehe\n");//���9��hehe
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0,j = 0;
//	for (; i < 3; i++)
//	{
//		for (; j < 3; j++)
//			printf("hehe\n");//���3��hehe
//	}
//	return 0;
//}

//�״��

//int main()
//{
//	int x = 0, y = 0;
//	for (x = 0, y = 0; y = 0; x++, y++)//��Ϊy=0�Ǹ�ֵ����0���Ǽ٣�����ѭ��0��
//		printf("hehe");
//	return 0;
//}

//do...whileѭ��

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;//��ѭ��
//		printf("%d\n", i);
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}

//��ϰ�����n�Ľ׳�
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
//��ϰ�����1��+2��+3��+...+n!
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

//����2
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

//��ϰ����ַ�����
//��һ�����������в���ĳ�����ֵ��±�
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
//	int k = 13;
//	int sz = sizeof(arr) / sizeof(arr[0]);//��Ԫ�ظ���
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (k > arr[mid])
//		{
//			left = mid + 1;//��С��Χ
//		}
//		else if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±���%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���");
//	return 0;
//}

//��ϰ����
//#include<string.h>
//#include<windows.h>//����Sleep
//#include<stdlib.h>//����system
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
//		Sleep(2000);//2000�ĵ�λ��ms
//		system("cls");//�����Ļ;system��һ���⺯��������ִ��ϵͳ����
//	}
//	printf("%s", arr2);
//	return 0;
//}

//��ϰ����
#include<string.h>
//int main()
//{
//	int i = 0;
//	char s[20];//������123456789
//	while (i < 3)
//	{
//		printf("�������룺");
//		scanf("%s", s);
//		if (strcmp(s, "123456789") == 0)//�Ƚ������ַ����Ƿ���Ȳ�����==��Ҫ�ÿ⺯��strcmp�������ȣ�����0
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//			printf("�������\n");
//		i++;
//	}
//	if (i ==3)
//		printf("��������������룬�˳�����\n");
//	return 0;
//}

//��ϰ���壺���С��Ϸ������
//����1~100��������֣���������
//#include<stdio.h>
//#include<stdlib.h>//srand��randʹ����Ҫ����
//#include<time.h>//����ʱ���time
//void guess()//��������Ϸ�����к���
//{
//	int j = 0;
//	int random = rand() % 100 + 1;//����1~100���������rand������0~RAND_MAX��һ������������������Ľ���̶���������Ҫsrand
//	while (1)
//	{
//		scanf("%d", &j);
//		if (random < j)
//			printf("�´���\n");
//		else if (random>j)
//			printf("��С��\n");
//		else
//		{
//			printf("��ϲ�㣬�¶��ˣ�\n");
//			break;//ֱ���¶��˲�������ѭ��
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	srand((unsigned int)time(NULL));//srand����ʱ���timeЭ��rand�����������time��������Ҫһ��ָ�����������NULL������ʼ��
//	//time()���Ի�ȡʱ���������һ����ʱ��仯��ֵ����������srand�������Ҫ��
//	do
//	{
//		printf("****************\n");
//		printf("*****1.play*****\n");
//		printf("*****1.exit*****\n");
//		printf("****************\n");
//		printf("��ѡ��");
//		scanf("%d", &i);
//		if (1 == i)
//		{
//			printf("������\n");
//			guess();
//		}
//		else if (0 == i)
//		{
//			printf("�˳���Ϸ\n");
//			break;
//		}
//		else
//			printf("�������������������\n");
//
//	} while(i);
//	return 0;
//}

//goto����ʹ�ó���
//int main()
//{
//	char ch[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("���Խ���60s���Զ��ػ��������룺\"������\"ȡ���ػ�\n");
//	scanf("%s", ch);
//	if (strcmp(ch, "������")==0)
//	{
//		system("shutdown -a");
//	}
//	else
//		goto again;
//	return 0;
//}

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
//���������֮ǰ��ͬ���ǣ����ｫʵ�ʲ����ĵ�ַ���������������˸�Ϊ�ȹ̵���ϵ��
//�����Ϳ���ͨ����ַ���ҵ�ʵ�ʲ���������������޸ģ���ɽ�����Ч����
