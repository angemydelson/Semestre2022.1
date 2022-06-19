#include <stdio.h>
#include <math.h>
long BaseExpoente(long base, long expoente){
    if ( expoente == 0){
        return 0;
    }else if(expoente == 1){
        return base;
    }else {
        return base * BaseExpoente(base,expoente-1);
    }
}
int main(){
    long base, expoente;
    printf("Digite a base e o expoente:\n");
    scanf("%ld %ld", &base, &expoente );
    printf("%ld\n", BaseExpoente(base,expoente));
    return 0;
}