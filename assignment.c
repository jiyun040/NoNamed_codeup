#include <stdio.h>
#pragma warning(disable:4996)
//포인터 사용, num을 제곱하는 함수

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