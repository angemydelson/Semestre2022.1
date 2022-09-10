#include <stdio.h>

int main(){
    int M = 4;
    int matriz[4][4] = {
                        {2,4,6,8},
                        {5,6,7,8},
                        {8,6,4,2},
                        {8,7,6,5} 
                        };

    for (int i=0; i<M; i++){
        for( int j=0; j<M; j++){
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }
    for (int i=0; i<M; i++){
        matriz[i][i] = 1;
        matriz[i][M-i-1] = 1;
    }
    printf("\n=---------------------------------------=\n");

    for (int i=0; i<M; i++){
        for( int j=0; j<M; j++){
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}