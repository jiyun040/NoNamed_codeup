#include <stdio.h>
#pragma warning(disable:4996)

int n;

int f(int N)
{
	if (N <= 1) return 1;
	return N * f(N - 1);
}

int main()
{
	scanf("%d", &n);

	printf("%lld\n", f(n));
}