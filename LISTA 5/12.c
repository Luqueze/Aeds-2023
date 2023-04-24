 
/* • Receba as notas de 15 alunos em cinco provas diferentes e armazene-as em uma matriz 15x5; 
• Receba os números de chamada dos 15 alunos e armazene-os em um vetor de 15 posições; 
• Calcule e exiba a média das notas de cada aluno e a situação do aluno: 
  Aprovado: media maior ou igual à 7 
  Reprovado: media menor que 4 
  Exame Especial: media maior ou igual 4 e menor que 7 
• Calcule e exiba a média de cada prova. */

#include<stdio.h>

    int main(){

        int notas[15][5];
        int chamada[15];

        for(int i = 0; i < 15; i++){
            printf("Digite o numero de chamada do aluno %d: ", i+1);
            scanf("%d", &chamada[i]);
            for(int j = 0; j < 5; j++){
                printf("Digite a nota da prova %d do aluno %d: ", j+1, i+1);
                scanf("%d", &notas[i][j]);
            }
        }

        for(int i = 0; i < 15; i ++){
            int soma = 0;
            for(int j = 0;j < 5; j++){
                soma += notas[i][j];
            }

            float media = soma / 5.0;
            if(media >= 7){
            printf("O aluno %d possui uma media de %.2f e está aprovado.\n", chamada[i], media);
            }
            else if(media < 4){
                printf("O aluno %d possui uma media de %.2f e está reprovado.\n", chamada[i], media);
            }else{
                printf("O aluno %d possui uma media de %.2f e precisa de prova especial.\n", chamada[i], media);
            }        
        }

        for(int i = 0; i < 15; i ++){
            int soma = 0;
            for(int j = 0;j < 5; j++){
                soma += notas[j][i];
            }

            float media = soma / 15.0;
            printf("A media da prova %d eh %.2f", i+1, media);
        }

        return 0;
        

        
    }