#include <stdio.h>
#pragma warning(disable:4996)

int n, d[100010], k;

int f(int a)
{
	int i;
	for (i = 1; i <= n; i++)
	{
		if (d[i] == a) return i;
		/*if (k != d[k]) return -1;*/
	}
	return -1;
}

int main()
{
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
		scanf("%d", &d[i]);

	scanf("%d", &k);
	printf("%d\n", f(k));
	return 0;
}