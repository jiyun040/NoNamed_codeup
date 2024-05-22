#include <stdio.h>
#include <stdbool.h>
#pragma warning(disable:4996)

int n;

bool zero(long long int n)
{
	return !n;
}

int main()
{
	scanf("%d", &n);
	if (zero(n)) printf("zero");
	else printf("non zero");
	return 0;
}