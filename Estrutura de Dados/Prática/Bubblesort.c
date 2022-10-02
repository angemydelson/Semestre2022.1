#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void printVetor(int vetor[10]){
    for (int i=0; i<10; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void Bubblesort( int vetor[10]){
    int troco;
    printVetor(vetor);

    for (int i=9; i > 1; i--){
        for (int j = 0; j<9; j++){
            if (vetor[j]>vetor[j+1]){
                troco = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = troco;


            }
        }
        
    }

    printVetor(vetor);

}

int main(){
    int vetor[10];

    srand(time(0));
    int k = 0;
    while (k < 10)
        vetor[k++] = rand() % 100;

    Bubblesort(vetor);
    
    return 0;
}