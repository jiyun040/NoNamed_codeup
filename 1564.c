#include <stdio.h>
#pragma warning(disable:4996)

int a, b;

int gcd(int a, int b)
{
	if (a > b)
	{
		while (b != 0)
		{
			int tmp = a % b;
			a = b;
			b = tmp;
		}
		return a;
	}
	if (a < b)
	{
		while (a != 0)
		{
			int tmp = b % a;
			b = a;
			a = tmp;
		}
		return b;
	}
}

int main()
{
	scanf("%d%d", &a, &b);
	printf("%d\n", gcd(a, b));
}