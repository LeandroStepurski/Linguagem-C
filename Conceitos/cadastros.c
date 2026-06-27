#include <stdio.h>
typedef struct {
    int codigo;
    char nome[50];
    float preco;
} Produto;

int main() {
    Produto p;

    printf("Codigo: ");
    scanf("%i", &p.codigo);

    printf("Nome: ");
    scanf("%s", p.nome);

    printf("Preco: ");
    scanf("%f", &p.preco);

    printf("\nProduto %d - %s custa R$ %.2f\n", p.codigo, p.nome, p.preco);

    return 0;
}