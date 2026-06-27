#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    printf("Endereco: %p\n\n", ptr);
    ptr = (int *)malloc(sizeof(int));
    printf("Endereco: %p \nValor: %d\n\n", ptr, *ptr);
    

    return 0;
}