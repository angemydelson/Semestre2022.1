#include <stdio.h>
#include <math.h>
// #include "Dados.h"
struct {
        // char nome[50], curso[50];
        long  cpf, matricula;
        
    }Dados;

int Angemy( long cpf, long matricula){
    // Dados.nome = nome;
    // Dados.curso = curso;
    Dados.cpf = cpf;
    Dados.matricula = matricula;
    return Dados;
}
    
int main(){
    
    // Dados vetor[5];
    // printf("Digite o seu curso: \n");
    // fgets(Dados.curso, 50, stdin);
    // printf("Digite o seu nome: \n");
    // fgets(Dados.nome, 50, stdin);
    printf("Digite o seu CPF: \n");
    scanf("%ld", &Dados.cpf);
    printf("Digite a sua matricula: \n");
    scanf("%ld", &Dados.matricula);
    Angemy(long cpf, long matricula);

    for( int i=0; i<5; i++){

    }
    // printf("Nome: %s\n",Dados.nome);
    // printf("Curso: %s\n",Dados.curso);
    // printf("Matrícula: %ld\n",Dados.matricula);
    // printf("CPF: %ld\n",Dados.cpf);
    return 0;
}