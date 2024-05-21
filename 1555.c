#include <stdio.h>
#pragma warning(disable:4996)

int n;

long long int f()
{
	long long int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}
	return sum;
}

int main()
{
	scanf("%d", &n);
	printf("%lld\n", f(n));
}