# include <stdio.h>
int main() {
    int valor, vetor[10], i;
    printf("Digte um valor: ");
    scanf("%d", &valor);
    vetor[0] = valor;

    for ( i=1 ; i < 10; i++) {
        vetor[i] = valor * 2;
        valor = vetor[i];
    }
    
    for ( i = 0; i < 10; i++) {
        printf("N[%d] = %d\n", i, vetor[i]);
    }
    return 0;
}