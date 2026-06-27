#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor; // Ponteiro para o vetor
    int tamanho = 10;

    // printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    // Alocando memória para o vetor
    vetor = (int *)malloc(tamanho * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Preenchendo o vetor
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Exibindo os elementos do vetor
    printf("Elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Liberando a memória alocada
    free(vetor);

    return 0;
}