#include <stdio.h>

int main() {
    int soma = 0; // Inicializar variável para armazenar a soma

    for (int i = 1; i <= 10; i++) {
        soma += i; // Adicionar o valor de i à soma
    }

    printf("A soma dos primeiros 10 números inteiros positivos é: %d\n", soma);

    return 0;
}