# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct {
    int dia;
    int mes;
    int ano;
}Data;

struct aluno{
    int matricula;
    char nome[20];
    Data nascimento;
    double nota;
    struct aluno *next;
    struct aluno * prev;
};
typedef struct aluno Aluno;

// incluir um elemento na lista
Aluno *inserirElemento(){
    Aluno *elemento;
    elemento = (Aluno *)malloc(sizeof(Aluno));
    printf("Matrícula: ");
    scanf("%d", &elemento->matricula);
    printf("Nome: ");
    scanf("%s", elemento->nome);
    printf("Dia do nascimento: ");
    scanf("%d", &elemento->nascimento.dia);
    printf("Mes: ");
    scanf("%d", &elemento->nascimento.mes);
    printf("Ano: ");
    scanf("%d", &elemento->nascimento.ano);
    printf("Nota: ");
    scanf("%lf", &elemento->nota);
    elemento->next = NULL;
    elemento->prev = NULL;
        
    return elemento;
}

Aluno *IncluirInicio ( Aluno *first, Aluno *last){
    Aluno *elemento = inserirElemento();
    
    if (first == NULL){
        first = elemento;
        last = elemento;
    }else{
        elemento->next = first;
        first->prev = elemento;
        first = elemento;
    }
    return first;
}

Aluno *IncluirFim ( Aluno *first, Aluno *last){
    Aluno *elemento = inserirElemento();
    
    
    if (first == NULL){
        first = elemento;
        last = elemento;
    }else{
        elemento->prev = last;  
        last->next = elemento;
        last = elemento;
           
    }
    
    return last;
    
}

Aluno *incluirNoMeio(Aluno *first, Aluno *last, int matricula){
    Aluno *aux;
    if (first==NULL) return first;
    for ( aux =first; aux->matricula != matricula && aux != NULL; aux = aux->next);
    if (aux == first){
        first = IncluirInicio (first,last);
    } else {
        Aluno *elemento = inserirElemento();
        elemento->next = aux;
        elemento->prev = aux->prev;
        aux->prev = elemento;
        aux->prev->next = elemento;
    }
    return first;
    
}

void *printElemento(Aluno *first){
    Aluno *aux;
    printf("******************************************\n");
    for (aux = first; aux!= NULL; aux= aux->next){
        printf("Matricula: %d\nNome: %s\nData de Nascimento: %d/%d/%d\nNota: %lf\n", aux->matricula, aux->nome, aux->nascimento.dia, aux->nascimento.mes, aux->nascimento.ano, aux->nota);

    }
    printf("******************************************\n");
}

int main(){
    Aluno *first = NULL;
    Aluno *last = NULL;
    first = IncluirInicio(first,last);
    first = IncluirInicio(first,last);
    // first = IncluirInicio(first,last);
    // first = IncluirInicio(first,last);
    first = incluirNoMeio(first,last, 21211010);
    // first = IncluirFim (first,last);
    printElemento(first);
    
    // printElemento(first);
    // first = IncluirInicio(first,last);
    // printElemento(first);
    // first = IncluirFim (first,last);
    // printElemento(first);
    
    // printElemento(first);
   
    // printElemento(first);
    return 0;
}