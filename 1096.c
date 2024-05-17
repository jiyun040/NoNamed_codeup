#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int n, i, j, x, y;
	int a[20][20] = {}; //바둑판 정해주기
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		scanf("%d %d", &x, &y); //x, y좌표 입력
		a[x][y] = 1; //해당 좌표 1로 만들기
	}
	for (i = 1; i <= 19; i++)
	{
		for (j = 1; j <= 19; j++) //가로줄만큼 반복
		{
			printf("%d ", a[i][j]); //가로줄 출력
		}
		printf("\n");
	}

	return 0;
}