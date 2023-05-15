#include <stdio.h>

float media_aluno(int notas[], int num_alunos);

int main() {
    int num_alunos;

    printf("Insira o número de alunos: ");
    scanf("%d", &num_alunos);

    int notas[num_alunos];
    int i;

    printf("Insira as notas dos alunos:\n");
    for (i = 0; i < num_alunos; i++) {
        printf("Aluno %d: ", i + 1);
        scanf("%d", &notas[i]);
    }

    float media = media_aluno(notas, num_alunos);
    printf("A média das notas dos alunos aprovados é: %.2f\n", media);

    return 0;
}

float media_aluno(int notas[], int num_alunos) {
    int i;
    float soma = 0;
    int contador = 0;

    for (i = 0; i < num_alunos; i++) {
        if (notas[i] >= 6) {
            soma += notas[i];
            contador++;
        }
    }

    if (contador == 0) {
        return 0; // Retorna 0 se nenhum aluno foi aprovado
    } else {
        return soma / contador;
    }
}
