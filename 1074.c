#include<stdio.h>
int main()
{
	int num1;
	scanf("%d", &num1);
	while (num1 != 0)
	{
		printf("%d\n", num1);
		num1 -= 1;
	}
	return 0;
}