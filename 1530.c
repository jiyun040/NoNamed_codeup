#include <stdio.h>
#pragma warning(disable:4996)

char f()
{
	return 'A';
}

int main()
{
	printf("%c", f());
	return 0;
}