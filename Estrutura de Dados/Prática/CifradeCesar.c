// #include <stdio.h>
// #include <string.h>
// int main () {
//     long i,j = 0, rotacao;
//     char alfabetoeinput[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
//     char verificador;
//     printf("\n\n Mensagem Encriptada: %s\n", alfabetoeinput);
//     printf("Digite uma palavra: ");
//     scanf("%s", alfabetoeinput);
//     printf("Digite a quantidade de rotações: ");
//     scanf("%ld", &rotacao);

//     //Encripta
//     printf("\n\n Mensagem Encriptada: %s\n", alfabetoeinput);
//     for ( i = 0; i < 26 ; i++) {
        

//         verificador = alfabetoeinput[i];
//         if ( verificador >= 'A' && verificador <= 'Z') {
//             if (verificador == 'A') {
//                 verificador = 'Z' + 1 - rotacao;
//             } else {
//                 verificador -= rotacao;
//             }
//             alfabetoeinput[i] = verificador;
//         }
//     }
//     printf("\n\n Mensagem Encriptada: %s\n", alfabetoeinput);


// }

// #include <stdio.h>
// #include <string.h>
// int main () {
//     long i,j = 0, rotacao;
//     char alfabetoeinput[10000] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
//     char verificador,   alfabet[1000];

//     printf("Digite uma palavra: ");
//     scanf("%s", alfabetoeinput);
//     printf("Digite a quantidade de rotações: ");
//     scanf("%ld", &rotacao);
    
//     char response[26];

//     //Encripta
    
//     for ( i = 0; alfabetoeinput[i] != '\0' ; i++) {
        

//         verificador = alfabetoeinput[i];
//         if (verificador >= 'A' && verificador <= 'Z') {
//             verificador -= rotacao;
           
//             if (verificador < 'A') { 
//                 verificador = verificador + 'Z' - 'A' + 1;
//             }
//                 response[i] = verificador;
            
//             }
//         response[i] = verificador;
//     }
//     printf("\n\n Mensagem Encriptada: %s\n", response);


// }

// #include <stdio.h>
// #include <string.h>
// int main () {
//     long i,j = 0, rotacao;
//     char alfabetoeinput[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
//     char verificador;
//     printf("\n\n Mensagem Encriptada: %s\n", alfabetoeinput);
//     printf("Digite uma palavra: ");
//     scanf("%s", alfabetoeinput);
//     printf("Digite a quantidade de rotações: ");
//     scanf("%ld", &rotacao);
    
//     char response[26];

//     //Encripta
//     printf("\n\n Mensagem Encriptada: %s\n", alfabetoeinput);
//     for ( i = 0; i < 26 ; i++) {
        

//         verificador = alfabetoeinput[i];
//         if (verificador >= 'A' && verificador <= 'Z') {
           
//             int res = verificador - 'A';
//             if (rotacao > res) { 
//                 rotacao -= res; 
//                 printf("\n\n Res: %d\n", res);
//                 verificador = alfabetoeinput[sizeof(alfabetoeinput) - rotacao];
//             }else{
//                 verificador -= rotacao;
//             }
            
//             response[i] = verificador;
//         }
//     }
//     printf("\n\n Mensagem Encriptada: %s\n", response);


// }

#include <stdio.h>
#include <string.h>
int main () {
    long i,j = 0, rotacao, number;
    char alfabetoeinput[10000] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char verificador,   alfabet[1000];
    char response[500], limpar[] = "\0";
    
    scanf("%ld", &number);

    while (j<number){
    
        scanf("%s", alfabetoeinput);
        
        scanf("%ld", &rotacao);
        
        

        //Encripta
        
        for ( i = 0; alfabetoeinput[i] != '\0' ; i++) {
            

            verificador = alfabetoeinput[i];
            if (verificador >= 'A' && verificador <= 'Z') {
                verificador -= rotacao;
            
                if (verificador < 'A') { 
                    verificador = verificador + 'Z' - 'A' + 1;
                }
                    response[i] = verificador;
                
                }
            response[i] = verificador;
        }
        printf("%s\n", response);

        for (i=0; i<50; i++) {
            response[i] = limpar[0];
        }

        j++;
    }
}