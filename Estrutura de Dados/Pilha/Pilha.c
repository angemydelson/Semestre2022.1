#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct element_pile {
    char webAdress[100];
    struct element_pile *next;
} Element_pile;

typedef struct{
    Element_pile *top;
} web_Pile;


void inicialisao( web_Pile *pilha){
    pilha->top = NULL;
}


void push(web_Pile *wPilha, char *opcao){
    Element_pile * new;

    new = (Element_pile *) malloc (sizeof(Element_pile));
    strcpy(new->webAdress, opcao);
    new->next = wPilha->top;
    wPilha->top = new;
}

void popPile (web_Pile *pile){
    Element_pile *aux;
    aux = pile->top;
    pile->top = pile->top->next;

    free(aux);
}

void lancementPile(web_Pile *pile){
    Element_pile *aux;
    while (pile->top != NULL){
        aux = pile->top;
        pile->top = pile->top->next;
        printf("@\n");
        free(aux);

    }

}

void menu(){
    char op[100];
    web_Pile *pile = (web_Pile *) malloc (sizeof(web_Pile));
    inicialisao(pile);
    scanf("%s", op);

    while (strcmp(op, "E") != 0){
        if (strcmp(op, "B") == 0){
            if (pile->top == NULL){
                printf("vazio\n");
            } else {
                printf("%s\n", pile->top->webAdress);

                popPile(pile);
            }
        } else {
            push(pile, op);
        }
        scanf("%s", op);
    }

    if (pile->top == NULL){
        printf("!");
    } else {
        lancementPile(pile);
    }
}

int main() {
    menu();
    return 0;
}
