#include <stdio.h>
#pragma warning(disable:4996)

double x;

double f(double a)
{
	return x - (int)a;
}

int main()
{
	scanf("%lf", &x);
	printf("%.14lf\n", f(x));
}