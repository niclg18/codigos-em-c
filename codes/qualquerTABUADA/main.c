#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab, limite;
    printf("Tabuada de: ");
    scanf("%d", &tab);
    printf("Multiplicador maximo: ");
    scanf("%d", &limite);

    printf("Tabuada de: %d", tab);

    for (int cont = 1; cont<=limite; cont++){

        printf("\n%2d x %d = %d", tab, cont, cont*tab);
    }
    return 0;
}
