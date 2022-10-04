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

void Bubblesort( int vetor[], int n){
    int minPos;
    int troca;
    printVetor(vetor,n);
    for (int i=0; i<=n-2; i++){
        minPos = i;
        for (int j=i+1; j<=n-1; j++){
            if (vetor[j] < vetor[minPos]){
                minPos = j;
            }

        }
        troca = vetor[i];
        vetor[i] = vetor[minPos];
        vetor[minPos] = troca;
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

    Bubblesort(vetor,n);
    
    return 0;
}