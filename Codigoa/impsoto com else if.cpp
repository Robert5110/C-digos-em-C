#include<stdio.h>
#include<stdlib.h>

int main(){


float salario, imposto;

printf("Digite seu salario: ");
 	scanf("%f", &salario);
//caso não tenha imposto
if (salario<=2.112){
printf("Isento, nesse caso, nao e necessario recolher o IRPF.\n");}
 // caso 1
else if
 (salario>=2.112 && salario<=2.826){
imposto=salario/7.5;
printf("Seu imposto de renda e de R$%.f", imposto);}
//caso 2
else if
 (salario>=2.826 && salario<=3.751){
imposto=salario/15;
printf("Seu imposto de renda e de R$%.f", imposto);}
//caso 3
else if
 (salario>=3.751 && salario<= 4.664){
imposto=salario/22.5;
printf("Seu imposto de renda e de R$%.f", imposto);}
//caso 4
else 
 (salario>=4.664);{
imposto=salario/27.5;
printf("Seu imposto de renda e de R$%.f", imposto);}











return 0;

}

