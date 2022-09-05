#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
    char name[50];
    int cnpj;
} Empresa;

typedef struct {
    int codigo, quantidadeEstoque;
    double conteudoLiquido;
    double price;
    char nomeDaBebida[50];
    double teor;
    // int stock;
} Drink;


struct bebida{
    Drink bebida;
    struct bebida *next, *prev;
};
typedef struct bebida AllDrinks;



struct cliente {
    int codigoCliente;
    long cpfCliente;
    int idadeCliente;
    char nomeCliente[50];
    struct cliente *next, *prev;

};
typedef struct cliente Clientes;

struct tsent {
    struct bebida *first;
    struct bebida *last;
};
typedef struct tsent Sentinela;

struct tsent2 {
    struct cliente *first;
    struct cliente *last;
};
typedef struct tsent2 Sentinela2;

void inicilisation (Sentinela *lista, Sentinela2 *lista2){
    lista->first = NULL;
    lista->last = NULL;
    lista2->first = NULL;
    lista2->last = NULL;
    
    
}


Clientes *criarCliente(int codigo, char nome[50], long cpf, int idade){
    Clientes *new;
    new = (Clientes *)malloc(sizeof(Clientes));
    new->codigoCliente = codigo;
    strcpy(new->nomeCliente, nome);
    new->cpfCliente = cpf;
    new->idadeCliente = idade;

    new->next = NULL;
    new->prev = NULL;
    return new;

}

Clientes *CadastrarClientes(Sentinela2 *lista2, int codigo, char nome[50], long cpf, int idade){
    Clientes *new = criarCliente(codigo,nome, cpf,idade);
    Clientes *aux, *aux2;
    if ( lista2->first == NULL){
        lista2->first = new;
        lista2->last = new;
    } else {
        for ( aux = lista2->first; aux != NULL; aux = aux->next){
            if (aux->codigoCliente == new->codigoCliente || aux->cpfCliente == new->cpfCliente){
                printf("\n***Deu ruim rapaziada!! Esse cliente já existe!***\n\n");
                break;
            } else {
                if (aux->idadeCliente >= new->idadeCliente && lista2->first == aux){
                    lista2->first->prev = new;
                    new->next = lista2->first;
                    lista2->first = new;
                    break;
                } else if (aux->idadeCliente <= new->idadeCliente && lista2->last == aux){
                    lista2->last->next = new;
                    new->prev = lista2->last;
                    lista2->last = new;
                    break;
     
                } else if (aux->idadeCliente > new->idadeCliente){
                    new->next = aux;
                    new->prev = aux->prev;
                    aux->prev->next = new;
                    aux->prev = new;
                    
                    
                    break;
                }
                
            }
        }
       
    }
    
}

void mostrarClientes(Sentinela2 *lista2){
    Clientes *aux;
    if (lista2 -> last == NULL){
        printf("\n******Não tem cliente Cadastrado!!!******\n\n");
        return;
    }
    aux = lista2->first;
    printf("******************************************\n");
    while (aux != NULL){
        printf("Código do cliente: %d\n", aux->codigoCliente);
        printf("Nome do cliente: %s\n", aux->nomeCliente);
        printf("CPF do cliente: %ld\n", aux->cpfCliente);
        printf("Idade do cliente: %d\n", aux->idadeCliente);
        aux = aux->next;
    }
    printf("******************************************\n");
}

AllDrinks *CriarBebida(int choix, int codigo, char nome[50], double cLiquido, double price, double teor){
    AllDrinks *new;
    new = (AllDrinks *)malloc(sizeof(AllDrinks));
    new->bebida.codigo = codigo;
    strcpy(new->bebida.nomeDaBebida, nome);
    new->bebida.conteudoLiquido = cLiquido;
    new->bebida.price = price;
    new->bebida.teor = teor;
    new->bebida.quantidadeEstoque = 0;
   
    new->next = NULL;
    new->prev = NULL;
    return new;
}



