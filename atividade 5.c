/*5) Fa�a um programa que:
a) Obtenha o valor para a vari�vel HT (horas trabalhadas no m�s);
b) Obtenha o valor para a vari�vel VH (valor da hora trabalhada);
c) Obtenha o valor para a vari�vel PD (percentual de desconto);
d) Calcule o sal�rio bruto [SB = HT * VH];
e) Calcule o total de desconto [TD = (PD / 100) * SB];
f) Calcule o sal�rio l�quido [SL = SB - TD];
Apresente os valores de horas trabalhadas, sal�rio bruto, desconto e sal�rio l�quido.*/

#include <stdio.h>
int main()  
{
	float ht, vh, pd;
	float sb, td, sl;
	
	printf(" digite as horas trabalhadas");
	scanf("%f", &ht);
	printf("digite o valor da hora trabalhada");
	scanf("%f", &vh);
	printf("digites o percentual de desconto");
	scanf("%f", &pd);
	
	sb = ht * vh;
	td = (pd / 100) * sb;
	sl = sb - td;
	
	printf("horas trabalhas : %.2f\n", ht);
	printf(" o salario bruto : %.2f\n", sb);
	printf(" desconto(%.2f%%): %.2f\n", pd, td);
	printf("salario liguido: %.2f\n", sl);

	
}
