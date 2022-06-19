#include <stdio.h>
int main() {
    int vetor[20], i, valor, vetor2[20];
    for ( i=19; i>=0; i--) {
        printf("Digite um valor: ");
        scanf("%d", &valor);
        vetor[i] = valor;
    }

    for ( i=0; i<20; i++) {
        printf("N[%d] = %d\n",i, vetor[i]);
    }
    
    return 0;
}