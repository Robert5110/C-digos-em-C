#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){ setlocale(LC_ALL, "portuguese");



int num;

printf("Digite um n�mero: ");
 	scanf("%d", &num);
 
  while (num!=0)
  
if (num% 2 == 0){
	printf("O nuemro � par\n");
} else {
	printf("O n�mero � impa\n");

printf("Digite outro n�mero (0 para sair): ");
 	scanf("%d", &num);
 	  while (num!=0)

}



printf("Programa ecerrado...");
return 0;
}
