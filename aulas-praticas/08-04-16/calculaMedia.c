#include<stdio.h>
int main ( void ) {
  float nota1,
        nota2,
        media;

  printf("Este programa calcula a média de um aluno, dado duas notas.\n\n");
  printf("Digite a primeira nota: ");
  scanf("%f", &nota1);
  printf("Digite a segunda nota: ");
  scanf("%f", &nota2);

  media = (nota1 + nota2)/2;

  printf("\nSua média é igual a: %1.3f\n", media);

  if (media >= 5) {
    printf("Você foi aprovado!\n");
  }
  else {
    printf("Você foi reprovado!\n");
  }

  return 0;
}
