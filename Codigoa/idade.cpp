#include <stdio.h>
#include <stdlib.h>

int main() {
    int anon, anoa, idade, a;
   
    printf("Digite ano atual: ");
    scanf ("%d", &anoa);
   
    printf("Digite ano nascimento: ");
    scanf ("%d", &anon);
   
    idade = anoa - anon;
   
    printf("Voc� j� fez anivers�rio este ano? Responda 1 para SIM e 0 para N�O: \n");
    scanf ("%d", &a);
   
    if (a == 0)
        idade = (anoa - anon - 1); {
   
    if (idade <= 12) {
        printf("Sua idade � %d anos. Voc� � crian�a.\n", idade);
    }
   
    else if (idade > 12 && idade <= 19) {
        printf("Sua idade � %d anos. Voc� � adolescente.\n", idade);
    }
   
    else if (idade > 19 && idade <= 23) {
        printf ("Sua idade � %d anos. Voc� � jovem.\n", idade);
    }
   
    else if (idade > 23 && idade <= 59) {
        printf("Sua idade � de %d anos. Voc� � adulto.\n", idade);
    }
   
    else {
        printf("Sua idade � %d anos. Voc� � idoso.\n", idade);
    }
        }
    return 0;
}
