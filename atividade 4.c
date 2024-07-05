/*Escreva um programa que receba dois números reais, faça uma divisão entre eles e mostre na tela o divisor,
o dividendo, o quociente e o resto da divisão.*/

#include <stdio.h>
#include <math.h>
int main()
  {
  	float x, y;
  	float quociente, resto;
  	
  	printf("digite um valor");
  	scanf("%f", &x);
  	printf("digite um valor");
  	scanf("%f", &y);
  	
  	quociente = x / y;
  	resto = fmod(x, y);
  	
  	printf("o divisor e: %.2f", x);
  	printf("o dividendo e: %.2f", y);
  	printf(" o quociente e: %.2f", quociente);
  	printf("o resto da divisao e: %.2f", resto);
  	
	return 0;
}
