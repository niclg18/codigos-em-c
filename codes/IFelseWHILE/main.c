#include <stdio.h> #include <stdlib.h>
int main(){

int a;

printf("Digite um numero positivo: ", a);
scanf("%d", &a);

if (a>0){
    printf("\nParabens!\n");
        }
else {
//while realiza um teste lógico, se retornar verdadeiro aí o programa executa as ações das chaves
    while (a<=0){

        printf("*numero inválido*\n\n");

        printf("Digite um numero positivo: ");
        scanf("%d", &a);
        //final do while pode haver um incremento (++)
}}
        printf("\nParabens!\n");
return 0;
}







