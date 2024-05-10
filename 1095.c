#include <stdio.h>

int main(void)
{
	int n;
	int i;
	int min = 23;
	scanf("%d", &n);

	char a[10000] = {};

	for (i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	printf("%d", min);

	return 0;
}