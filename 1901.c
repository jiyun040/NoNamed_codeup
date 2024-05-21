#include <stdio.h>
#pragma warning(disable:4996)

int f(int n)
{
	if (n == 0) return;
	f(n - 1);
	printf("%d\n", n);
}

int main()
{
	int n;
	scanf("%d", &n);
	f(n);
	return 0;
}