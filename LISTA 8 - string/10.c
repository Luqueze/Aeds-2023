

#include<stdio.h>
#include<string.h>

int main(){


    char str[51];
    char str2[51];

    char maior[51];
    char menor[51];

    int i = 0;

    printf("Digite uma string: ");
    fgets(str, 50, stdin);

    strcpy(maior, str);
    strcpy(menor, str);

    while(str[0] != '0'){

        printf("Digite outra string: ");
        fgets(str, 50, stdin);

        if(strcmp(str, maior) > 0){
            strcpy(maior, str);
        }

        if(strcmp(str, menor) < 0){
            strcpy(menor, str);
        }

    }

    printf("A maior string digitada foi: %s\n", maior);
    printf("A menor string digitada foi: %s\n", menor);

    return 0;

    return 0;
}