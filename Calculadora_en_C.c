#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void preguntaOp();
void capturaNums(int *num1, int *num2);
int suma(int num1, int num2);	
int resta(int num1, int num2);
int multiplica(int num1, int num2);
int divide(int num1, int num2);
int potencia(int num1, int num2);
int modulo(int num1, int num2);
int raiz(int num1, int num2);
void raizcuadrada(int res1, int res2, int num1, int num2);
void muestraResultado(int res);
void pregunta();



int main()
{
	preguntaOp();
	return 0;
}



void preguntaOp()
{
	int num1, num2, opcion, res;
	
	system("cls");
	printf("\nBienvenido!!\nA la Calculadora 1.0 de numeros enteros\n1.-Suma\n2.-Resta\n3.-Multiplicacion\n4.-Division\n5.-Potencia\n6.-Modulo\n7.-Raiz Cuadrada\n\n");
    scanf("%d",&opcion);
    
	switch(opcion)
    {
    case 1:
    	system("cls");
    	printf("Ha escogido realizar la suma de dos numeros, por favor ingrese a continuacion: \n\n");
    	capturaNums(&num1,&num2);
    	res=suma(num1,num2);
    	system("cls");
    	muestraResultado(res);
    	break;
    case 2:
    	system("cls");
    	printf("Ha escogido realizar la resta de dos numeros, por favor ingrese a continuacion: \n\n");
    	capturaNums(&num1,&num2);
    	res=resta(num1,num2);
    	system("cls");
    	muestraResultado(res);
    	break;
    case 3:
    	system("cls");
    	printf("Ha escogido realizar la multiplicacion de dos numeros, por favor ingrese a continuacion: \n\n");
    	capturaNums(&num1,&num2);
    	res=multiplica(num1,num2);
    	system("cls");
    	muestraResultado(res);
    	break;
    case 4:
    	system("cls");
    	printf("Ha escogido realizar la division de dos numeros, por favor ingrese a continuacion: \n\n");
    	capturaNums(&num1,&num2);
    	res=divide(num1,num2);
    	system("cls");
    	muestraResultado(res);
    	break;
    case 5:
    	system("cls");
    	printf("Ha escogido realizar la potencia de dos numeros, por favor ingrese a continuacion: \n\n");
    	capturaNums(&num1,&num2);
    	res=potencia(num1,num2);
    	system("cls");
    	muestraResultado(res);
    	break;
    case 6:
    	system("cls");
    	printf("Ha escogido realizar el modulo de dos numeros, por favor ingrese a continuacion: \n\n");
    	capturaNums(&num1,&num2);
    	res=modulo(num1,num2);
    	system("cls");
    	muestraResultado(res);
    	break;
    case 7:
    	system("cls");
    	printf("Ha escogido realizar la raiz cuadrada de dos numeros, por favor ingrese a continuacion: \n\n");
    	capturaNums(&num1,&num2);
    	system("cls");
    	raiz(num1,num2);
    	break;
    default:
    preguntaOp();
	}	
}


void capturaNums(int *num1, int *num2)
{
    printf("Primer numero que usaras:");
	scanf("%d", num1);
	printf("Segundo numero que usaras:");
	scanf("%d", num2);
}
	

//Operaciones

int suma(int num1, int num2)
{
    return(num1 + num2);
}

int resta(int num1, int num2)
{
    return(num1 - num2);
}

int multiplica(int num1, int num2)
{
    return(num1 * num2);
}

int divide(int num1, int num2)
{
    return(num1 / num2);
}

int potencia(int num1, int num2)
{
	return(pow(num1, num2));
}

int modulo(int num1, int num2)
{
	return(num1%num2);
}

int raiz(int num1, int num2)
{
	int res1, res2;
	
	res1=sqrt(num1);
	res2=sqrt(num2);
	raizcuadrada(res1, res2, num1, num2);
}

void raizcuadrada(int res1, int res2, int num1, int num2)
{
	printf("Raiz del numero %d= %d\n", num1, res1);
	printf("Raiz del numero %d= %d\n\n", num2, res2);
	pregunta();
}



//Muestra y Repite o Termina
void muestraResultado(int res)
{
	system("cls");
    printf("\nEl resultado es: %d\n\n",res);
	pregunta();
}

void pregunta()
{
	int opc;
	
	printf("Desea continuar haciendo operaciones?\n1.-Si\n2.-No\n\n");
	scanf("%d", &opc);
	switch(opc)
	{
	case 1:
		system("cls");
		preguntaOp();
		break;
	case 2:
		system("cls");
		printf("Gracias por su tiempo, adios!");	
		exit (-1);
		break;
	default:
	pregunta();
	}
}
