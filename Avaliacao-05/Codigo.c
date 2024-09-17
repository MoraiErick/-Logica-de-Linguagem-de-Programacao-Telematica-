#include <stdio.h>
#include <string.h>

#define MAX_LINE 1024

int main() {
    FILE *arquivo;
    char linha[MAX_LINE];
    int escolha;

    // Criar arquivo em modo de escrita
    arquivo = fopen("meu_arquivo.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao criar arquivo!\n");
        return 1;
    }

    // Menu para escolher se vai escrever mais algum texto
    do {
        printf("Digite um texto (ou 'sair' para fechar o arquivo):\n");
        fgets(linha, MAX_LINE, stdin);
        linha[strcspn(linha, "\n")] = 0; // Remover caractere de quebra de linha

        if (strcmp(linha, "sair") != 0) {
            fprintf(arquivo, "%s\n", linha);
        } else {
            break;
        }
    } while (1);

    // Fechar arquivo
    fclose(arquivo);

    // Abrir arquivo em modo de leitura
    arquivo = fopen("meu_arquivo.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo!\n");
        return 1;
    }

    // Mostrar cabeçalho
    printf(" \n======== Conteúdo do Arquivo ========\n");

    // Ler cada linha do arquivo
    while (fgets(linha, MAX_LINE, arquivo) != NULL) {
        printf("%s", linha);
    }

    // Fechar arquivo
    fclose(arquivo);

    return 0;
}