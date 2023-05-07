#include<stdio.h>
#include<stdlib.h>

int main(){

    float media = 0;
    int num_alunos;
    double *notas;
    double soma = 0.0;

    printf("Insira o numero de alunos: ");
    scanf("%d", &num_alunos);

    notas = (double*) malloc(num_alunos * sizeof(double));

    for(int i = 0; i < num_alunos; i++){
        printf("Insira a nota do aluno %d: ", i+1);
        scanf("%lf", &notas[i]);
        media += notas[i];
    }

    media = soma / num_alunos;

    printf("\nNotas:\n");
    for (int i = 0; i < num_alunos; i++) {
        printf("Aluno %d: %.2lf\n", i + 1, notas[i]);
    }

    printf("\nMédia das notas: %.2lf\n", media);

    free(notas);

    return 0;


}