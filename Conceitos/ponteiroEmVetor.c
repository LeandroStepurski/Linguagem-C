#include <stdio.h>

int main() {
    char c[15] = "Linguagem C";
    char *pc = c; 

    while (*pc != '\0') { //Percorre o vetor de caracteres até encontrar o caractere nulo
        printf("%c ", *pc); // Não precisa ter o & para acessar o endereço do vetor, pois o nome do vetor já é um ponteiro para o primeiro elemento do vetor.
        pc++;
    }

    return 0;
}
