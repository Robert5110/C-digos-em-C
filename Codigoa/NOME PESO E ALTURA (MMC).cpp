#include<stdio.h>
#include<stdlib.h>

main(){
char nome[50], sexo;               //fgets serve para char
float altu, peso, pesoideal;

    printf("Qual e o seu nome?: ");
	  fgets(nome, 10, stdin); 
	printf ("Quanto voce pesa?: "); 
	 scanf("%f", &peso);  
    printf ("Qual e a sua altura?: ");
      scanf("%f", &altu);
     printf("Digite o sexo, M(masculino), F(feminino): ");
     scanf("%s", &sexo); 
	if(sexo=='M' || sexo=='m'){
	pesoideal=((72.7*altu)-58); 
printf("NOME: %s", nome);
printf ("PESO: %.2f\nALTURA: %.2f\nSEXO: Maculino\nPESO IDEAL: %.2f", peso, altu, pesoideal); 		//regirstro masculino
 }
	else if (sexo=='F' || sexo=='f'){
	 peso=((62.1*altu)-47.7);
    printf("NOME %s", nome);
	printf("PESO: %.2f\nALTURA: %.2f\nSEXO: Feminino\nPESO IDEAL: %.2f", nome, peso, altu, pesoideal);	  //registro feminino
	}
	  else
	  { printf ("sexo invalido\n");
	  
	  return 1;
	  }
	 
	

	
	return 0;
}
