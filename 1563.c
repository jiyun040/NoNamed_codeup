#include <stdio.h>
#pragma warning(disable:4996)

int n, m, x;

int max(int p, int q) { return p >= q ? p : q; }

int min(int p, int q) { return p < q ? p : q; }

int mid(int n, int m, int x)
{
	if ((n <= m && m <= x) || (x <= m && m <= n)) return m;
	else if ((m <= n && n <= x) || (x <= n && n <= m)) return n;
	else return x;
}

int main()
{
	scanf("%d%d%d", &n, &m, &x);
	printf("%d\n", mid(n, m, x));
}