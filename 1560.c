#include <stdio.h>
#pragma warning(disable:4996)

long long int n, m;

long long int f(long long int a, long long int b)
{
	if (a > b) return a - b;
	else if (a == b) return 0;
	else return b - a;
}

int main()
{
	scanf("%lld%lld", &n, &m);
	printf("%lld\n", f(n, m));
}