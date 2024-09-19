#include <stdio.h>
#include <string.h>

#define MAX_PRODUTOS 100
#define MAX_DESCRICAO 50
#define MAX_CODIGO 10

typedef struct {
    char codigo[MAX_CODIGO];
    char descricao[MAX_DESCRICAO];
    float valorUnitario;
    int qtdEstoque;
    float valorEstoque;
} Produto;

Produto produtos[MAX_PRODUTOS];
int numProdutos = 0;

void entradaDeProdutos() {
    printf("----------------------------------------------------------------------\n");
    printf("Entrada de Cadastro de Produtos\n");
    printf("----------------------------------------------------------------------\n");

    Produto produto;
    printf("Código: ");
    fgets(produto.codigo, MAX_CODIGO, stdin);
    produto.codigo[strcspn(produto.codigo, "\n")] = 0;

    printf("Descrição: ");
    fgets(produto.descricao, MAX_DESCRICAO, stdin);
    produto.descricao[strcspn(produto.descricao, "\n")] = 0;

    printf("Valor Unitário: ");
    scanf("%f", &produto.valorUnitario);

    printf("Qtd Estoque: ");
    scanf("%d", &produto.qtdEstoque);

    produto.valorEstoque = produto.valorUnitario * produto.qtdEstoque;

    printf("Digite (1-Para Gravar, 2-Voltar a tela inicial) : ");
    int opcao;
    scanf("%d", &opcao);

    if (opcao == 1) {
        produtos[numProdutos] = produto;
        numProdutos++;
        printf("Produto gravado com sucesso!\n");
    } else {
        printf("Voltando à tela inicial...\n");
    }
}

void listarProdutos() {
    printf("----------------------------------------------------------------------\n");
    printf("Listagem de Produtos\n");
    printf("----------------------------------------------------------------------\n");

    for (int i = 0; i < numProdutos; i++) {
        printf("Código: %s\n", produtos[i].codigo);
        printf("Descrição: %s\n", produtos[i].descricao);
        printf("Valor Unitário: %.2f\n", produtos[i].valorUnitario);
        printf("Qtd Estoque: %d\n", produtos[i].qtdEstoque);
        printf("Valor Estoque: %.2f\n", produtos[i].valorEstoque);
        printf("\n");
    }
}

float valorTotalDoEstoque() {
    float total = 0;
    for (int i = 0; i < numProdutos; i++) {
        total += produtos[i].valorEstoque;
    }
    return total;
}

int main() {
    int opcao;
    do {
        printf("----------------------------------------------------------------------\n");
        printf("Sistema de Estoque\n");
        printf("----------------------------------------------------------------------\n");
        printf("1) Entrada de Produtos\n");
        printf("2) Listar os Produtos\n");
        printf("3) Valor Total do Estoque\n");
        printf("4) Fim\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                entradaDeProdutos();
                break;
            case 2:
                listarProdutos();
                break;
            case 3:
                printf("Valor Total do Estoque: %.2f\n", valorTotalDoEstoque());
                break;
            case 4:
                printf("Fim do programa...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}