#include<stdio.h>
#include<stdlib.h>

int main(){
int ano, atu, ida;

	printf("Digite o ano atual: ");
		scanf("%d", &atu);
	printf("Digite o ano que voce nasceu: ");
		scanf("%d", &ano);
	ida=(atu-ano);
	if (ida>=18 && ida<=70){
   printf("Voce tem %d anos de idade, o voto e obrigatorio.", ida);
}
    else if (ida==16 || ida==17 || ida>=70){
	printf ("Voce tem %d anos de idade, o voto e opcional.", ida);
		}
	else{ 
	printf ("Voce e menor de idade, nao pode votar.");
	}
   
   
 	printf("\n__________¶¶¶¶¶\n_________¶¶___¶¶\n________¶¶____¶¶\n_______¶¶_____¶¶\n_______¶¶_____¶¶\n_______¶¶_____¶¶\n_______¶¶_____¶¶\n_______¶¶_____¶¶¶¶¶\n_______¶¶____¶¶¶__¶¶¶¶¶¶¶¶¶¶\n_______¶¶____¶¶¶____¶¶_____¶¶¶¶¶¶\n_____¶¶¶¶¶¶¶_¶¶____¶¶¶_____¶¶___¶¶\n___¶¶¶_____¶¶¶¶¶¶¶¶¶¶¶¶¶___¶¶___¶¶\n__¶¶___________________¶__¶¶____¶¶\n_¶¶__________________¶¶¶__¶¶__¶¶¶\n¶¶_______¶¶¶¶¶¶¶¶¶¶¶¶¶___¶¶__¶¶¶\n¶___________¶¶¶___¶¶¶¶¶¶¶¶¶¶¶¶\n¶¶____________¶¶_____________¶\n_¶¶¶___________¶¶___________¶¶\n___¶¶¶_____________________¶¶\n_____¶¶_________________¶¶¶\n______¶_______________¶¶¶\n_____¶¶______________¶\n____¶¶¶_____________¶");
		
		



return 0;
}
