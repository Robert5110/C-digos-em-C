#include<stdio.h>
#include<stdlib.h>

int main(){
	//declaraçao de variaveis
float centimetros, metros, pes, polegadas, resultado;
int escolha;

// escolha metros para converter
printf("Digite o numero abaixo oque deseja converter de metros para:\n1-Centimetros.\n2-Pes.\n3-polegadas.\n");
  		scanf ("%d", &escolha);
	
switch (escolha){
//centimetros
case 1:
	printf("Digite quantos metros deseja converter: ");
 	scanf("%f", &metros);
resultado=(metros*100);	
printf("Sao %.0f centimetros", resultado);
	break;
//pés
case 2:
		printf("Digite quantos metros deseja converter: ");
 	scanf("%f", &metros);
resultado=(metros*3.28083989501);	
printf("Sao %.2f pes", resultado);
	break;
//polegadas
case 3: 
	printf("Digite quantos metros deseja converter: ");
 	scanf("%f", &metros);
resultado=(metros/ 0.0254);	
printf("Sao %.2f polegadas", resultado);
	break;
//caso não digite o numero certo
default: 
printf("Numero errado")	;
}	
	
	
	
	
	
	

	return 0;
}
