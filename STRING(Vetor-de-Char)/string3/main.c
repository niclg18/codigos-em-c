#include <stdio.h>
#include <stdlib.h>

#include <string.h> //contem o strlen (string lenght)

int main(void){

char buffer[ ] = "Hello"; //vetor em char <=> string
char tmp;

    size_t size = strlen(buffer);

 for(int i = 0; i < size / 2; i++) {

    tmp = buffer[i]; //armazena o character inicial
    buffer[i] = buffer[size - i - 1]; //Troca o character da ponta oposta
    buffer[size - i - 1] = tmp; //Armazena o character inicial no buffer

}
printf("%s", buffer);

}
