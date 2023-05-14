#include<stdio.h>
    char resultado(float media);
    int main(){

        int n;
        

        printf("Insira quantos alunos deseja inserir a media: ");
        scanf("%d", &n);

        float media[n];

        for(int i = 0; i < n; i++){
            printf("Insira a media do aluno %d: ", i+1);
            scanf("%f", &media[i]);
        }

        for(int i = 0; i < n; i++){
            printf("Aluno %d: %.2f - %c\n", i+1, media[i], resultado(media[i]));
        }

        return 0;


    }

    char resultado(float media){
        if (media <= 39){
            return 'F';
        }
        else if (media <= 59 && media >= 40){
            return 'E';
        }
        else if (media <= 69 && media >= 60){
            return 'D';
        }
        else if (media <= 79 && media >= 70){
            return 'C';
        }
        else if (media <= 89 && media >= 80){
            return 'B';
        }
        else if (media <= 100 && media >= 90){
            return 'A';
        }
    }

