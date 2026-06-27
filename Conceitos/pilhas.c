#include <stdio.h>
#include <stdlib.h>

#define tamanho 10

struct tpilha {
    int dados[tamanho];
    int ini;
    int fim;
};

struct tpilha pilha;

// Protótipos
void pilha_entrar();
void pilha_sair();
void pilha_mostrar();
void menu_mostrar();

int main() {
    int opcao;

    // Inicializa a pilha vazia
    pilha.ini = 0;
    pilha.fim = 0;

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

    return 0;
}

// Função PUSH - Empilhar um elemento

void pilha_entrar() {
    if (pilha.fim == tamanho) {
        printf("\nA pilha esta cheia, impossivel empilhar um novo elemento!\n\n");
        system("pause");
    }
    else {
        printf("\nDigite o valor a ser empilhado: "); 
        scanf("%d", &pilha.dados[pilha.fim]); // insere na posição livre
        pilha.fim++; // avança o fim
    }
}


// Função POP - Desempilhar (remover do final)
void pilha_sair() {
    if(pilha.ini == pilha.fim) {
        printf("\nA pilha está vazia, não há nada para desempilhar!\n\n");
        system("pause");
    }
    else {
        pilha.fim--;  // primeiro decrementa o fim
        pilha.dados[pilha.fim] = 0;  // depois zera a posição
        printf("\nValor desempilhado com sucesso!");
    }
}

// Mostrar o menu de opções
void menu_mostrar() {
    printf("\n--- MENU PILHA ---\n");
    printf("1 - EMPILHAR (push)\n");
    printf("2 - DESEMPILHAR (pop)\n");
    printf("0 - SAIR\n");
    printf("Opcao: ");
}

// Mostrar o conteúdo da Pilha
void pilha_mostrar() {
    int i;
    printf("\n========== ESTADO DA PILHA ==========\n");
    printf("ini: %d | fim: %d\n", pilha.ini, pilha.fim);
    printf("Elementos: [ ");

    for(i = 0; i < tamanho; i++) {
        printf("%d ", pilha.dados[i]);
    }
    printf("]\n");

    // Mostra indicadores visuais
    printf("            ");
    for(i = 0; i < pilha.fim; i++) {
        printf("^  ");
    }
    printf("(topo)\n");
    printf("======================================\n");
}


// Função para liberar a memória alocada
// void liberar_pilha() {
//     free(pilha.dados);
//     printf("\nMemoria liberada com sucesso!\n");
// }



// Push (pilha_entrar):
// pilha.dados[pilha.fim] = valor;  // insere na posição livre
// pilha.fim++;                      // avança o fim

// Pop (pilha_sair):
// pilha.fim--;                      // recua o fim
// pilha.dados[pilha.fim] = 0;      // zera a posição removida