#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    //Alocar dinamicamente um inteiro
    ptr = (int *)malloc(sizeof(int));
    //Verificar se a alocação foi bem sucedida  
    if (ptr == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1; // Retorna um código de erro
    }
    //Preencher o valor alocado
    *ptr = 42;
    //Exibir o valor
    printf("Valor: %d\n", *ptr);
    printf("Endereco: %p\n", ptr);
    //Liberar a memória alocada
    free(ptr);
    printf("Memoria liberada.\n");
    return 0;
}