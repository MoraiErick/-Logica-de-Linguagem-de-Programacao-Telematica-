#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_secreto, chute;

    // Gerar um número secreto entre 1 e 100
    srand(time(NULL));
    numero_secreto = rand() % 100 + 1;

    printf("Adivinhe um número entre 1 e 100 (-1 para sair):\n");

    do {
        printf("Chute: ");
        scanf("%d", &chute);

        if (chute == -1) {
            printf("Você desistiu! O número secreto era %d.\n", numero_secreto);
        } else if (chute < 1 || chute > 100) {
            printf("Chute inválido! Tente novamente.\n");
        } else if (chute == numero_secreto) {
            printf("Parabéns! Você acertou o número secreto!\n");
        } else if (chute < numero_secreto) {
            printf("O número secreto é maior que %d. Tente novamente.\n", chute);
        } else {
            printf("O número secreto é menor que %d. Tente novamente.\n", chute);
        }
    } while (chute != numero_secreto && chute != -1);

    return 0;
}