#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dt {
	int dia;
	int mes;
	int ano;
};
//
struct tprod{
	int cod;
	char nome[20];
	struct dt dtcompra;
	struct tprod *prev, *next;
};
//
typedef struct tprod prod;
//
struct tsent{
	prod *first;
	prod *last;
};
typedef struct tsent sentinela;

prod *getMemory(prod pr)
{
	prod *p;
	p=(prod *)malloc(sizeof(prod));
	p->cod=pr.cod;
	strcpy(p->nome,pr.nome); // não posso fazer pr->nome=entrada.nome
	p->dtcompra=pr.dtcompra;
	p->next=NULL;
	p->prev=NULL;
	return p;
}
void insertEnd(sentinela *st, prod pr)
{
    prod *p=getMemory(pr);
	if (st->first==NULL){
		st->first=p;
		st->last=p;
	} else {
		st->last->next=p;
		p->prev=st->last;
		st->last=p;
	}
}
//
void insertFirst(sentinela *st, prod pr)
{
	prod *p=getMemory(pr);
    if (st->first==NULL){
		st->first=p;
		st->last=p;
	} else {
		p->next=st->first;
		st->first->prev=p;
		st->first=p;
	}
}

void insertMidBefore(sentinela *st, prod pr, int codigo)
{
	prod *p, *aux;
	for (aux=st->first;aux->cod!=codigo && aux!=NULL;aux=aux->next);
	if (aux==NULL) return;
	if (aux==st->first)
	{
		insertFirst(st,pr);
    } else {
    	p=getMemory(pr);
		p->next=aux;
		p->prev=aux->prev;
		aux->prev->next=p;
		aux->prev=p;
    }
	return;
}
//
int main() {
	prod entrada;
	prod *aux;
	sentinela s={NULL,NULL};
	//s.first=NULL;
	//s.last=NULL;
	int i;
	for (i=0;i<3;i++) {
		scanf("%d", &entrada.cod);
		scanf("%s", entrada.nome);
		scanf("%d %d %d",&entrada.dtcompra.dia,&entrada.dtcompra.mes,&entrada.dtcompra.ano);
		insertEnd(&s,entrada);
		
	}
	printf("--------\n");
    for (aux=s.first;aux!=NULL;aux=aux->next)
       printf("%d %s %2d/%2d/%2d\n",aux->cod,aux->nome,aux->dtcompra.dia,aux->dtcompra.mes,aux->dtcompra.ano);
	printf("--------\n");
    for (aux=s.last;aux!=NULL;aux=aux->prev)
       printf("%d %s %2d/%2d/%2d\n",aux->cod,aux->nome,aux->dtcompra.dia,aux->dtcompra.mes,aux->dtcompra.ano);
    entrada.cod=10;
	strcpy(entrada.nome,"Dez");
	entrada.dtcompra.dia=2;
	entrada.dtcompra.mes=2;
	entrada.dtcompra.ano=2222;
	insertFirst(&s,entrada);
	printf("--------\n");
    for (aux=s.first;aux!=NULL;aux=aux->next)
       printf("%d %s %2d/%2d/%2d\n",aux->cod,aux->nome,aux->dtcompra.dia,aux->dtcompra.mes,aux->dtcompra.ano);
    entrada.cod=77;
	strcpy(entrada.nome,"77");
	entrada.dtcompra.dia=2;
	entrada.dtcompra.mes=2;
	entrada.dtcompra.ano=2222;
	insertMidBefore(&s,entrada,10);
	printf("--------\n");
    for (aux=s.first;aux!=NULL;aux=aux->next)
       printf("%d %s %2d/%2d/%2d\n",aux->cod,aux->nome,aux->dtcompra.dia,aux->dtcompra.mes,aux->dtcompra.ano);


    return 0;
			
}