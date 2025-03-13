#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){ setlocale(LC_ALL, "portuguese");
	
int num, fatorial = 1;
	
printf("Digite um número: ");
 	scanf("%d", &num);
	
while (num>1)	
{
fatorial *=num;
num--;	
	}
	printf("O numero é %d", fatorial);	
	return 0;
}
