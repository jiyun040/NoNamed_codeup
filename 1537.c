#include <stdio.h>
#pragma warning(disable:4996)

int n;

void f(int x)
{
	if (x == 1) printf("hello\n");
	else if (x == 2) printf("world\n");
}

int main()
{
	scanf("%d", &n);
	f(n);
	return 0;
}