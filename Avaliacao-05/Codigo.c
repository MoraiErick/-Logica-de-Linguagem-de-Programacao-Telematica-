#include <stdio.h>
#include <string.h>

#define MAX_LINE 1024

int main() {
    FILE *arquivo;
    char linha[MAX_LINE];
    int escolha;

    arquivo = fopen("meu_arquivo.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao criar arquivo!\n");
        return 1;
    }

    do {
        printf("Digite um texto (ou 'sair' para fechar o arquivo):\n");
        fgets(linha, MAX_LINE, stdin);
        linha[strcspn(linha, "\n")] = 0; 

        if (strcmp(linha, "sair") != 0) {
            fprintf(arquivo, "%s\n", linha);
        } else {
            break;
        }
    } while (1);

    fclose(arquivo);

    arquivo = fopen("meu_arquivo.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo!\n");
        return 1;
    }

    printf(" \n======== Conteúdo do Arquivo ========\n");

    while (fgets(linha, MAX_LINE, arquivo) != NULL) {
        printf("%s", linha);
    }

    fclose(arquivo);

    return 0;
}
