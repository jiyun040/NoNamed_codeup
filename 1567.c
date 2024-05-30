#include <stdio.h>
#pragma warning(disable:4996)

int n, a, b, d[1010];

long long int subsetsum(int a, int b)
{
	long long int result = 0;
	for (int i = a; i <= b; i++)
	{
		result += d[i];
	}
	return result;
}

int main()
{
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
		scanf("%d,", &d[i]);

	scanf("%d%d", &a, &b);

	printf("%lld\n", subsetsum(a, b));
}