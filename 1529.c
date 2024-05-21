#include <stdio.h>
#pragma warning(disable:4996)

void f()
{
	for (int i = 0; i < 2; i++)
		printf("%c", '*');
}

int main()
{
	f();
	return 0;
}