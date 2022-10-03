#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void printVetor(int vetor[],int n){
    for (int i=0; i<n; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void insertionSort( int vetor[], int n){
    int troco, p, j;
    printVetor(vetor,n);

    for (int i=1; i<= n-1 ; i++){
        p = vetor[i];
        for (j = i; j>=1 && p < vetor[j-1]; j--){
            vetor[j] = vetor[j-1];
        }
        vetor[j] = p;

    }
    
    printVetor(vetor,n);

}

int main(){
    int n;
    printf("Digite a quantidade de números\n");
    scanf("%d", &n);
    int vetor[n]; 
    srand(time(0));
    int k = 0;
    while (k < n)
        vetor[k++] = rand() % 100;

    insertionSort(vetor,n);
    
    return 0;
}