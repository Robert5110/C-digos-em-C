#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){ setlocale(LC_ALL, "portuguese");
	
int num, fatorial = 1;
	
printf("Digite um n�mero: ");
 	scanf("%d", &num);
	
while (num>1)	
{
fatorial *=num;
num--;	
	}
	printf("O numero � %d", fatorial);	
	return 0;
}
