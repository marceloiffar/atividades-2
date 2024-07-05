/*3) Faça um programa que leia a velocidade de um veículo em Km/H e calcule e imprima a velocidade em
m/s.*/

#include <stdio.h>

int main()  {
	
	float  vkm, vms;
	
	printf("digite a velocidade do veiculo em km/h");
	scanf("%f", &vkm);
	
	vms = vkm / 3.6;
	
	printf(" a velocidade %.2f km/h equivale a %.2f a velocidade em m/s", vkm, vms);
	
}
