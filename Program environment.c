#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//1.����ķ��뻷����ִ�л���
//1.1���뻷����ָ��Դ����ת��Ϊ��ִ�еĻ���ָ������ƣ�
//1.2ִ�л�������ʵ��ִ�д���
//Դ�ļ���.c��->������(cl.exe)->Ŀ���ļ���.obj��+���ӿ�->������(link.exe)->��ִ�г���.exe��

//Ԥ������ͷ�ļ�������define������ŵ��滻��ɾ������ķ��ţ�ɾ��ע��
//���룺��c���Դ���ת��Ϊ������
//��ࣺ��������ת��Ϊ�����ƴ�������ָ��γɷ��ű�

//���ӣ��ϲ��α������ű��ĺϲ����ض�λ

//���л��������������ڴ棬�ҵ�������ڣ���ʼִ�д���

//2.Ԥ�������
//2.1Ԥ�������
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("file:%s line:%d date:%s time:%s i=%d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//	return 0;
//}

//2.2#define�����ʶ��
//#define max 100//��������
//#define str "hehe"//�����ַ���
//#define print printf("hehe\n")//�������
//#define pri printf//����ؼ���
//#define print1 printf("file:%s line:%d date:%s time:%s i=%d\n", \
//__FILE__, __LINE__, \
//__DATE__, __TIME__, i);//��������ת��س����û��в��ǻ���
//
//int main()
//{
//	int i = 0;
//	printf("%d\n", max);
//	printf("%s\n", str);
//	print;
//	pri("%d\n", max);
//	return 0;
//}

//3.#define�����
//#define square(x) x*x
//#define sq(x) ((x)*(x))
//int main()
//{
//	printf("%d\n", square(5));
//	printf("%d\n", square(5 + 1));
//	//����ĺ����ȱ�ݣ��������,���Ǽ���
//	//5+1*5+1=11
//	printf("%d\n", sq(5 + 1));
//
//	return 0;
//}
//3.1#��##
//#define print(N) printf("the value of "#N" is %d\n",N)
////#N���������ô���N���ַ���������������Nֱ������ֵ���
//#define PRINT(N,format) printf("the value of "#N" is "format"\n",N)
//#define add_(str,num) str##num
//int main()
//{
//	int a = 10;
//	int b = 20;
//	float f = 30.0f;
//	int a1 = 100;
//	print(a);
//	printf("the value of ""a"" is %d\n", a);
//
//	print(b);
//	printf("the value of ""b"" is %d\n", b);
//
//	PRINT(a, "%d");
//	PRINT(f, "%f");
//
//	printf("%d\n", add_(a, 1));//##�������ǽ����������ϲ�Ϊһ���ַ�
//	printf("%d\n", a1);
//
//	printf("hello ""world\n");
//	return 0;
//}

//3.2define�ĸ����ò���
//#define max(x,y) ((x)>(y)?(x):(y))
//int main()
//{
//	int a = 5;
//	int b = 4;
//	printf("%d\n", max(a++, b++));
//	//((a++)>(b++)?(a++):b(b++))
//	//a=5>b=4,a++=6,b++=5,ִ��a++,�Ȱ�a=6���أ�a��++=7��b++����ִ��
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}

//3.3��ͺ���
//�������
//���ڼ���Ƚϼ򵥵����⣬������������滻�����������������Σ���������ջ֡�����м��㣬����ֵ
//��һϵ�й��������Ժ�Ĺ���Ч�ʸ��죬ֻ����������Ȼ��ִ�д��룻�������ڲ�����Ҫ��û�к�����ô�ϸ�
//����ֻ��������úõĲ������ͽ��м���ִ�С�
//����Դ����ͣ���������
//#define MALLOC(num,type) (type*)malloc((num)*sizeof(type))
//int main()
//{
//	int* p = MALLOC(10, int);
//	return 0;
//}

//������ں���������
//����ɴ�����滻�������������Ĵ���������ͻ���ɳ���ĳ��ȴ������
//����û�취���Ե�
//���������û���ر�����ƣ�ȱ���Ͻ���
//����ܻ������������ȼ������⣬���׳���������������
//�겻�ܵݹ飬��������

//3.4����Լ��
//��һ����ȫ��д������һ�㲻ȫ��д

//4.#undef
//ȡ��һ���궨��
#define M 100
int main()
{
	printf("%d\n", M);
#undef M
	//printf("%d\n", M);//�����Mʶ����

	return 0;
}
