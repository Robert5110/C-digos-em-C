#include<stdio.h>
#include<stdlib.h>
main() {
float p1, p2, p3, total, aumento, vfinal; //p1, p2 e p3 são os produtos, vfinal é o valor final
    printf ("Digite o preço dos tres produto:\n");
     scanf("%f %f %f", &p1, &p2, &p3);
    total=p1+p2+p3;
    aumento=total*0.1;
    vfinal=total+aumento;
    printf ("%O valor total foi de:%.2f\nO aumento foi de:%.2f\nO aumento foi de:%.2f", total, aumento, vfinal);
    
      
    
    return 0;
} 
