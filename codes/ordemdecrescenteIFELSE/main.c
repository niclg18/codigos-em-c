#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("Insira 3 valores inteiros para que sejam colocados em ordem decrescente: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if ((a>b)&&(a>c)){
        if ((b>c)){
            printf("=\n%d\n%d\n%d\n", a, b, c);
        } else {
            printf("=\n%d\n%d\n%d\n", a, c, b);
        }
    }
    else {
        if ((b>a)&&(b>c)){
            if (a>c){
                printf("=\n%d\n%d\n%d\n", b, a, c);
            }
            else {
                printf("=\n%d\n%d\n%d\n", b, c, a);
            }
        }
        else {
            if ((c>a)&&(c>b)){
                if ((a>b)){
                    printf("=\n%d\n%d\n%d\n", c, a, b);
                }
                else {
                    printf("=\n%d\n%d\n%d\n", c, b, a);
                }
            }
        }
    }
    return 0;
}
