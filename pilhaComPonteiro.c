#include <stdio.h>
#include <stdlib.h>

struct tpilha {
    int *dados;  // ponteiro para vetor dinâmico
    int ini;
    int fim;
    int capacidade; // guarda o tamanho máximo da pilha
};

struct tpilha pilha;

// Protótipos
void inicializar_pilha(int capacidade);
void pilha_entrar();
void pilha_sair();
void pilha_mostrar();
void menu_mostrar();
void liberar_pilha();

int main() {
    int opcao;
    int capacidade;

    // Pergunta o tamanho da pilha ao usuário
    printf("Digite a capacidade maxima da pilha: ");
    scanf("%d", &capacidade);

    // Inicializa a pilha com o tamanho escolhido
    inicializar_pilha(capacidade);

    do {
        system("cls");  // Use "clear" no Linux
        pilha_mostrar();
        menu_mostrar();
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                pilha_entrar();
                break;
            case 2:
                pilha_sair();
                break;

 case 0:
                printf("\nSaindo...\n");
                break;
                default:
                printf("\nOpcao invalida!\n");
        }

        if(opcao != 0) {
            system("pause");
        }
    } while(opcao != 0);

    // Libera a memória alocada
    liberar_pilha();

    return 0;
}