#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
int main(){ setlocale(LC_ALL, "portuguese");

int num, i = 2, primo = 1;
printf("Digite um numero: ");
     scanf("%d", &num);

while (i <=sqrt(num) && primo){
  if(num % i == 0){
  	primo = 0;
  }	
  i++;
}
   if (primo && num > 1){
  	printf("%d é primo.\n", num);
  } else {
  	printf("%d não é primo.\n", num);
  }

return 0;	
}
