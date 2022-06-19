// Leia uma matriz 4x4 e imprima a diagonal principal


# include <stdio.h>
# include<math.h>
int main (){
    int matriz[4][4], i, j;
    for(i =0; i<4; i++){
        for(j=0; j<4; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i=0; i<4; i++){
        for (j=0; j<4; j++){
            printf("%d  ", matriz[i][j]);
            
        }
        printf("\n");
    }
    printf("\nDiagonal\n");
    for(i=0; i<4; i++){
        for (j=0; j<4; j++){
            if (i == j){
                printf("%d  ", matriz[i][j]);
            }
            
        }
        // printf("\n");
    }
    return 0;
}