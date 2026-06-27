#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float nota;
} Aluno;

int main() {
    Aluno aluno;  // Não precisa escrever "struct"

    printf("Cadastro de Aluno\n");
    printf("-----------------\n");

    printf("Nome: ");
    fgets(aluno.nome, 50, stdin);// fgets() lê tudo incluindo espaços

    printf("Idade: ");
    scanf("%d", &aluno.idade);

    printf("Nota: ");
    scanf("%f", &aluno.nota);

    printf("\nDados do Aluno\n");
    printf("--------------\n");
    printf("Nome.: %s", aluno.nome);
    printf("Idade: %d anos\n", aluno.idade);
    printf("Nota.: %.2f\n", aluno.nota);

    return 0;
}
