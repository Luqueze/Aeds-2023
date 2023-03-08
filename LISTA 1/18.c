

#include<stdio.h>
#include<math.h>


    int main(){

        float x1,y1,x2,y2,d;

        printf("insira o valor de x1 e y1 respectivamente: ");
        scanf("%f %f", &x1, &y1);

        printf("insira o valor de x2 e y2 respectivamente: ");
        scanf("%f %f", &x2, &y2);

        d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        //d = pow(pow(x2 - x1, 1/2.0) + pow(y2 - y1, 1/2.0), 1/2.0);


        printf("a distancia entre dois pontos e: %.2f", d);
        return 0;


    }