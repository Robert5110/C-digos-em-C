#include<stdio.h>
#include<stdlib.h>

//Programa para mostrar quais tarefas devem ser feitas

int main (){
									//switch e case ( usar para resumir o codigo)
char responder, s;
int t1, t2, t3, resolvidas, r2;

printf("Quantas tarefas voce tem? ");
	 scanf("%d", &t1);
printf("Voce tem alguma tarefa para entregar essa semana?\nDigite S(sim) ou N(nao): ");
 	scanf("%s", &responder);

//SE FOR SIM
	if (responder=='S' || responder=='s'){
	printf("Quantas? ");
 	scanf("%d", &t2);
printf("Em qual dia?\nS(Segunda)\nT(Terça)\nQ(Quarta)\nQi(Quinta)\nSx(Sexta)\n");
 	scanf("%s", &s);
printf("faça a tarefa hoje!");

return 1;
	}

//SE FOR NAO	
 else if (responder=='N' || responder=='n'){
printf("Quantas tarefas voce precisa entregar na proxima semana? ");
 	scanf("%d", &t3);
resolvidas=(t1-t3);
r2=resolvidas-t1;
printf("Faça %d nessa semana\nVoce ainda precisa fazer %d tarefas", r2, resolvidas);

	 	



 }
	





	return 0;
}
