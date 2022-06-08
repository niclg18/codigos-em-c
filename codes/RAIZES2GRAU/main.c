#include <stdio.h>
#include <stdlib.h>

int main()
{
float a, b, c, x1, x2, raizDelta, delta;

printf("Insira os coeficientes");

printf("\na: ");
scanf("%f", &a);

printf("\nb: ");
scanf("%f", &b);

printf("\nc: ");
scanf("%f", &c);

delta = raizDelta*raizDelta;

x1 = (-b + raizDelta)/2*a;

x2 = (-b - raizDelta)/2*a;

if (delta < 0){
    printf("\nAs duas raizes sao numeros complexos\n");
}
    else {
        printf("\nAs duas raizes sao numeros reais\n");
        printf("\nx1 = %f", x1);
        printf("\nx2 = %f", x2);
    }
return 0;
}
