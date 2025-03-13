#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){ setlocale(LC_ALL, "portuguese");

int fatorial=1, num;

printf("					____NÚMERO FATORIAL____	\n\nDigite um número: ");
 	scanf("%d", &num);

 for (contador=1; contador=10; contador++){
 
 printf("o número fatorial é: %d\n",  num*contador);	
}
return 0;
}
