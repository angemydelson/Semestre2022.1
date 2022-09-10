// Faça um programa que preenche uma matriz 5 x 5 com o produto do
// valor da linha e da coluna de cada elemento. Em seguida, imprima na
// tela a matriz.
# include <stdio.h>
# include <math.h>
int main(){
    int matrix[5][5];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            matrix[i][j] = i * j;
        }
    }
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
           printf("%d  ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}