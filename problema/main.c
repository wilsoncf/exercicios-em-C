#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3;
    printf("insira tres numeros inteiros:\n");
    scanf("%i  %i  %i", &num1, &num2, &num3);

    int qnum1, qnum2, qnum3;
    qnum1 = num1*num1;
    qnum2 = num2*num2;
    qnum3 = num3*num3;

    printf("o quadrado dos numeros sao: %i, %i, %i", qnum1, qnum2, qnum3);
    return 0;
}
