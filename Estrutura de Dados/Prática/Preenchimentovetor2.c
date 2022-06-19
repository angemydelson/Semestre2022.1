#include <stdio.h>
int main() {
    int vetor[1000], i, valor, j = -1;
    printf("Digite um valor: ");
    scanf("%d", &valor);
    for ( i=0; i<1000; i++) {
        j++;
        if ( j == valor ) {
            j = 0;
        }
        vetor[i] = j;
    }

    for ( i=0; i<1000; i++) {
        printf("N[%d] = %d\n", i, vetor[i]);
    }
    return 0;
}