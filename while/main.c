#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x                   = 0;
    int valDigitado         = 0;

    printf("Informe a qntd de vezes que vc deseja que repetimos a mesma instrucao:");
    scanf("%i", &valDigitado);

    while(x < valDigitado){
        printf("%i\n", x * 10);
        x = x + 1;
    }

    return 0;
}
