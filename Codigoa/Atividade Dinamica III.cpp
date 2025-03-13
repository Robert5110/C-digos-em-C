#include<iostream>
#include<cstdio>

int main() {
    double nota1, nota2, nota3, media;

    std::cout << "Digite as três notas: ";
    std::cin >> nota1 >> nota2 >> nota3;
    
    media = (nota1 + nota2 + nota3) / 3.0;
    
	
	
    std::cin >>("A média das três notas juntos é: %.2f\n", media);

return 0;    
}
