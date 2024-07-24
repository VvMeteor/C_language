#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int add(int x, int y)
{
	return (x + y);
}
int main()
{
	int n1 = 0;
	int n2 = 0;
	scanf("%d %d", &n1, &n2);
	printf("%d\n",add(n1,n2));
	return 0;
}