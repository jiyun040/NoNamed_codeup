#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int n, i, t;
	int a[24] = {};
	scanf("%d\n", &n);

	for (i = 1; i <= n; i++)
	{
		scanf("%d", &t);
		a[t] = a[t] + 1;
	}
	for (i = 1; i <= 23; i++)
	{
		printf("%d", a[i]);
	}

	return 0;
}