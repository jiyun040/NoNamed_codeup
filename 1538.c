#include <stdio.h>
#pragma warning(disable:4996)

int n;

void f(int n)
{
	if (n % 2 == 0) printf("even\n");
	else if (n % 2 != 0) printf("odd\n");
}

int main()
{
	scanf("%d", &n);
	f(n);
	return 0;
}