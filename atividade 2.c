/*Escreva um programa que leia dois valores para duas vari�veis (x e y) do tipo float. O programa deve
conter uma vari�vel (result) do tipo int para receber um valor booleano que deve ser apresentada no final
da execu��o. Utilize a express�o result = (x != y) e observe a sa�da do programa.*/

#include <stdio.h>

int main ()  {
	
	float x, y;
	int result;
	printf("digite o valor de x");
	scanf("%f", &x);
	printf("digite o valor de y");
	scanf("%f", &y);
	
	result = (x != y),
	
	printf(" o resultado (x != y) e: %d", result);
	
	


}
