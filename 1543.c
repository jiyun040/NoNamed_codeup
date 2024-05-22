#include <stdio.h>
#pragma warning(disable:4996)

int n;

void f()
{
	for (int i = 0; i < n; i++)
		printf("love\n");
}

int main()
{
	scanf("%d", &n);
	f(n);
	return 0;
}