AllDrinks *cadastrarBebidas( Sentinela *lista1, int choix, int codigo, char nome[50], double cLiquido, double price, double teor){
    AllDrinks *new = CriarBebida(choix,codigo, nome, cLiquido, price, teor);
    AllDrinks *aux;
    
    if (lista1->first == NULL){
            lista1->first = new;
            lista1->last = new;
    } else {
        for ( aux = lista1->first; aux != NULL; aux = aux->next){
            if ( aux->bebida.codigo == new->bebida.codigo){
                printf ("\n***Deu ruim, esse produto já existe!!!***\n\n");
                break;
            } else {
                lista1->last->next = new;
                new->prev = lista1->last;
                lista1->last = new;
                break;
            }
        }
            
    }
    
}

void comprarBebida(Sentinela *lista1, int quantidade, int codigo){
    AllDrinks *aux;
    int verificador = 0;
    aux = lista1->first;
    if (lista1 -> last == NULL){
        printf("\n******Não tem Bebida cadastrada, voçê tem que fazer o cadastro primeiro!!!******\n\n");
        return;
    }
    while ( aux != NULL){
       
        if (aux->bebida.codigo == codigo){
            verificador = 1;
            aux->bebida.quantidadeEstoque += quantidade;
            printf("\n***Compra realizada com sucesso!!!***\n\n");
            break;
        }

        aux = aux->next;
    }
    if(verificador == 0){
        printf("\n**O código que voçê digitou não existe!!!**\n\n");
    }
    

}

void venderBebida (Sentinela *lista1, Sentinela2 * lista2, int codigoBebida, int cpf, int quantidade){
    AllDrinks *aux;
    Clientes *aux2;
    int verificador = 0;
    if (lista2 -> last == NULL){
        printf("\n******Não tem cliente cadastrado, voçê tem que fazer o cadastro primeiro!!!******\n\n");
        return;
    } else if (lista1 -> last == NULL){
        printf("\n******Não tem Bebida cadastrada, voçê tem que fazer o cadastro primeiro!!!******\n\n");
        return;
    }
    for ( aux2 = lista2->first; aux2 != NULL; aux2 = aux2->next){
        if (aux2->cpfCliente == cpf){
            verificador = 1;
            for ( aux = lista1->first; aux != NULL; aux = aux->next){
                
                if (aux->bebida.codigo == codigoBebida){
                    verificador = 2;
                    if (aux2->idadeCliente < 18 && aux->bebida.teor >0){
                        printf("\n***Esse cliente é menor idade, ele não pode comprar bebida alcoolíca***\n\n");
                    }else {
                        if (aux->bebida.quantidadeEstoque < quantidade){
                            printf ("\nOpps!!! A quantidade que voçê quer comprar é maior da quantidade que tem no estoque\n");
                            printf("A quantdade disponível no estoque é:%d\n\n", aux->bebida.quantidadeEstoque);
                        }else {
                            aux->bebida.quantidadeEstoque -= quantidade;
                            printf("\n***Venda realizada com sucesso!!!***\n\n");
                        }
                        
                    }
                    
                }
            }
        }
    }

    if(verificador == 0){
        printf("\n ***O CPF que voçê digitou não existe***\n\n");
    }else if(verificador == 1){
        printf("\n***O código da Bebida não existe!!!***\n\n");
    }
}

void mostrarBebidas(Sentinela *lista1){
    AllDrinks *aux;
    if (lista1 -> last == NULL){
        printf("\n******Não tem Bebida Cadastrado!!!******\n\n");
        return;
    }
    printf("******************************************\n");
    for (aux = lista1->first ; aux!= NULL; aux= aux->next){
        if (aux->bebida.teor == 0){
            printf("Código: %d\n", aux->bebida.codigo);
            printf("Nome: %s\n", aux->bebida.nomeDaBebida);
            printf("Conteúdo líquido em ml: %.2lf\n", aux->bebida.conteudoLiquido);
            printf("Preço de venda: %.2lf\n", aux->bebida.price);
            printf("Quantidade em estoque: %d\n", aux->bebida.quantidadeEstoque);

        } else {
            printf("Código: %d\n", aux->bebida.codigo);
            printf("Nome: %s\n", aux->bebida.nomeDaBebida);
            printf("Conteúdo líquido em ml: %.2lf\n", aux->bebida.conteudoLiquido);
            printf("Preço de venda: %.2lf\n", aux->bebida.price);
            printf("Teor: %lf\n", aux->bebida.teor);
            printf("Quantidade em estoque: %d\n", aux->bebida.quantidadeEstoque);
        }
       

    }
    printf("******************************************\n");
}

