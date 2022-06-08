#include <stdio.h>
#include <stdlib.h>
int main(void){
    int a, i, ma, me;
    printf("Qual o indice do vetor?: ");
    scanf("%d", &a);
    int x[a];

    for (i = 1; i <= a; i++){
    printf("\nDigite o numero %d: ", i);
    scanf("%d", &x[i]);

        if (x[i] > ma){
            ma = x[i];;
        }
        if (x[i] < me){
            me = x[i];;
        }
    }
    printf("\nmaior eh %d", ma);
    printf("\nmenor eh %d", me);
}
