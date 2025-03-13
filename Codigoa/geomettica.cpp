#include<stdio.h>
#include<stdlib.h>
#define PI 3.14 //area=M-PI*pow(raio,2);

int main(){

    float l1, area, a1;
    int forma;

    printf("Digite o numero abaixo para escolher\n1-Quadrado.\n2-Circulo.\n3-Triangulo.\n ");
        scanf ("%d", &forma);

    switch (forma){
        case 1:
            printf("digite o comprimento do lado do quadrado: ");
            scanf("%f", &l1);
            area = l1 * l1;
            printf("a area do quadrado e: %.1f*", area);
        break;
           
        case 2:
            printf("digite o raio do circulo: ");
            scanf("%f", &l1);
            area = (PI*l1*l1);
            printf("a area do circulo e: %.1f", area);
        break;
       
        case 3:
            printf("digite a altura do triangulo: ");
            scanf("%f", &a1);
            printf("digite o comprimento da base desse triangulo: ");
            scanf("%f", &l1);
            area = l1*a1/2;
            printf("a area do triangulo e: %.1f", area);
        break;

        default:
            printf("nenhuma forma reconhecida.");
    }
return 0;
} 


