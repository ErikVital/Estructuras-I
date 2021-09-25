#include <stdio.h>


#define N 5
#define M 5

void darValor(int mat[M][N]);
int buscaValor(int mat[M][N]);
void Imprime(int b);

int main()
{
	int matriz[M][N];
	int i;
	int posicion;
	
	darValor(matriz);
	
	posicion=buscaValor(matriz);
	Imprime(posicion);
	
	return 0;
}

void darValor(int mat[M][N])
{
	int i, j;
	
	for(i=0; i<N ; i++)
	{
		for(j=0; j<M ; j++)
		{
			printf("matriz[%d][%d]: ", j, i);
			scanf("%d", &mat[j][i]);
		}
	}
}


int buscaValor(int mat[M][N])
{
	int i, j, z=0, numero;
	int num[M*N];
	
	for(i=0; i<N ; i++)
	{
		for(j=0; j<M ; j++)
		{
			if(mat[j][i]>mat[j+1][i+1] /*&& mat[j][i]>=num[z-1]*/)
				/*num[z]=mat[j][i];	
				z++;*/
				numero=mat[j][i];	
		}
	}
	
	
	return numero;
}


void Imprime(int b)
{

    printf("Numero mas grande:  %d", b);
}
