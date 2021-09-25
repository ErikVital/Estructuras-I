#include <stdio.h>

#define N 2
#define M 3

int main()
{
	int matriz[M][N];
	int i, j;
	
	for(i=0;i<M;i++)
	{
		for(j=0; j < N ; j++)
		{
			printf("Dame el numero de matriz[%d][%d]: ", j, i);
			scanf("%d", &matriz[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<N;i++)
	{
		for(j=0; j < M ; j++)
		{
			printf("%d", matriz[j][i]);
		}
		printf("\n");
	}
	
	return 0;
}
