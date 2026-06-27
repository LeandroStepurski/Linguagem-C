#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    int *ptr;
    x = 20;
    ptr = &x;
    printf("Endereco: %p \nValor: %d\n\n", ptr, *ptr);
    ptr = (int *)malloc(sizeof(int));
    printf("Endereco: %p \nValor: %d\n\n", ptr, *ptr);

    return 0;
}