#include<stdio.h>
#include<stdlib.h>

int main(){
float a, b, c, delta, x1, x2;
	
printf ("Digite os coeficientes da equaçao do segundo grau: ");
      scanf("%f %f %f", &a, &b, &c);
    
	if (a==0){
	printf("Nao e uma equaçao do segundo grau\n");	
		
	}  else{
	delta=b*b-4*a*c;
	x1=(-b+sqrt(delta)) / (2*a);
	x2=(-b);
	}
      
   	
	
	return 0;
}
