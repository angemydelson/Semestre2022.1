// Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0
// os demais elementos. Escreva ao final a matriz obtida.

# include <stdio.h>
# include <math.h>
int main(){
    int matrix[5][5];
    for (int i =0; i<5; i++){
        for( int j=0; j<5; j++){
            if (i==j){
                matrix[i][j] = 1;
            } else {
                matrix[i][j] = 0;
            }
        }
    }
    for (int i =0; i<5; i++){
        for( int j=0; j<5; j++){
            printf("%d  ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}