#include <stdio.h>
#include <conio.h>
int main (void )
{
  int valor;

  printf ("Digite um valor de 1 a 7: ");
  scanf("%d", &valor);

  if (valor == 1)
  printf ("Domingo\n");
  else
    if (valor == 2)
    printf ("Segunda\n");
    else
        if (valor == 3)
        printf ("Ter�a\n");
        else
            if (valor == 4)
            printf ("Quarta\n");
            else
  if (valor == 5)
    printf ("Quinta\n");
  else
  if (valor == 6)
    printf ("Sexta\n");
  else
  if (valor == 7)
    printf ("Sabado\n");
  else
    printf ("Valor invalido!\n");

  getch();
  return 0;
}
