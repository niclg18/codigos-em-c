#include <stdio.h>
#include <stdlib.h>

int main(void){

char nome[61];
printf("Digite seu NOME: ");

//ESCOLHER UM DOS 3 ABAIXO (MESMO RESULTADO)

//scanf("%s", nome); //string dispensa o &
//fgets(nome, 61, stdin);
//gets(nome);


printf("O NOME armazenado foi: %s", nome);

}
