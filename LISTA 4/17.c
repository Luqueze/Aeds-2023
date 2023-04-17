#include <stdio.h>

int main() {

    int idade;
    int totalMenorIgual16 = 0;
    int totalMaior16 = 0;
    int somaIdades = 0;
    int idadeMaisNova = 999; 
    int idadeMaisVelha = 0; 

    printf("Digite as idades dos 40 alunos:\n");
    for (int i = 1; i <= 40; i++) {
        printf("Idade do aluno %d: ", i);
        scanf("%d", &idade);

        if (idade <= 16) {
            totalMenorIgual16++;
        } else {
            totalMaior16++;
        }

        somaIdades += idade;

        if (idade < idadeMaisNova) {
            idadeMaisNova = idade;
        }
        if (idade > idadeMaisVelha) {
            idadeMaisVelha = idade;
        }
    }

    float idadeMedia = (float)somaIdades / 40;

    printf("\nTotal de alunos com idade menor ou igual a 16 anos: %d\n", totalMenorIgual16);
    printf("Total de alunos com idade maior que 16 anos: %d\n", totalMaior16);
    printf("Idade media da turma: %.2f anos\n", idadeMedia);
    printf("Idade do aluno mais novo: %d anos\n", idadeMaisNova);
    printf("Idade do aluno mais velho: %d anos\n", idadeMaisVelha);

    return 0;
}
