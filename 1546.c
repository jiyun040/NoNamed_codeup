#include <stdio.h>
#include <stdbool.h>
#pragma warning(disable:4996)

int n;

bool zero(int a)
{
	return !a;
}

bool plus(int a)
{
	return a > 0;
}

int main()
{
	scanf("%d", &n);
	if (zero(n)) printf("zero");
	else printf("%s", plus(n) ? "plus" : "minus");
	return 0;
}