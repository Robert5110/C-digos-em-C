#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){ setlocale(LC_ALL, "portuguese");
	

int escolha, senha;	
char nome[50], numero[20];	
	
	do{
	
printf("_____instaok______\nBem-vindo %s \nVocê é novo por aqui?\nSim(1) ou Não(2) (digite o numero):\n: ", nome);
 	scanf("%d", &escolha);
	
 switch (escolha){

	
	
case 1:


printf("VAMOS FAZER SEU CADASTRO\nDigite seu nome: ");
 	scanf("%s", nome);
printf("Óla %s\nDigite uma senha (apenas números): ", nome);
 	scanf("%d", senha);	
 	
break;	
 	

 	

}	

}
	while(escolha!=1);
	
	return 0;
}
