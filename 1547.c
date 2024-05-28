#include <stdio.h>
#include <stdbool.h>
#pragma warning(disable:4996)

int n;

bool prime(int a)
{
	int i;
	for (i = 2; i < a; i++)
		if (a % i == 0)
			break;
	return i == a;
}

int main()
{
	scanf("%d", &n);
	if (prime(n)) printf("prime");
	else printf("composite");
	return 0;
}