  /* Escreva  um  programa  em  linguagem  C  que  leia  um  peso  e  o  número  de  um  planeta,  e  imprima  o  valor 
correspondente  do  peso  neste  planeta.  A  relação  de  planetas  é  dada  a  seguir  juntamente  com  o  valor  das 
gravidades relativas à Terra. 
 
Código Gravidade Relativa Planeta 
1 0,37 Mercúrio 
2 0,88 Vênus 
3 0,38 Marte 
4 2,64 Júpiter 
5 1,15 Saturno 
6 1,17 Urano 
 
 
Para calcular o peso no planeta, deve ser utilizada a fórmula:   PP = (PT/10) x G,  
em que:   
PP = Peso do Planeta 
 PT = Peso na Terra 
 G = Gravidade Relativa */
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