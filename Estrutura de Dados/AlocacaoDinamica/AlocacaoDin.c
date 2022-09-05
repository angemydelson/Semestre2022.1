#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    int dia;
    int mes;
    int ano;
}Data;
typedef struct{
    int id;
    char nome[25];
    double salario;
}Funcionario;


int main(){
    Data *data1;
    Funcionario *funcionario1, *funcionario2;
    data1 = (Data *)malloc(sizeof(Data));
    data1 ->dia = 10;
    data1 ->mes = 12;
    data1 ->ano = 1999;
    // data1 = (Data *)malloc(sizeof(Data));
    return 0;
}