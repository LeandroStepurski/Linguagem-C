#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int tamanho;
    int *vetor1, *vetor2;

    printf("Escolha o tamanho dos vetor: ");
    scanf("%d", &tamanho);

    vetor1 = (int *)malloc(sizeof(int) * tamanho);
    vetor2 = (int *)malloc(sizeof(int) * (tamanho*2));

    printf("\nVetor1 (potências de 2):\n");
    for (int i = 0; i < tamanho; i++) {
        vetor1[i] = pow(2, i);
        printf("Posicao %d: %d\n", i, vetor1[i]);
    }

    printf("\nVetor2 (potências de 3):\n");
    for (int i = 0; i < tamanho*2; i++) {
        vetor2[i] = pow(3, i);
        printf("Posicao %d: %d\n", i, vetor2[i]);
    }

    // Liberando a memória alocada
    free(vetor1);
    free(vetor2);
    system("pause");

    return 0;
}