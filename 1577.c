#include <stdio.h>
#pragma warning(disable:4996)

int myabs(int a)
{
	if (a < 0) return -a;
	else return a;
}

main()
{
	int a;
	scanf("%d", &a);
	printf("%d", myabs(a));
}