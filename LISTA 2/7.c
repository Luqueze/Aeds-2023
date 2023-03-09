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