#include <stdio.h>

#define N 3
#define M 3

int main()
{
	float matriz[M][N];
	float promedio[N];
	int k;
	int i, j;
	float valor;
	float acum=0;
	//float promedio;
	
	for(i=0;i<N;i++)
	{
		for(j=0; j < M ; j++)
		{
			printf("Dame el flotante de matriz[%d][%d]: ", j, i);
			scanf("%f", &matriz[j][i]);
			valor = matriz[j][i];
			acum= acum + valor;
		}
		
		promedio[i]= acum/N;
		/*
		promedio= acum/N;
		printf("\nPromedio de columna [%d]: %.02f\n\n", i, promedio);*/
		acum=0;
	}
	
	for(k=0;k<N;k++)
	{
		printf("\nPromedio de columna %d: %.02f\n\n", k, promedio[k]);
	}
	
	return 0;
}
