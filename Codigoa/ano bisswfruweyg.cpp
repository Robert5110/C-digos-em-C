#include<stdio.h>
#include<stdlib.h>

int main(){
int ano;

    printf("Digite o ano: ");
	 scanf("%d", &ano);
	
	if((ano %4 !=0)||((ano %100==0) && (ano % 400 !=0)))
    printf("%d nao e bissexto", ano);
     else
    printf("%d e bissexto", ano);
    
    
    
    return 0;
	
}

