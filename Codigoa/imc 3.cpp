#include<stdio.h>
#include<stdlib.h>

main(){
char nome[50], sexo;               //fgets serve para char
float altu, peso, pesoideal, tabela;

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
	(pesoideal<=18.5);

printf("NOME: %s", nome);
printf ("MAGREZA\nPeso ideal: %.2f\n", pesoideal);
}	
 else if
 
 	(pesoideal>=18.5 && pesoideal<=24.9);
printf("NOME: %s", nome);
printf("NORNAL\nVoce esta no peso");



 


 
	 
	

	
	return 0;
}

