#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){ setlocale(LC_ALL, "portuguese");

int escolha, opcao;

do {

printf("	_________FUCAPI_________	\nEscolha um curso digitando o numero ao lado\n1-Inform�tica.\n2-Automa��o.\n3-Mecatr�nica.\n4-Sair...\n"); 
 	scanf("%d", &escolha);
 	
switch (escolha) {

 case 1: 
 
 printf("Qual � a turma?\n1-MAI-1\n2-MBI-1\n3-MCI-1\n");
 	scanf("%d", &opcao);
 if (opcao==1){
 printf ("SALA D11\n");	
}

else if (opcao==2){
printf("SALA D02\n");	
}
else if (opcao==3){
printf("SALA D04\n");	
}
else {
	printf("Turma n�o encontrada\n\n");

}
 break;

 case 2: 
 
  printf("Qual � a turma?\n1-MAA-1\n2-MBA-1\n3-MCA-1\n");
 	scanf("%d", &opcao);
 if (opcao==1){
 printf ("SALA A09\n\n");	
}
else if (opcao==2){
printf("SALA A02\n\n");	
}
else if (opcao==3){
printf("SALA A02\n");	
}
else {
	printf("Turma n�o encontrada\n\n");
}
 break;
 
  case 3:
  	
 printf("Qual � a turma?\n1-MAM-1\n2-MBM-1\n3-MCM-1\n");
 	scanf("%d", &opcao);
 if (opcao==1){
 printf ("SALA M11\n\n");	
}
else if (opcao==2){
printf("SALA M02\n\n");	
}
else if (opcao==3){
printf("SALA M02\n");	
}
else {
	printf("Turma n�o encontrada\n\n");
}
 break;  	
 
case 4:



 
 printf("N�s siga nas redes sociais.");
	break;

 default :
 	printf ("N�mero n�o encontrado...\n\n");
 
}
}
 	while(escolha!=4);

 
 return 0;
 
}
