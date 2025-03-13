#include<stdio.h>
#include<stdlib.h>
main() {
float p1, p2, p3, total,d1;
    printf ("Digite o preço dos tres produto:\n");
     scanf("%f %f %f", &p1, &p2, &p3);
    d1=(p1+p2+p3)*0.1;
    total=(p1+p2+p3)+d1;
    printf ("O seu desconto foi de $%.2f", total);
    return 0;
} 
