/* algoritmo que calcule a média ponderada de 4 números passados pelo usuário, sabendo-se que os pesos 
são, respectivamente, 1, 2, 3 e 4 */

#include<stdio.h>

    int main(){
        
        //decl
        float a, b, c, d;
        float media;

        printf("insira tres valores: ");
        scanf("%f %f %f %f", &a, &b, &c, &d);

        media = (a * 1 + b * 2 + c * 3 + d * 4) / (1 + 2 + 3 + 4.0);
        printf("A media pondera e: %.2f", media);

        return 0;
    }