#include <stdio.h>
#pragma warning(disable:4996)

int n;

int f(int N)
{
	int cnt = 0;
	for (int i = 1; i <= N; i++)
	{
		if (N % i == 0) cnt += 1;
	}
	return cnt;
}

int main()
{
	scanf("%d", &n);
	printf("%d\n", f(n));
}