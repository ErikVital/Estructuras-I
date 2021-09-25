#include <stdio.h>

#define N 3
void verMatriz(int mat[N][N]);

int main()
{
	int matriz[N][N];
	int i, j;
	int cont=0;
	
	for(i=0;i<N;i++)
	{
		for(j=0; j < N ; j++)
		{
			printf("Dame el numero de matriz[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
		printf("\n");
	}
	
	for(i=0 ; i < N ; i++)
	{
		for(j=0; j < N ; j++)
		{
			if(matriz[i][j]==matriz[j][i])
			{
				cont++;
			}
		}
	}
	
	verMatriz(matriz);
	
	
	if(cont==N*N)
	{
		printf("\n\nLa matriz es simetrica");
	}
	else
	{
		printf("\n\nLa matriz no es simetrica");
	}
		


	return 0;
}


void verMatriz(int mat[N][N])
{
	int i, j;
	
	for(i=0; i<N ; i++)
	{
		for(j=0; j<N ; j++)
		{
			printf("%d ", mat[i][j]);
		}
		printf("\n");	
	}		
	printf("\n\n");
	for(i=0; i<N ; i++)
	{
		for(j=0; j<N ; j++)
		{
			printf("%d ", mat[j][i]);
		}
		printf("\n");	
	}		
}
