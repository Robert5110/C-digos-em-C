#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){ setlocale(LC_ALL, "portuguese");



int num;

printf("Digite um número: ");
 	scanf("%d", &num);
 
  while (num!=0)
  
if (num% 2 == 0){
	printf("O nuemro é par\n");
} else {
	printf("O número é impa\n");

printf("Digite outro número (0 para sair): ");
 	scanf("%d", &num);
 	  while (num!=0)

}



printf("Programa ecerrado...");
return 0;
}
