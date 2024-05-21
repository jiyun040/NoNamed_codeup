#include <stdio.h>
#pragma warning(disable:4996)

float f()
{
	return 3.14;
}

int main()
{
	printf("%f", f());
	return 0;
}