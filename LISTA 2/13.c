#include<stdio.h>
#include<math.h>

    int main(){

        int a, b, c;
        float d, x1,x2;

        printf("Insira os valores de a,b,c: ");
        scanf("%d %d %d", &a, &b, &c);
        

        d = pow(b, 2) - 4 * a * c;

        if(d == 0){

            x1 = -b / (2 * a);
            printf("A funcao possui uma raiz real que e igual a %f", x1);
        }

        else if(d < 0 ){
            printf("nao exite raiz real");

        }else{

            x1 = (- b + sqrt(d)) / (2 * a);
            x2 = (- b - sqrt(d)) / (2 * a);

            printf("As raizes sao iguais a x1 = %f\nx2 = %f", x1, x2);
        }

        return 0;
    }