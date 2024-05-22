#include <stdio.h>
#pragma warning(disable:4996)

int n;

void f()
{
	if (n < 0) printf("negative\n");
	else if (n == 0) printf("zero");
	else printf("positive\n");
}

int main()
{
	scanf("%d", &n);
	f(n);
	return 0;
}