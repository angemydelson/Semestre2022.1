# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct {
    int dia;
    int mes;
    int ano;
}Data;

struct aluno{
    char matricula[15];
    char nome[20];
    Data nascimento;
    double nota;
    struct aluno *next;
    struct aluno * prev;
};
typedef struct aluno Aluno;


struct tsent {
    Aluno *first;
    Aluno *last;
};
typedef struct tsent sentinela;

Aluno *getmemory(Aluno pr){
    Aluno *f;
    f=(Aluno *)malloc(sizeof(Aluno));
    strcpy(f->matricula, pr.matricula);
    strcpy(f->nome,pr.nome);
    



}