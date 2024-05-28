#include <stdio.h>
//#include <stdlib.h>
#pragma warning(disable:4996)

long long int n;

long long int abs(int a)
{
	return a > 0 ? a : -a;
}

int main()
{
	scanf("%lld", &n);
	printf("%lld\n", abs(n));
	return 0;
}