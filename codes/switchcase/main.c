#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int valor, d;

    float c, f;

    printf ("Digite:\n1=celsius para fahrenheit\n2=fahrenheit para celsius:\n");
    scanf("%d", &valor);
    d=0;

    do while (d=0){
    switch ( valor )
    {
        case 1 :
        printf ("Valor em Celsius: ");
        scanf("%f", &c);
        f=32+(c*9/5);
        d=1;
        printf("Valor em Fahrenheit: %.2f", f);

        break;



        case 2 :
        printf ("Valor em Fahrenheit: ");
        scanf("%f", &f);
        c = (f - 32) * 5/9;
        d=1;
        printf("Valor em Celsius: %.2f", c);

        break;

        default :
        printf ("Valor invalido!\n");
        d=0;
    }}}


