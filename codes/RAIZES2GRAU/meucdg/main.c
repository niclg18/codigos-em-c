#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A, B, C;

    printf("Algoritmo para determinar se o triangulo existe ou nao, e qual sua natureza");

    printf("\n\nDigite o lado A: \n");
    scanf("%f", &A);

    printf("\nDigite o lado B: \n");
    scanf("%f", &B);

    printf("\nDigite o lado C: ");
    scanf("%f", &C);

    float D=0;


    if (A<B+C){
        if (B<A+C){
            if (C<A+B){
                printf("\nO triangulo atende a condicao de existencia");
                D = 1;
        }
    }
}



       if (D!=1){

            while (D!=1){

            printf("\nO triangulo nao existe");

            printf("\n\nDigite o lado A: ");
            scanf("%f", &A);

            printf("\nDigite o lado B: ");
            scanf("%f", &B);

            printf("\nDigite o lado C: ");
            scanf("%f", &C);



if (A<B+C){
    if (B<A+C){
            if (C<A+B){
                    printf("\nO triangulo atende a condicao de existencia");
                    D = 1;
                }
            }
        }
    }
}



    if ((A==B)&&(B==C)){
    printf("\nO Triangulo e equilatero");
}
        if ((A!=B)&&(A!=C)&&(B!=C)){
        printf("\nO triangulo e escaleno");
    }
            if (((A==B)&&(A!=C))||((B==C)&&(B!=A))||((A==C)&&(C!=B))){
            printf("\nO triangulo e isosceles");
        }

 return 0;
}
//Feito por Nícolas LG





        float a=A*A, b=B*B, c=C*C;

        if (((a=b+c)||(b=a+c))||(c=a+b)){
            printf(" e tambem eh retangulo");
        }





