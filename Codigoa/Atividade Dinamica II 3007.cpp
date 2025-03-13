#include <iostream>  // Biblioteca para operações de entrada e saída
#include <cstdio>    // Biblioteca para a função printf

int main() {
    // Imprimindo uma mensagem de boas-vindas
    std::printf("Bem-vindo ao seu primeiro programa em C++!\n");

    // Declarando variáveis
    int num1, num2;
    int soma, subtracao, multiplicacao;
    double divisao;

    // Solicitando entrada do usuário
    std::cout << "Digite o primeiro número: ";
    std::cin >> num1;

    std::cout << "Digite o segundo número: ";
    std::cin >> num2;

    // Realizando operações aritméticas
    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    divisao = static_cast<double>(num1) / num2;  // Converter para divisão correta

    // Imprimindo os resultados
    std::printf("Soma: %d\n", soma);
    std::printf("Subtração: %d\n", subtracao);
    std::printf("Multiplicação: %d\n", multiplicacao);
    std::printf("Divisão: %.2f\n", divisao);

    // Finalizando o programa
    std::printf("Fim do programa. Até mais!\n");

    return 0;
}
