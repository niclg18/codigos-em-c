#include <stdio.h>
#include <stdlib.h>

int main(void){

int nprovas, cont, resp;
float acumulado, mediaaprovar;

printf("Calcular média do aluno");

printf("\nqual a media para aprovar?");
scanf("%f", &mediaaprovar);
do
{
    printf("\nNumero de provas: ");
    scanf("%d", &nprovas);

    for (cont = 1; cont <= nprovas; cont ++){

    float nota;

    printf("\nNota da prova %d: ", cont);
    scanf("%f", &nota);

    acumulado = acumulado + nota;

}
float mediafinal;

mediafinal = (acumulado)/nprovas;

printf("\nMedia final = %.2f", mediafinal);

if (mediafinal < mediaaprovar){
    printf("Nao foi aprovado");
}
else {
    printf("\nAprovado!!");
}

printf("\nDigite 1 para continuar ou 2 para sair\n");
scanf("%d", &resp);

}while (resp==1);

}
