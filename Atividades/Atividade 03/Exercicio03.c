 #include <stdio.h>

void exibirBits(int num) {
    int i;
    for (i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

int main() {
    int num1, num2, resultado;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Bits do primeiro número: ");
    exibirBits(num1);
    printf("Bits do segundo número: ");
    exibirBits(num2);

    printf("Operações básicas:\n");

    resultado = num1 & num2;
    printf("AND (E): ");
    exibirBits(resultado);

    resultado = num1 | num2;
    printf("OR (OU): ");
    exibirBits(resultado);

    resultado = num1 ^ num2;
    printf("XOR (OU Exclusivo): ");
    exibirBits(resultado);

    resultado = ~num1;
    printf("NOT (NÃO): ");
    exibirBits(resultado);

    resultado = num1 << 2;
    printf("Deslocamento à esquerda (2 bits): ");
    exibirBits(resultado);

    resultado = num1 >> 2;
    printf("Deslocamento à direita (2 bits): ");
    exibirBits(resultado);

    return 0;
}

