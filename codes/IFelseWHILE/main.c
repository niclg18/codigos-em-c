#include <stdio.h> #include <stdlib.h>
int main(){

int a;

printf("Digite um numero positivo: ", a);
scanf("%d", &a);

if (a>0){
    printf("\nParabens!\n");
        }
else {
//while realiza um teste l�gico, se retornar verdadeiro a� o programa executa as a��es das chaves
    while (a<=0){

        printf("*numero inv�lido*\n\n");

        printf("Digite um numero positivo: ");
        scanf("%d", &a);
        //final do while pode haver um incremento (++)
}}
        printf("\nParabens!\n");
return 0;
}







