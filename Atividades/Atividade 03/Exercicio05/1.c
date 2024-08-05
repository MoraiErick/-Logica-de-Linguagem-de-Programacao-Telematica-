#include <stdio.h>

int main() {
    int i = 1; // Inicializar variável com o primeiro número

    while (i <= 10) {
        if (i % 2 == 0) { // Verificar se o número é par
            printf("%d ", i);
        }
        i++; // Incrementar em 1 para ir para o próximo número
    }

    printf("\n");

    return 0;
}