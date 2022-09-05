#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
    int dia;
    int mes;
    int ano;
}Data;


struct aluno{
    char matricula[10];
    char nome[40];
    Data nascimento;
    double nota;
    struct aluno *next;
};
typedef struct aluno Aluno;


// Incluir elemento na lista
// A inclusão deve ser feita na ordem: matricula, nome, data_nascimento, nota (um dado por linha);
// Na base de testes não existem nomes compostos.

Aluno *ultimoElemento(Aluno *a){
    Aluno *aux = a;
    for ( aux = a; aux->next != NULL; aux = aux->next);
    return aux;
}

Aluno *setAluno( Aluno *first){
    Aluno *aux, *a;
    a = (Aluno *)malloc(sizeof(Aluno));
    scanf("%s", a->matricula);
    scanf("%s", a->nome);
    scanf("%d/%d/%d", &a->nascimento.dia, &a->nascimento.mes, &a->nascimento.ano);
    scanf("%lf", &a->nota);
    a ->next = NULL;
    if (first == NULL){
        first = a; 
    } else {
        aux = ultimoElemento(first);       // Se não achar o primeiro, ele vai buscar o último;
        aux->next = a;
    }
    return first;

}



// Excluir elemento da lista
// Passa a matrícula do elemento que será excluído;
// Se a lista estiver vazia apresenta a mensagem “Lista Vazia!”
// Se o elemento não faz parte da lista, nada acontece.

Aluno *excluirAluno (char *matricula, Aluno *first){
    Aluno *aux, *preview = NULL;
    for(aux = first ; aux != NULL; aux= aux ->next){
        if ((strcmp(aux -> matricula, matricula)) == 0){
            if (aux == first) {
                first = aux ->next;
            } else {
                preview ->next = preview ->next->next;
            }

            free(aux);
        }
        preview = aux;
    }
    return first;
} 


// Listar os elementos da lista em ordem de inserção
// Lista todos os elementos no formato “matricula, nome, data_nascimento, nota”, um elemento por linha;
// Se a lista estiver vazia apresenta a mensagem “Lista Vazia!”

void listaOselementos(Aluno *first){
    Aluno *aux;
    for (aux = first; aux!= NULL; aux = aux->next){
        printf("%s, %s, %d/%d/%d, %0.2lf\n", aux->matricula, aux->nome, aux->nascimento.dia, aux->nascimento.mes, aux->nascimento.ano, aux->nota);
    }
}


// Listar os elementos da lista em ordem inversa a de inserção
// Mesmo formato do tópico anterior;
// Se a lista estiver vazia apresenta a mensagem “Lista Vazia!”

void listaInversa(Aluno *first){
    Aluno *aux;
    if (first == NULL) return;
    aux = first;
    listaInversa(aux->next);
    printf("%s, %s, %d/%d/%d, %0.2lf\n", aux->matricula, aux->nome, aux->nascimento.dia, aux->nascimento.mes, aux->nascimento.ano, aux->nota);

}


// Contar o número de elementos da lista
// Retornar uma linha com um inteiro com o tamanho da lista;

int contarElementos(Aluno *first){
    Aluno *aux;
    int contarElementos = 0;
    for (aux = first; aux!= NULL; aux = aux->next){
        contarElementos ++;
    }
    return contarElementos;
    

}




void apagar (Aluno *a){
    Aluno *aux;
    if (a == NULL) {
        return;
    }
    aux = a;
    apagar (aux ->next );
    free(aux);
    printf("-");


    }

void menu(Aluno *first){
    int choix;
    int cont;
    char matr[10];
    for ( ; ;){
        
        // printf("1-Incluir elemento na lista \n2-Excluir elemento da lista \n3-Listar os elementos da lista em ordem de inserção \n4-Listar os elementos da lista em ordem inversa a de inserção \n5-Contar o número de elementos da lista \n0- Para sair\n");
        scanf("%d", &choix);
        if (choix == 1){
           first = setAluno(first); 
        } else if (choix == 2){
            if (first == NULL){
                printf("Lista Vazia!\n");
            } else {
                scanf("%s", matr);
                first = excluirAluno(matr, first);
            } 
        } else if (choix == 3){
           
            if (first == NULL){
                printf("Lista Vazia!\n");
            } else {
                listaOselementos(first);
            } 
        } else if (choix == 4){
             if (first == NULL){
                printf("Lista Vazia!\n");
            } else {
                listaInversa(first);
            } 
        } else if (choix == 5){
             if (first == NULL){
                printf("Lista Vazia!\n");
            } else {
                cont =contarElementos(first);
                printf("%d\n",cont);
            } 
        } else if (choix == 0) break;
    }
    apagar(first);
}

int main(){
    Aluno * first = NULL, *a;
    
    menu(first);
    // apagar(first);

    // for(int i = 0; i<2; i++){
    //     a = setAluno(first);
        
    // }
    //  for(int i = 0; i<2; i++){
       
    //     listaOselementos(a);
    // }
    
   
    
    return 0;
}


