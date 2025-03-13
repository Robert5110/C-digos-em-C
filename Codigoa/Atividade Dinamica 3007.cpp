#include <iostream>  // Biblioteca para opera��es de entrada e sa�da
#include <cstdio>    // Biblioteca para a fun��o printf

int main() {
    // Imprimindo uma mensagem de boas-vindas
    std::printf("Bem-vindo ao seu primeiro programa em C++!\n");

    // Declarando vari�veis
    int num1, num2;
    int soma, subtracao, multiplicacao;
    double divisao;

    // Solicitando entrada do usu�rio
    std::cout << "Digite o primeiro n�mero: ";
    std::cin >> num1;

    std::cout << "Digite o segundo n�mero: ";
    std::cin >> num2;

    // Realizando opera��es aritm�ticas
    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    divisao = static_cast<double>(num1) / num2;  // Converter para divis�o correta

    // Imprimindo os resultados
    std::printf("Soma: %d\n", soma);
    std::printf("Subtra��o: %d\n", subtracao);
    std::printf("Multiplica��o: %d\n", multiplicacao);
    std::printf("Divis�o: %.2f\n", divisao);

    // Finalizando o programa
    std::printf("Fim do programa. At� mais!\n");

    return 0;
}
