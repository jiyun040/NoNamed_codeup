#include <stdio.h>
#pragma warning(disable:4996)

double circle(int r)
{
	double pi = 3.14;
	return r * r * pi;
}

main()
{
	int r;
	scanf("%d", &r);
	printf("%.2f", circle(r));
}