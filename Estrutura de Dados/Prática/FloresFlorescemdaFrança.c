#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* toLower(char* word) {
  int i = 0;
  while( word[i] |=' ', word[++i] ) {}
  return word;
}


int main()
{
	char str[1000];
    char resposta[1];
    char kanpe = '*';
	char delim[] = " ";
    char verificador[1000];
	
    int i = 0, j=0;
    while (str[0] != kanpe) {
        
        fgets(str, 1000 , stdin);
        
        //printf("O tamanho eh: '%d'\n", strlen(kanpe));
        
        if ( str[0] == kanpe ){
            break;
        }
        char *ptr = strtok(str, delim);

        char prev = ' ';
        
        char res = 'Y';

        while(ptr != NULL)
        {
            ptr = toLower(ptr);
            
            if(prev == ' ') {
                
                prev = ptr[0];
            } else {
                
                if (prev != ptr[0]) {
                    res = 'N';
                    break;
                } else {
                    res = 'Y';
                    prev = ptr[0];
            
                }
            }
            
            
            
            
          
            verificador[i] = ptr[i-j] ;
            ptr = strtok(NULL, delim);
            
            i++;
            j++;
        }
        printf("%c\n", res);
        //return 0;
        // printf("\n\n%s\n", verificador);


        //for (i = 0; i < strlen(verificador) - 1; i++) {
            //if (verificador[i] == verificador[i+1]) {
               // resposta[0] = 'Y';
            //} else {
               // resposta[0] = 'N';
            //}
            
        //}
        //printf("%s\n", resposta);
    }
    
	return 0;
}