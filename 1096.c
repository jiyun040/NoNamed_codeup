#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int n, i, j, x, y;
	int a[20][20] = {}; //�ٵ��� �����ֱ�
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		scanf("%d %d", &x, &y); //x, y��ǥ �Է�
		a[x][y] = 1; //�ش� ��ǥ 1�� �����
	}
	for (i = 1; i <= 19; i++)
	{
		for (j = 1; j <= 19; j++) //�����ٸ�ŭ �ݺ�
		{
			printf("%d ", a[i][j]); //������ ���
		}
		printf("\n");
	}

	return 0;
}