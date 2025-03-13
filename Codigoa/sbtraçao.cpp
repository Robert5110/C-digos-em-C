#include<stdio.h>
#include<stdlib.h>

int main(){
	
float somar, somar1, subtrair,subtrair1, dividir, dividir1, multiplicar, multiplicar1, resultado;
int escolha;


printf("	:Calculadora:\n\nEscolha abaixo o calculo(digite o numero ao lado):\n1-Somar +\n2-Subtrair -\n3-Dividir /\n4-Multiplicar *\n:");
 	scanf("%d", &escolha);
 	
switch (escolha){


case 1:

printf("Digite o 1° numero:\n");
scanf("%f", &somar);
printf("Digite o 2° numero\n");
scanf("%f", &somar1);
resultado=somar+somar1;
printf("A soma e: %.0f", resultado);
break;

case 2:

printf("Digite o 1° numero:\n");
scanf("%f", &subtrair);
printf("Digite o 2° numero\n");
scanf("%f", &subtrair1);
resultado=subtrair-subtrair1;
printf("A subtraçao e: %.0f", resultado);
break;

case 3:

printf("Digite o 1° numero:\n");
scanf("%f", &dividir);
printf("Digite o 2° numero\n");
scanf("%f", &dividir1);
resultado=dividir/dividir1;
printf("A divisao e: %.0f", resultado);
break;

case 4:
	
printf("Digite o 1° numero:\n");
scanf("%f", &multiplicar);
printf("Digite o 2° numero\n");
scanf("%f", &multiplicar1);
resultado=multiplicar*multiplicar1;
printf("A multiplicaçao e: %.0f", resultado);
break;

default :

printf("Numero nao encontrado...");
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
