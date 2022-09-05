#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    // int vetor[5] = {7, 8, 9, 7, 8};
    // *(vetor +3) = 10;
    // int b = 10;
    // v= &b;
    // vetor [1] = *v;
    // for (int i=0; i<5; i++){
    //     printf("%d", vetor[i]);
    // }
    // printf("\n");
    // printf("%d\n", *vetor);
    // for (int i=0; i<200; i++){
    //     vetor [i] = i +434;
    // }
    // for (int i=0; i<2000; i++){
    //     printf("%d", vetor[i]);
    // }
    // int a =10;
    // int *p;
    // p = &a;
    // *p = 20;

    // printf("%d\n", a);
    // printf("%d\n", *p);
    // int b = 11;
    // p = &b;
    // printf("p = %d  a = %d\n", *p , a);
    int *p;
    p = (int*)malloc(sizeof(int));
    *p = 22;
    printf("Conteúdo do p: %d\n", *p);
    printf("Local de apontamento: %p\n", p);
    return 0;
}