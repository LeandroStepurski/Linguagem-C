#include <stdio.h>

typedef struct {
    char nome[30];
    float nota1;
    float nota2;
} Aluno;

int main() {
    Aluno alunos[2][2]; //Matriz de 2x2 para armazenar os dados dos alunos
    int i, j;

    printf("===CADASTRO===\n\n");

    for (i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Aluno [%d][%d]:\n", i, j);
            printf("Nome: ");
            scanf("%s", alunos[i][j].nome);
            printf("Nota 1: ");
            scanf("%f", &alunos[i][j].nota1);
            printf("Nota 2: ");
            scanf("%f", &alunos[i][j].nota2);
        }
    
    }

    printf("\n===LISTAGEM===\n\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            float media = (alunos[i][j].nota1 + alunos[i][j].nota2) / 2;
            printf("[%d][%d]: %s - Média: %.2f\n", i, j, alunos[i][j].nome, media);
        }
    }

    return 0;
}