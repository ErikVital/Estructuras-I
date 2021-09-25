#include <stdio.h>


#define N 5
#define M 4

void darValor(int mat[M][N]);
void verMatriz(int mat[M][N]);
void buscaValor(int mat[M][N], int *pos1, int *pos2,  int *num);
void Imprime(int uno, int dos, int mayor);

int main()
{
	int matriz[M][N];
	int i, x, y, numero=0;
	int posicion;
	
	darValor(matriz);
	verMatriz(matriz);
	buscaValor(matriz, &x, &y, &numero);
	Imprime(x, y, numero);
	
	return 0;
}

void darValor(int mat[M][N])
{
	int i, j;
	
	for(i=0; i<M ; i++)
	{
		for(j=0; j<N ; j++)
		{
			printf("matriz[%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
		}	
	}			
}

void verMatriz(int mat[M][N])
{
	int i, j;
	
	for(i=0; i<M ; i++)
	{
		for(j=0; j<N ; j++)
		{
			printf("%d ", mat[i][j]);
		}
		printf("\n");	
	}			
}

void buscaValor(int mat[M][N], int *pos1, int *pos2,  int *num)
{
	int i, j;
	
	for(i=0; i<M ; i++)
	{
		for(j=0; j<N ; j++)
		{
			if(*num<mat[i][j])
			{
				*num=mat[i][j];
				*pos1=i;
				*pos2=j;
			}
		}	
	}	
}


void Imprime(int uno, int dos, int mayor)
{
    printf("\nEl numero mayor es %d y se encuentra en la posicion [%d][%d]", mayor, uno, dos);
}
