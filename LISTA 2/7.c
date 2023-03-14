/* A nota de um estudante é calculada a partir de 3 notas atribuídas respectivamente a um trabalho de laboratório, 
uma avaliação semestral e um exame final. Cada uma dessas notas possuem pesos diferentes para o cálculo da 
média final do aluno. Assim,faça um algoritmo que receba as 3 notas, os pesos das mesmas e a média necessária 
para aprovação do aluno. O algoritmo deve calcular e exibir a média ponderada para o aluno. Além disso, mostre 
a situação "Aprovado" (média maior ou igual que media aprovação), "exame especial" (média entre 4 e a média 
de aprovação) ou "Reprovado" (média menor que 4). */
#include <stdio.h>

    int main(){

        float a, b ,c, media; //notas
        int p1, p2, p3;

        puts("insira o valor das 3 notas: ");
        scanf("%f %f %f", &a, &b, &c);

        puts("Insira o peso das 3 notas respectivamente:");
        scanf("%d %d %d", &p1, &p2, &p3);

        media = (p1 * a + p2 * b + p3 * c) / (p1 + p2 + p3);
        printf("%f", media);

        if(media < 4){
            puts("o aluno foi reprovado");
        }
        else if(media >= 4 && media < 7){
            puts("o aluno precisa de exame especial");
        }
        else{
            puts("o aluno esta aprovado");
        }
        
        return 0;

    }