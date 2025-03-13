#include <stdio.h>

int main() {
    int velocidade = 0;
    char comando;

    printf("Bem-vindo ao Jogo de Carro!\n");

    do {
        printf("Velocidade atual: %d km/h\n", velocidade);
        printf("Digite 'a' para acelerar, 'f' para frear ou 's' para sair: ");
        scanf(" %c", &comando);

        switch (comando) {
            case 'a':
                velocidade += 10;
                break;
            case 'f':
                if (velocidade >= 10) {
                    velocidade -= 10;
                } else {
                    printf("Você está parado!\n");
                }
                break;
            case 's':
                printf("Saindo do jogo. Até mais!\n");
                break;
            default:
                printf("Comando inválido. Tente novamente.\n");
        }
    } while (comando != 's');

    return 0;
}

