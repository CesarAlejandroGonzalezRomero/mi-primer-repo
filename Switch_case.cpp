#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	float c= 30;
	float b= 10;
	float a= 20;
    int opcion;
	printf("Elige una opcion:\n");
	printf("\t 1.- Suma:\n");
	printf("\t 2.- Resta:\n");
	printf("\t 3.- Division:\n");
	printf("\t 4.- Multiplicacion:\n");
	printf("\t 5.- Raiz cuadrada:\n");
	printf("\t 6.- Potencia:\n");
	printf("\t 7.- Salir:\n");
	scanf("%f",&opcion);
	switch(opcion){
	case 1: 
		c= a + b ;
		printf("La suma es: %f", c, a, b);
		break;
	case 2: 
		c= a - b ;
		printf("La resta es: %f", c, a, b);
		break;
	case 3: 
		if (b==0){
		    printf("No esta definida la division entre 0\n");
		} else {
		c= a / b ;
		printf("La division es: %f", c, a, b);
	}
		break;
	case 4: 
		c= a * b ;
		printf("La multiplicacion es: %f", c, a, b);
		break;
	case 5: 
		c= a; sqrt(b) ;
			printf("La raiz cuadrada es: %f", c, a, b);
		break;
	case 6: 
		c= pow (a,b) ;
		printf("La potencia es: %f", c, a, b);
		break;
	default:
		printf("No esta puesta correctamente la unidad\n");
		exit (0);
	}
	printf("\nFin de Switch");
	return 0;
} 
