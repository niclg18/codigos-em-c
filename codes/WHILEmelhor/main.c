#include <stdio.h>
#include <stdlib.h>
int main(){

int contador=0, numprovas;
float nota, media, total;

printf("Numero de provas que teve: ");
scanf("%d", &numprovas);

//while realiza um teste l�gico, se tiver sozinho e
//retornar verdadeiro a� o programa executa as a��es
// das chaves, se nao ele ignora as chaves do while,
//e se tiver um do antedas chaves e o while depois, a�
// sempre ira executar pelo menos uma vez as chaves, e
//o while que vem depois determina se o loop se repeti�.

    do{
        printf("digite a nota: \n");
        scanf("%f", &nota);
        total = total + nota;
        //final do while pode haver um incremento (++)
        contador++;
    }while (contador<numprovas);

media = total/numprovas;
printf("Nota media: %.1f\n", media);

return 0;
}


