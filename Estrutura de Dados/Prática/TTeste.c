#include <stdio.h>
#include <string.h>
int main () {
    long i,j = 0, rotacao, number;
    char alfabetoeinput[10000] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char verificador,   alfabet[1000];
    char response[26];
    
    scanf("%ld", &number);

    while (j<number){
    
        scanf("%s", alfabetoeinput);
        
        scanf("%ld", &rotacao);
        
        

        //Encripta
        printf("%s\n", response);
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

        j++;
    }
}