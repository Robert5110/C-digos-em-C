#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){ setlocale(LC_ALL, "portuguese");

int num;

printf("Digite um número:\n");
 	scanf("%d", &num);
 	
while(num<=100){
	num*=2;
	printf("%d\n", num);
}
return 0;
}
