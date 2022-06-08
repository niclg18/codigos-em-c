#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\t\tO triangulo existe? Se sim, qual seu tipo?\n\n");

    int a, b ,c;

    printf("Insira o lado A do triangulo: \n");
    scanf("%d", &a);

    printf("Insira o lado B do triangulo: \n");
    scanf("%d", &b);

    printf("Insira o lado C do triangulo: \n");
    scanf("%d", &c);

    //colocar um do while aqui


    if ((a<b+c)&&(b<a+c)&&(c<b+a)){
        if ((a==b)&&(b==c)){
            printf("O triangulo e equilatero");
        }
        else {
            if ((a==b)||(a==c)||(b==c)){
                printf("O triangulo e isosceles");
            }
            else {
                printf("O triangulo e escaleno");
            }
        }
        if (((a*a==b*b+c*c)||(b*b==a*a+c*c))||(c*c==a*a+b*b)){
            printf(" e retangulo");
        }
    }
    else {
        printf("nao atende a condicao de existencia");
    }

    return 0;
}
