#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){ setlocale(LC_ALL, "portuguese");
	
float sacar, deposito, resultado;
float saldo=5000; 
int escolha;	
	
	
	do{
	
printf("________BANCO DO BRASIL_________	\nEscolha a opção abaixo digitando o número ao lado:\n\n1-Sacar.\n2-Depositar.\n3-Consultar saldo.\n");
 	scanf("%d", &escolha);
	
 switch (escolha){

	
	
case 1:{


printf("Digite quanto deseja sacar: ");
 	scanf("%f", &sacar);
if (sacar<=saldo){
saldo-=sacar;
printf("Saque realizado com sucesso.");	
}
else{ 
printf("Dinheiro insuficiente");	
}
break;
}
case 2: 

printf("Digite quanto quer depositar: ");	
 	scanf("%f", &deposito);	
resultado=saldo+=deposito;

printf("Depositado com sucesso.");
break;

case 3:
	

printf("O saldo é: %.2f", saldo);
break;

case 4:
	
	printf("Obrigado por usar o banco Brasil!");
break;




	default :
		

printf("Número não encontrado");		

}	

}
	while(escolha!=4);
	
	return 0;
}
