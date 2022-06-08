#include <stdio.h>
#include <stdlib.h>

int main()
{   //5 significa que o vetor tem 6 posicoes (0-5)
    int a=3, i, vet[3];

    for (i=0; i<=3; i++){
        printf("\nDigite o numero %d\t", i);
        scanf("%d", &vet[i]);
    }
    for (i=0; i<=3; i++){
        printf("\nA posição %d é igual a %d", i, vet[i]);
    }
printf("\n\n");



    return 0;
}
