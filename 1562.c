#include <stdio.h>
#pragma warning(disable:4996)

int n, m;

int min(int a, int b)
{
	return a > b ? b : a;
}

int main()
{
	scanf("%d%d", &n, &m);
	printf("%d\n", min(n, m));
}