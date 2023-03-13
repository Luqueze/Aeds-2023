#include<stdio.h>

    int main(){

        int c;
        float pp, pt;

        puts("Insira o codigo de seu planeta.\n 1.Mercurio \n 2.Venus\n 3.Marte ");
        printf(" 4.Jupiter\n 5.Saturno\n 6.Urano\n :");
        if(scanf("%d", &c)< 1 || c <= 0 || c >= 6){
            printf("Codigo invalido.");
            return 1;
        }

        printf("Insira o peso do planeta: ");
        scanf("%f", &pt);

        if(c == 1){
            pp = (pt / 10.0) * 0.37;
        }

        else if(c == 2){
            pp = (pt / 10.0) * 0.88;
        }

        else if(c == 3){
            pp = (pt / 10.0) * 0.38;
        }

        else if(c == 4){
            pp = (pt / 10.0) * 2.64;
        }

        else if(c == 5){
            pp = (pt / 10.0) * 1.15;
        }

        else if(c == 6){
            pp = (pt / 10.0) * 1.17;
        }
        
    

        printf("O peso real do planeta e %.2f", pp);

        return 0;
    }