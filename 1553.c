#include <stdio.h>
#pragma warning(disable:4996)

double x;

double f(double a)
{
	long long int b = (long long int)a;

	if (b < a) return a + 1;
	else return a;
}

int main()
{
	scanf("%lf", &x);
	printf("%lld\n", f(x));
}