#include <stdio.h>
#include <stdlib.h>

int main() {
    int anon, anoa, idade, a;
   
    printf("Digite ano atual: ");
    scanf ("%d", &anoa);
   
    printf("Digite ano nascimento: ");
    scanf ("%d", &anon);
   
    idade = anoa - anon;
   
    printf("Você já fez aniversário este ano? Responda 1 para SIM e 0 para NÃO: \n");
    scanf ("%d", &a);
   
    if (a == 0)
        idade = (anoa - anon - 1); {
   
    if (idade <= 12) {
        printf("Sua idade é %d anos. Você é criança.\n", idade);
    }
   
    else if (idade > 12 && idade <= 19) {
        printf("Sua idade é %d anos. Você é adolescente.\n", idade);
    }
   
    else if (idade > 19 && idade <= 23) {
        printf ("Sua idade é %d anos. Você é jovem.\n", idade);
    }
   
    else if (idade > 23 && idade <= 59) {
        printf("Sua idade é de %d anos. Você é adulto.\n", idade);
    }
   
    else {
        printf("Sua idade é %d anos. Você é idoso.\n", idade);
    }
        }
    return 0;
}
