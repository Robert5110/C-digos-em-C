#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	char alfabeto;
	
	printf("Digite uma letra de 'a' a 'z': ");
	scanf("%c", &alfabeto);
	
	switch (alfabeto){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		printf("A letra que voce digitou e uma vogal.");
		break;
		default:
		printf("A letra que voce digitou e uma cosoante. ");
		
		return 0;
	}
}
