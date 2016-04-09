#include <stdio.h>
//use gcc -o <nome qualquer> lucca.c -Wall para compilar e ./nome para rodar.
//para o while loop -> enquanto verdade for verdadeiro o codigo correra.
#define verdade 1
#define falso 0

int main(void) {
    float nota_1, nota_2, media;
    int vdd;
    vdd = verdade;

    printf("--------------Seja bem vindo ao SIGA--------------\n");
    while(vdd) {
        printf("Diga a sua primeira nota: \n");
        scanf("%f", &nota_1);
        if(nota_1 <= 10.0) {
            break;
          } printf("Você não é um mago, fale a verdade!\n");
        } while(vdd) {
            printf("Diga a sua segunda nota: \n");
            scanf("%f", &nota_2);
            if(nota_2 <= 10.0) {
                break;
            } printf("Você não é um mago, fale a verdade!");
        }

    media = (nota_1 + nota_2) / 2;
    printf("A sua média foi: %1.3f \n", media);
    printf("A sua situação foi: ");
    if (media >= 5.00) {
        printf("APROVADO\n");
    } else {
        printf("REPROVADO\n");
    }


}
