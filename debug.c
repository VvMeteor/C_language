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
void my_strcpy(char* arr1, char* arr2)
{
	while (*arr1++ =*arr2++)//��ֵ��䣬ֻҪ*arr1���㼴�棬��Ϊ\0ʱ�����ȸ�ֵ���ж�����ѭ��
	{
		;
	}
}
int main()
{
	char arr1[20] = "XXXXXXXXXXXXXXX";
	char arr2[] = "hello world!";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}