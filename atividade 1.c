/*Escreva um programa em C que leia uma temperatura em Fahrenheit e a apresente convertida em graus
Celsius. F�rmula de convers�o: C = (F - 32) * (5 / 9).*/

# include <stdio.h>

int main () {


float tf, tc ;
 printf("digite a temperatura em fahrenheit \n");
 scanf("%f,&tf \n");
 
 tc=(tf - 32) * (5 / 9);
 
 printf("a temperatura %.2f fahrenheit equivale a %.2f graus celsius \n", tf, tc	);
 


}

