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
int main()
{
	char ch = 's';
	printf("%zu\n", sizeof('s'));
	printf("%zu\n", sizeof(char));
	printf("%zu\n", sizeof(ch));
	return 0;
}

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