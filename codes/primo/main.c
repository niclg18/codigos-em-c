#include <stdio.h>
#include <stdlib.h>

int main(void){

int num, r, cont;

printf("digite um numero para verificar se é primo: ");
scanf("%d", &num);

for (cont=2; cont<=num/2; cont++){
    if((num%cont)==0){
        r++;
    }
}
if(r==0){
    printf("o numero e primo");

}
else {
    printf("o numero nao e primo");
}
}
