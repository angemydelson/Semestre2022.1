# include <stdio.h>
int main (){
    int matriz[3][3], i, j, valor = 0;
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            printf("%d ", matriz[i][j]);
            if (i != j){
                valor += matriz[i][j];
            }
        }
        printf("\n"); 
    }
    if ( valor == 0){
        printf("diagonal\n");
    }  else {
        printf("negativo\n");
    }
    
    return 0;
}