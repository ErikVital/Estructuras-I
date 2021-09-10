#include <stdio.h>

void capturaNum(int *num1, int *num2);
void muestraNum(int num1, int num2);


int main()
{
	int num1, num2;
	
	capturaNum(&num1, &num2);
	muestraNum(num1, num2);
		
	return 0;
}


void capturaNum(int *num1, int *num2)
{
	printf("Deme dos numeros para mostrar los que hay entre estos\n\n");
	printf("Primer numero:");
	scanf("%d", num1);
	printf("Segundo numero:");
	scanf("%d", num2);
}

/**void muestraNum(int num1, int num2)
{
	int i;
	
	for(i=num1+1; i<num2; i++)
	{
		printf("%d  ",i);
	}
}*/

/**void muestraNum(int num1, int num2)
{
	int i=num1+1;
	
	while(i<num2)
	{
		printf("%d  ",i);
		i++;
	}
}*/

void muestraNum(int num1, int num2)
{
	int i=num1;
	
	do
	{
		i++;
		printf("%d  ",i);
	}while(i<num2-1);
}
