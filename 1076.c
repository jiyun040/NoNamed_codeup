#include<stdio.h>
int main()
{
	char x;
	char i = 'a';
	scanf("%c", &x);
	while (i <= x)
	{
		printf("%c ", i);
		i++;
	}
	return 0;
}