#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){ setlocale(LC_ALL, "portuguese");

int fatorial=1, num;

printf("					____N�MERO FATORIAL____	\n\nDigite um n�mero: ");
 	scanf("%d", &num);

 for (contador=1; contador=10; contador++){
 
 printf("o n�mero fatorial �: %d\n",  num*contador);	
}
return 0;
}
