#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i = 10;

    printf("Digite um número != de 5: \n");
    scanf("%i", &i);

    if(i != 5)
    {
        printf("A expressao e:");
        printf("\tTRUE");
    }else{
        printf("A expressao e:");
        printf("\tFALSE");
    }


    // ! é um sinal de negação, igual a expressão NOT

    /*
        1) se a condição for positiva vai imprimir valor 1
        2) se a condição for negativa vai imprimir o valor 0


        == comparação positiva
        != comparação negativa
        = atribuiçaõ de valor a uma variavel
    */

    return 0;
}
