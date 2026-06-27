#include <stdio.h>

int main() {
    int numeros[10];
    int i;
    
    // Leitura
    printf("Digite 10 números inteiros:\n");
    for(i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    // Impressão em uma única linha
    printf("\nVetor: [");
    for(i = 0; i < 10; i++) {
        printf("%d", numeros[i]);
        if(i < 9) printf(", ");
    }
    printf("]\n");
    
    return 0;
}