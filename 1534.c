#include <stdio.h>
#pragma warning(disable:4996)

double f()
{
	return 3.1415926535897;
}

int main()
{
	printf("%.13lf\n", f());
		return 0;
}