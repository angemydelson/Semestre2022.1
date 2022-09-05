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

struct stsent{
    Aluno *first;
    Aluno *last;
};
typedef struct stsent Sentinela;

// incluir um elemento na lista

Aluno *IncluirInicio (Sentinela *st){
    Aluno *elemento;
    elemento = (Aluno *)malloc(sizeof(Aluno));
    printf("Matrícula: ");
    scanf("%s", elemento->matricula);
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

    
    if (st->first == NULL){
        st->first = elemento;
        st->last = elemento;
    }else{
        elemento->next = st->first;
        st->first->prev = elemento;
        st->first = elemento;
    }
    return st->first;
}


Aluno *IncluirFim ( Sentinela *st){
    Aluno *elemento;
    Aluno  *aux;
    elemento = (Aluno *)malloc(sizeof(Aluno));
    printf("Matrícula: ");
    scanf("%s", elemento->matricula);
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
    
    if (st->last == NULL){
        st->first = elemento;
        st->last = elemento;
    }else{
        st->last->next = elemento;
        elemento->prev = st->last;  
        
        st->last = elemento;

    }
       return st->last;
}

void *printElemento(Sentinela *dados){
    Aluno *aux;
    printf("******************************************\n");
    for (aux = dados->first; aux!= NULL; aux= aux->next){
        printf("Matricula: %s\nNome: %s\nData de Nascimento: %d/%d/%d\nNota: %lf\n", aux->matricula, aux->nome, aux->nascimento.dia, aux->nascimento.mes, aux->nascimento.ano, aux->nota);

    }
    printf("******************************************\n");
}
void *printElementoInv(Sentinela *dados){
    Aluno *aux;
    printf("******************************************\n");
    for (aux = dados->last; aux!= NULL; aux= aux->prev){
        printf("Matricula: %s\nNome: %s\nData de Nascimento: %d/%d/%d\nNota: %lf\n", aux->matricula, aux->nome, aux->nascimento.dia, aux->nascimento.mes, aux->nascimento.ano, aux->nota);

    }
    printf("******************************************\n");
}

int main(){
    Sentinela *dados = NULL;
    IncluirInicio(dados);
    // printElemento(dados);
    // dados = IncluirInicio(dados);
    // printElemento(dados);
    // printElementoInv(dados);

    // first = IncluirFim (first);
    // printElemento(first);
    return 0;
}
