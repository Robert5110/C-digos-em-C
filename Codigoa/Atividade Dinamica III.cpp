#include<iostream>
#include<cstdio>

int main() {
    double nota1, nota2, nota3, media;

    std::cout << "Digite as tr�s notas: ";
    std::cin >> nota1 >> nota2 >> nota3;
    
    media = (nota1 + nota2 + nota3) / 3.0;
    
	
	
    std::cin >>("A m�dia das tr�s notas juntos �: %.2f\n", media);

return 0;    
}
