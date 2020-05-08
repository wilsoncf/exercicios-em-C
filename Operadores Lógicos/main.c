#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iJ, iI, idade;
    iJ = 17;
    iI = 60;
    idade = 0;

    printf("Digite sua idade:\n");
    scanf("%i", &idade);

    if(idade <= iJ)
    {
            printf("\nVoce e jovem!!\n");

    } else{
           if(idade >= iI){
                printf("\nVoce e idoso!!\n");
                }else{
                    if((idade > iJ)&&(idade < iI)){
                            // a meia idade se caracteriza por qualquer pessoa que possua 17 < idade < 60
                            // && -> verifica se as duas operações são verdadeiras, significa e
                            // !!-> verifica se uma das duas afirmações são verdadeiras
                        printf("\nVoce e de meia idade!!\n");
                    }
                }
    }

    return 0;
}
