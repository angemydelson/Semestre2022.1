// Leia uma matriz 4 x 4 e escreva a localização (linha e a coluna) do maior
// valor.
# include <stdio.h>
# include <math.h>
int main(){
    int matrix[4][4];
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    int maior = 0;
    int posicaoI;
    int posicaoJ;

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
           if (matrix[i][j] > maior){
            maior = matrix[i][j];
            posicaoI = i;
            posicaoJ = j;
           }
        }
    }
    printf("Localização matriz[%d][%d].\nMaior = %d\n", posicaoI, posicaoJ, maior);
    return 0;
}