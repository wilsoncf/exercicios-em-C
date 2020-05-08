#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    char oper;
    printf("Digite uma operacao matematica:");
    scanf("%i %c %i", &num1, &oper, &num2);

    if(oper = '+')
    {
        int r = num1 + num2;
        printf("%i\n", r);
    }
    else
    {
        int x = num1 - num2;
        printf("%i", x);
    };

    return 0;
}
