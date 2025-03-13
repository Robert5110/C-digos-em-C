#include<stdio.h>
#include<stdlib.h>

int main(){
int ano, atu, ida;

	printf("Digite o ano atual: ");
		scanf("%d", &atu);
	printf("Digite o ano que voce nasceu: ");
		scanf("%d", &ano);
	ida=(atu-ano);
     if (ida>=18)
    printf ("Voce tem %d\npodetirar a carteir de habilitacao.", ida);
	 else 
	printf ("Voce tem %d\nnao pode tirar a carteira de habilitacao.", ida);
	
 
 
 return 0;
	
}
	

