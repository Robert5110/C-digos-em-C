#include<stdio.h>
#include<stdlib.h>

main(){
int n1;	

printf("Digite um numero: ");
      scanf("%d", &n1);	
    if (n1>0){
    printf("O numero e %d e positivo.", n1);
	} 
	else if (n1 %3==0){
 printf("o numero e multiplo de 3.");		
	}
	else{
		printf("O numero nao e negativo e nao e multiplo.");
	}
	
	
	 return 0;
}
