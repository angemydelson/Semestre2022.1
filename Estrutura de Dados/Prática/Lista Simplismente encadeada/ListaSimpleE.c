#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// typedef struct {
//     char nome[20];
//     int idade;
//     char prof[10];
// } Funcionario;

struct lista{
    char nome[20];
    int idade;
    char prof[10];
    struct lista *next;
};
typedef struct lista Lista;

// Lista *inserirElemento( Lista *firts){
//     Lista *l= (Lista*)malloc(sizeof(Lista));
//     scanf("%s", l->nome);
//     scanf("%d", &l->idade);
//     scanf("%s", l->prof);
//     l->next = NULL;
//     if (firts == NULL){
//         firts = l;
//         l->next = NULL;
//     } else {
//         l->next = firts;
//         firts = l;
        
//     }

//     return firts;

// }
Lista *inserirElemento( Lista *firts){
    Lista *aux;
    Lista *l= (Lista*)malloc(sizeof(Lista));
    scanf("%s", l->nome);
    scanf("%d", &l->idade);
    scanf("%s", l->prof);
    l->next = NULL;
    if (firts == NULL){
        firts = l;
        l->next = NULL;
    } else {
        for(aux = firts; aux->next != NULL; aux = aux->next);
        l->next = NULL;
        aux->next = l;
        
    }

    return firts;

}

Lista *excluirlemneto( Lista *first, int idade){
    Lista *aux, *prev;
    for( aux=first; aux != NULL; aux = aux->next){
        if ( aux->idade == idade){
            if (aux == first){
                first = first->next;
                break;
            }

            prev ->next = aux ->next;
            break;
            
        }
        prev = aux;
    }
    if (aux != NULL) free(aux);
    return first;

}
void imprimir(Lista *first){
    Lista *aux;
    for( aux = first; aux != NULL; aux = aux ->next){
        printf("Nome: %s \nIdade: %d \nProfissão: %s\n", aux->nome, aux->idade, aux->prof);
    }
}

int main(){
    Lista *first = NULL;
    first = inserirElemento(first);
    first = inserirElemento(first);
    first = inserirElemento(first);
    printf("**************************************************\n");
    imprimir(first);
    printf("**************************************************\n");
    excluirlemneto(first, 24);
    imprimir(first);

    return 0;
}