void menu(){
    long cpfCliente;
    int choixBoisson, choix,codigoBebida,codigoCliente,idadeCliente, quantidadeComprar, quantidadeVender;
    char nomeBebida[50], nomeCliente[50];
    double cLiquidoBebida, priceBebida, teorBebida;
    Sentinela lista1;
    Sentinela2 lista2;
    inicilisation (&lista1, &lista2);
    for ( ; ; ){ 
        printf("1-Cadastrar Bebida \n2-Mostrar Bebida \n3-Comprar Bebida \n4-Vender Bebida \n5-Cadastrar Clientes \n6-Mostrar Clientes \n7-Sair do Sistema\n");
        scanf("%d", &choix);
        if (choix == 1){
            printf("Digite o código da bebida\n");
            scanf("%d", &codigoBebida);
            printf("Digite o nome da bebida\n");
            scanf("%s", nomeBebida);
            setbuf (stdin, NULL);
            printf("Digite o conteúdo líquido da bebida\n");
            scanf("%lf", &cLiquidoBebida);
            printf("Digite o preço da bebida\n");
            scanf("%lf", &priceBebida);
            printf("*****1-Bebida com alcool***** \n*****2-Bebida sem alcool*****\n");
            scanf ("%d", &choixBoisson);
            if (choixBoisson == 1){
                printf("Digite a quantidade de teor: \n");
                scanf("%lf", &teorBebida);
            } else if (choixBoisson == 2) {
                teorBebida = 0;
            } else {
                printf("Deu erro!!! Digita apenas 1 ou 2!");
            }
            cadastrarBebidas(&lista1, choixBoisson, codigoBebida, nomeBebida, cLiquidoBebida, priceBebida, teorBebida);
        } else if (choix == 2) {
            mostrarBebidas(&lista1);
        } else if (choix == 3) {
            printf("Digite o código da bebida que voçê quer comprar: \n");
            scanf("%d", &codigoBebida);
            printf("A quantidade que voçê quer comprar: \n");
            scanf("%d", &quantidadeComprar);
            if ( quantidadeComprar < 1) {
                printf("\n*****Deu ruim!!! O valor tem que ser maior que 0!***** \n");
            } else {
                comprarBebida(&lista1, quantidadeComprar, codigoBebida);
            }
           
            
        } else if (choix == 4) {
            printf("Digite o CPF do cliente:\n");
            scanf("%ld", &cpfCliente);
            printf("Digite o código da bebida que voçê quer vender: \n");
            scanf("%d", &codigoBebida);
            printf("A quantidade a ser comprada: \n");
            scanf("%d", &quantidadeVender);
            
            if ( quantidadeVender < 1) {
                printf("\n*****Deu ruim!!! O valor tem que ser maior que 0!***** \n\n");
            } else {
                venderBebida(&lista1, &lista2, codigoBebida, cpfCliente, quantidadeVender );
            }
            
        } else if (choix == 5) {
            printf("Digite o codigo do cliente:\n");
            scanf("%d", &codigoCliente);
            printf("Digite o nome do cliente:\n");
            scanf("%s", nomeCliente);
            setbuf (stdin, NULL);
            printf("Digite o CPF do cliente:\n");
            scanf("%ld", &cpfCliente);
            printf("Digite a idade do cliente:\n");
            scanf("%d", &idadeCliente);
            CadastrarClientes(&lista2, codigoCliente, nomeCliente, cpfCliente,idadeCliente);
        } else if (choix == 6) {
            mostrarClientes(&lista2);
        } else
            break;
        
            
        
    }


}




int main (){
    menu();

    return 0;
}