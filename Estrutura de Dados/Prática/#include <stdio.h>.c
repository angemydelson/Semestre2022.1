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
	char str[100];
    char resposta[1];
    fgets(str, 100 , stdin);
	char delim[] = " ";
    char verificador[50];
	char *ptr = strtok(str, delim);
    int i = 0, j=0;

	while(ptr != NULL)
	{
	    ptr = toLower(ptr);
	    
		printf("'%s'\n", ptr);
        verificador[i] = ptr[i-j] ;
		ptr = strtok(NULL, delim);
        
        i++;
        j++;
	}
    printf("\n\n%s\n", verificador);


	for (i = 0; i < strlen(verificador); i++) {
        if (i == strlen(verificador)-1){
            break;
        }
        if (verificador[i] == verificador[i+1]) {
            resposta[0] = 'Y';
        } else {
            resposta[0] = 'N';
            
        }
        
    }
    printf("%s\n", resposta);
    printf("%c\n", verificador[4]);
	return 0;
}