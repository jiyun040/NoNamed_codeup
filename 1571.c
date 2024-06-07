#include <stdio.h>
#pragma warning(disable:4996)

int n, k, d[1010];

int upper_bound(int k) {
	for (int i = 1; i <= n; i++)
	{
		if (k < d[i])
		{
			return i;
		}
	}
	return n + 1;
}

int main()
{
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
		scanf("%d", &d[i]);

	scanf("%d", &k);

	printf("%d\n", upper_bound(k));
}