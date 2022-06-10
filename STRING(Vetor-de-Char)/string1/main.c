#include <stdio.h>
#include <stdlib.h>

#include <string.h> //contem o strlen (string lenght)

int main(void){
    int i;
    char nome[10];
    printf("Insira seu  nome: ");
    scanf("%s", nome); //string dispensa o &

    //char meu_nome[  ] = "Nicolas" ;//índice vazio pois declarei o valor da string junto
    //a última posição é ocupada pelo finalizador '\0'
    //se atribuo menos pesições que o tanto que cabe, o finalizador é colocado automaticamente

    int cont = 0;

    for (i=0;  meu_nome[i] != '\0'; i++){

        printf("valor da posicao %d da string: %c\n", i, meu_nome[i]);
        cont ++;
    }

    printf("%s", meu_nome);


    printf("\nNumero de caracteres da string: %d\n", cont);
    printf("Numero de caracteres da string usando strlen: %d\n", strlen(meu_nome)); // string lenght(nomedastring)

}
