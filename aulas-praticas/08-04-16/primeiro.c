#include<stdio.h>
int main ( void ) {
  float a, /* coeficiente da equação de primeiro grau */
        b, /* termo independente da equação */
        x; /* resultado da equação de primeiro grau */

  printf("Este programa resolve uma equação de primeiro grau. \n\n");
  printf("Entre com o coeficiente a, por favor: ");
  scanf("%f", &a);
  printf("Entre com o coeficiente b, por favor: ");
  scanf("%f", &b);

  if (a == 0) {
    printf("\nEsta equação nao tem solução. \n");
  }
  else {
    x = -b/a;
    printf("\nA solução da equação vale %1.3f\n",x);
  }

  return 0;
}
