#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

//һ.��̬�ڴ����

//1.1��̬�ڴ溯��malloc
//����һ���ڴ�ռ䣬��������Ϊ����Ŀռ���ֽڴ�С
//����ֵ��ָ�������ٵĿռ��ָ��,�������ʧ�ܾͷ��ؿ�ָ��
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);//�ͷ����ռ䣬�黹ϵͳ������p����ָ��Դ��ַ,�ͷŶ�̬�ռ�
//	*p = 2;//Ϊɶ���ܸģ��ͷ���ô���֣�
//	p = NULL;//p��Ϊ��ָ�룬�޷����ҵ��ÿռ�
//	return 0;
//}

//1.2��̬�ڴ溯��calloc
//��malloc�������ƣ�������������������һ��������Ҫ������Ԫ�ظ������ڶ�����Ԫ�صĴ�С
//���Ҵ�������֮����ЩԪ��Ĭ�ϳ�ʼ��Ϊ0��������Ԫ��ָ��

//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	int i = 0;
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//1.3 realloc����
//���ڵ���malloc��calloc���ٵĿռ��С
//�����ʱ�򣬿��ܻ�������������һ�Ǻ���г���ռ䣬ֱ�Ӳ������
//���Ǻ�߿ռ䲻����realloc�ͻ����ڴ���������һ��ռ䣬��ԭ���ٵĿռ��е����ݿ�����ȥ���ٷ����µ�ָ��ָ���µ�һ��ռ�
//����ʧ�ܷ��ؿ�ָ�룬�ڶ����������ɹ��Զ��ͷ�ԭ���ٵĿռ�
//realloc(NULL,40)�ȼ���malloc(40)
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	int* ptr = (int*)realloc(p, 80);//��һ������ΪҪ�������ڴ�ռ��ָ�룬�ڶ�����Ҫ�������Ŀռ��С
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i) = i);
//	}
//	return 0;
//}

//1.4��̬�ڴ溯�����ʹ����������ڴ�ռ���Ƭ�����ڴ�ռ������ʻή��

//��.�����Ķ�̬�ڴ����

//2.1��NULLָ��Ľ����ò���

//int main()
//{
//	int* p = (int*)malloc(40);
//	*p = 20;//����ȱ����p��һ��ȷ�Ͼ�ֱ�ӽ����������з��յģ���ȷ����Ӧ����ǰ���if�ж�
//	free(p);
//	p = NULL;
//	return 0;
//}

//2.2�Զ�̬���ٵ��ڴ�ռ�Խ�����

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*(p + i) = i;
//	}//�γ�Խ�����
//  free(p);
//	p = NULL;
//	return 0;
//}

//2.3�ԷǶ�̬���ٵ��ڴ�ʹ��free�ͷ�

//int main()
//{
//	int a = 0;
//	int* p = &a;
//	int i = 0;
//	//...
//
//	free(p);
//	p = NULL;
//	return 0;
//}

//2.4ʹ��free�ͷŶ�̬�ڴ�ռ��һ���ֿռ�

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//	free(p);//��ʱfree��p�Ѿ�ָ������ĸ��ֽ���
//	p = NULL;
//	return 0;
//}

//2.5ʹ��free����ͷ�ͬһ�鶯̬�ڴ�ռ�

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	free(p);
//	//...
//	free(p);
//	return 0;
//}

//2.6��̬�ڴ濪�������ͷ�(�ڴ�й¶)

//2.6.1
//int test()
//{
//	int* p = (int*)malloc(40);
//	int i = 0;
//	scanf("%d", &i);
//	if (i == 5)
//	{
//		return 1;
//	}
//	free(p);
//	p = NULL;
//}
//int main()
//{
//	test();//�ú������ж�̬�ڴ�ռ��޷�ִ���ͷŵ�Σ��
//	return 0;
//}

//2.6.2

//int* test()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return p;
//	}
//	//...
//	return p;
//}
//int main()
//{
//	int* ret = test();
//	//���������ͷ�test���濪�ٵĶ�̬�ڴ�ռ�
//	return 0;
//}

//��.��̬�ڴ������Ŀ

//3.1��Ŀ1
//void getmemory(char* p)//�β�
//{
//	p = (char*)malloc(100);//�ı��ββ����ʵ����Ӱ�죬�Һ������ý�����p�Զ����٣�����ڴ�й©
//}
//void test()
//{
//	char* str = NULL;
//	getmemory(str);//ʵ��
//	strcpy(str, "hello world!");//str������NULL
//	printf("%s\n", str);
//}
//int main()
//{
//	test();
//	return 0;
//}

//�Ľ�
//void getmemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void test()
//{
//	char* str = NULL;
//	getmemory(&str);
//	strcpy(str, "hello world!");
//	printf("%s\n", str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}

//3.2��Ŀ2

//int* test()
//{
//	int x;
//	return &x;//x�Ǿֲ��������������������٣����ĵ�ַ��ΪҰָ�룬�����Ǹ���������Ϊmalloc���ٵĶ�̬���ݿռ�ĵ�ַ�ǲ������ٵ�
//}

//3.2��Ŀ3
//����ջ�ռ��ַ������
//char* getmemory()
//{
//	char p[] = "hello world";
//	return p;
//}
//void test()
//{
//	char* str = NULL;
//	getmemory(str);//��������getmemory����ȷʵ���԰ѵ�ַ�������������߳�����������p������������Ϊ��ʱ�������ᱻ����
//	printf(str);//�޷���ӡ��ָ������
//}
//int main()
//{
//	test();
//	return 0;
//}
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p=test();
//	printf("hehe\n");
//	printf("%d", *p);//�ܹ���ӡ10��ʱ��˵��֮ǰ�ǿ�ռ�û���޸ĸ���
//	return 0;
//}

//3.3��Ŀ4
void test()
{
	char* p = (char*)malloc(40);
	strcpy(p, "hello world");
	free(p);
	//�������p=NULL�����Ͻ���
	if (p != NULL)
	{
		strcpy(p, "hello world");//�������������malloc���ٵĿռ���Ȼ�ͷ��ˣ�����pָ�����ܹ��ҵ����ռ䣬������Ȩ���ʣ�����Ұָ��
		printf(p);
	}
}
int main()
{
	test();
	return 0;
}