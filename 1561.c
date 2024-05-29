#include <stdio.h>
#pragma warning(disable:4996)

int n, m;

int max(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
	scanf("%d%d", &n, &m);
	printf("%d\n", max(n, m));
}