#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//
//	for (i = 1; i<= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");//���Ծ�֪�������i=12��ʱ��arr[12]=0����ǡ��arr[12]�ĵ�ַ��iһģһ��������iҲ���ĳ�0��������ѭ��
//	}
//	return 0;
//}

//������Ż�
//void my_strcpy(char* arr1, char* arr2)
//{
//	while (*arr2 != '\0')
//	{
//		*arr1 = *arr2;
//		arr2++;
//		arr1++;
//	}
//	*arr1 = *arr2;
//}
//int main()
//{
//	char arr1[20] = "XXXXXXXXXXXXXXX";
//	char arr2[] = "hello world!";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//�ĳ�����
#include<assert.h>
////void my_strcpy(char* arr1, const char* arr2)//�����viod����ֵҲ��̫�ã��ĳ�char*�����ظı�������arr1����ʼ��ַ����鿴
//char* my_strcpy(char* arr1,const char* arr2)//��֤arr2����䣬����������ֵ�ģ���Щ��������Ϊ�˷�ֹ�����������
//{
//	assert(arr1 != NULL);//���ԣ����arr1���ǿ�ָ���ʲô�����ᷢ�������Ϊ��ָ�룬��ᱨ��
//	assert(arr2 != NULL);
//	char* ret = arr1;
//	while (*arr1++ =*arr2++)//��ֵ��䣬ֻҪ*arr1���㼴�棬��Ϊ\0ʱ�����ȸ�ֵ���ж�����ѭ��
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "XXXXXXXXXXXXXXX";
//	char arr2[] = "hello world!";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//const����
//int main()
//{
//	const int num = 10;
//	int n = 20;
//	int m = 0;
//	//����ֱ�Ӹģ����ǿ���ȡ��ַ��
//	int* p = &num;
//	*p = 20;
//	//���������const����
//	//1.const�����*���,���ܸĶ�*p1,���ǿ��Ըı�p1�ı����ֵ
//	const int* p1 = &n;
//	//*p1 = 20;err
//	//2.const�������*�ұߣ����ܸĶ�p2�����ֵ�����ǿ��ԸĶ�*p2
//	int* const p2 = &m;
//	//p2 = &n;//err
//	//3.���߶���const,p3ָ��Ķ���*p3��p3�����ֵ�����ܱ��ı�
//	const int* const p3 = &num;
//	printf("%d\n", num);
//	return 0;
//}

//����ʵ��my_strlen

int my_strlen(const char* arr)
{
	int c = 0;
	assert(arr != NULL);
	while (*arr != '\0')
	{
		c++;
		arr++;
	}
	return c;
}
int main()
{
	char arr[] = "abcdef";
	int n=my_strlen(arr);
	printf("%d\n", n);
	return 0;
}