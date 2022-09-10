#include <stdio.h>
#include <math.h>
typedef struct{
    char nome[10];
    char curso[10];
    long cpf ;
}Dados;

int main(){
    Dados c;
    char nome[10], curso[10];
    long cpf;
    Dados d1[3];
    for(int i=0; i<3; i++){
        fgets(c.nome,10, stdin );
        fgets(c.curso,10, stdin );
        // scanf("%ld", &cpf);
        scanf("%ld", &c.cpf);
        d1[i] = c;
    }
    for (int i=0; i<3;i++){
        // printf("%D\n" d1[i]);
    }        

    return 0;
}