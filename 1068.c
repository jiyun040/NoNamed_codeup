#include<stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	if (a <= 39)
	{
		printf("D");
	}
	else if (a >= 40 && a <= 69)
	{
		printf("C");
	}
	else if (a >= 70 && a <= 89)
	{
		printf("B");
	}
	else if (a >= 90 && a <= 100)
	{
		printf("A");
	}
	return 0;
}