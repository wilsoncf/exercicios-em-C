#include <stdio.h>
#include <stdlib.h>

int main()
{

    double nota1, nota2, nota3, nota4, media, nf;
    nota1 = nota2 = nota3 = nota4 = media = nf =0;

    printf("===============Media Escolar 1.0===============\n\n");

    printf("Digite sua primeira nota bimestral:\n");
    scanf("%lf", &nota1 );

    printf("Digite sua segunda nota bimestral:\n");
    scanf("%lf", &nota2 );

    printf("Digite sua terceira nota bimestral:\n");
    scanf("%lf", &nota3 );

    printf("Digite sua quarta nota bimestral:\n");
    scanf("%lf", &nota4 );

    media = (nota1 + nota2 + nota3 + nota4) / 4
    ;
    nf = 6 - media;

    printf("Sua media escolar foi de: %lf\n\n", media);

    if(media >= 6)
    {
            printf("Voce foi aprovado!!");

    }else{
            if((media <= 5 )&&(media >= 3)){
                printf("Voce foi reprovado :(, mas tem direito a recuperacao\t");
                printf("Voce precisava de : %lf", nf);
                    }else{
                        if(media < 3){
                            printf("Voce foi reprovado e nao tem direito de recuperacao");
                            printf("Voce precisava de : %lf", nf);
                                     }
                        }
            }
    return 0;
}
