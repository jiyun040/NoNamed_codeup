#include <stdio.h>
#pragma warning(disable:4996)
//������ ���, num�� �����ϴ� �Լ�

void f(int* n)
{
	*n = *n * *n;
}

int main()
{
	int a;
	scanf("%d", &a);
	f(&a);
	printf("%d", a);
}