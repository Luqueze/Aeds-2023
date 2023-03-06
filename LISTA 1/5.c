#include <stdio.h>
#include <math.h>

    int main(){

        float a,cubo, raizq, raizc, seno, coss;

        printf("insira um numero positivo: ");
        scanf("%f", &a);

        cubo = pow(a, 3);
        raizq = sqrt(a);
        raizc = cbrt(a);
        seno = sin(a);
        coss = cos(a);
        

        printf("O numero %f ao cubo e igual a: %.2f\n", a, cubo);
        printf("a raiz quadrada do numero inserido e: %.2f\n", raizq);
        printf("A raiz cubica do numeor inserido e: %.2f\n", raizc);
        printf("o seno do numero inserido e: %.2f\n", seno);
        printf("o coseno do numero inserido e: %.5f\n", coss);

        return 0;        


    }