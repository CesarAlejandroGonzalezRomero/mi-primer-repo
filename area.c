#include<stdio.h> //Input Output
#include<math.h>

#define PI 3.1416 //Definiendo una constante

int main(){
	float area, radio; //Definiendo variables de tipo flotante
	radio = 5; //Asignando valor a variable radio
	area = PI * pow(5,2); //Asignando resultado de la operacion a variable
	printf("Area\n"); //Imprimiendo titulo
	//Imprimiendo resultado
	printf("Area de Circulo con radio 5: %f", area);
	return 0;
}
