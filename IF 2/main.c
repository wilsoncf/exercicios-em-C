#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i = 10;

    printf("Digite um n�mero != de 5: \n");
    scanf("%i", &i);

    if(i != 5)
    {
        printf("A expressao e:");
        printf("\tTRUE");
    }else{
        printf("A expressao e:");
        printf("\tFALSE");
    }


    // ! � um sinal de nega��o, igual a express�o NOT

    /*
        1) se a condi��o for positiva vai imprimir valor 1
        2) se a condi��o for negativa vai imprimir o valor 0


        == compara��o positiva
        != compara��o negativa
        = atribui�a� de valor a uma variavel
    */

    return 0;
}
