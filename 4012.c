#include <stdio.h>
#pragma warning(disable:4996)

struct number
{
	int score; //����
	int rank; //����
};

int main()
{
	struct number subs[200];
	int n; //����
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &subs[i].score);
	}
	
	for (int i = 0; i < n; i++)
	{
		subs[i].rank = 1;
		
		for (int j = 0; j < n; j++)
		{
			if (subs[j].score > subs[i].score)
				subs[i].rank++;
		}
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d %d\n", subs[i].score, subs[i].rank);
	}

	return 0;
}