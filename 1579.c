#include <stdio.h>
#pragma warning(disable:4996)

int mymin(int a, int b)
{
	if (a < b) return a;
	else if (a > b) return b;
}

main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", mymin(a, b));
}