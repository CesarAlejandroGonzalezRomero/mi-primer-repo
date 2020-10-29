#include <stdio.h> 

int main ()
{
int lado;
float resultado;
      
	  printf( "Ingresa los lados del triangulo para calcular el perimetro: ");
scanf( "%d", &lado );
resultado = lado * 3;
printf( "\nEl perimetro de un triangulo equilatero de %d centimetros por lado da por resultado: %.2f\n", lado, resultado);

return 0;
}
