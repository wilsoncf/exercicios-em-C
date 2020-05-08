#include <stdio.h>
#include <stdlib.h>

int main()
{   int x, y, soma;
    y = 1;
    soma = 0;
    printf("Digite um numero, o qual voce deseja calcular a soma dos n anteriores a ele:");
    scanf("%i", &x);

    while(y <= x){
            soma = soma + 1;
            y = y + 1;
    }

        printf("%i\n", soma);


    return 0;
}
