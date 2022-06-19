#include <stdio.h>
int main() {
    float num, soma = 0, media, num1, tot;
    int i;
    for (i = 0; i <4 ; i++){

        printf("Digite um número: ");
        scanf("%f", &num);
        if (i == 0) {
            tot = num * 2;
        } else if (i == 1) {
            tot = num * 3;
        } else if (i==2) {
            tot = num * 4;
        } else {
            tot = num * 1;
        }
        soma += tot;
    }
    media = soma / 10;
    if (media >= 7) {
        printf("Media: %.1f\n", media);
        printf("Aluno aprovado.\n");
       
    } else if ( media >= 5) {
        printf("Media: %.1f\n", media);
        printf("Aluno em exame.\n");
        scanf("%f", &num1);
        media += num1;
        media /= 2;
        if (media >= 5 ) {
            printf("Nota do exame: %.1f\n", num1);
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", media);
        }   else if (media < 5) {
                printf("Nota do exame: %.1f\n", num1);
                printf("Aluno reprovado.\n");
                printf("Media final: %.1f\n", media);
            }
    } else if (media < 5) {
        printf("Media: %0.1f\n", media);
        printf("Aluno reprovado.\n");
    }
    return 0;

    
}