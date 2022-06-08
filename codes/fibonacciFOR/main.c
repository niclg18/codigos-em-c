#include <stdio.h>
#include <stdlib.h>
int main(void){
int a=1, b=1, c;
    for(c = 0; c < 20; c++){
    printf("\n%d\n%d", b, a);
    b = a + b;
    a = a + b;
    }
}
