#include <stdio.h> 
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct{
    int dia;
    int mes;
    int anos;
} Data;

struct funcionario {
    int id;
    char nome[25];
    double salario;
    Data nascimento;
    struct funcionario *next;
};
typedef struct funcionario Funcionario;

int main(){
    Funcionario *f, *aux;
    // Funcionario func;
    // func.id = 10;
    // strcpy(func.nome, "Your nome");
    // func.nascimento.dia =10;
    // func.nascimento.mes = 11;
    // func.nascimento.anos = 2000;
    // func.next = NULL;
    for (int i=0; i < 3; i++){
        Funcionario *func;
        func = (Funcionario *)malloc(sizeof(Funcionario));
        func->id = 10;
        fgets(func->nome,25,stdin);
        func->salario = 10000;
        func->nascimento.dia =10;
        func->nascimento.mes = 11;
        func->nascimento.anos = 2000;
        func->next = NULL;
        if (first == NULL){
            first = func;
            aux = func;
        } else {
            aux->next = func;
            aux = func;
        }
    }
    

    printf("Nome = %s \nid = %d\nSalario = %.2lf $\n",func->nome,func->id,func->salario);
    printf("Data de nascimento: %d/%d/%d\n",func->nascimento.dia,func->nascimento.mes,func->nascimento.anos);
    return 0;
}
