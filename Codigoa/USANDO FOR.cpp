#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){ setlocale(LC_ALL, "portuguese");

int contador, num;

printf("					____TABUADA DE MULTIPLICAÇÃO____	\n\nDigite um número: ");
 	scanf("%d", &num);

 for (contador=1; contador<=10; contador++){
 
 printf("%d X %d = %d\n", contador, num, num*contador);	
}
return 0;
}
