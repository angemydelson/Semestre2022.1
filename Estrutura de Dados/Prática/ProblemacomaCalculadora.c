// #include <stdio.h>
// #include <string.h>
// int main() {
//     char vetor[14];
//     int i, j, soma = 0, valor;
//     printf("Quantas linhas: ");
//     scanf("%d", &valor);
//     for (i=0; i<valor; i++) {
//         printf("Digite as caracteres: \n");
//         scanf("%s", vetor);
//         for (j=0; j<14; j++){
//             soma += vetor[j];
//         }
//         printf("= %d\n", soma);

//     }
    // }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{

   int t;
    scanf("%d",&t);
   while(t--)
  {
      char str[15],tmp1[3],tmp2[4],tmp3[3];
      int l,i,m=0,n=0,o=0,sum=0,num1=0,num2=0,num3=0;
      
      scanf("%s",str);
      l=strlen(str);

    for (i=0;i<l;i++)
    {
        if(i>=2 && i<=3)
        {
            tmp1[m]=str[i];
            m++;
            continue;
        }
        else if(i>=5 && i<=7)
        {
            tmp2[n]=str[i];
            n++;
            continue;
        }
        else if(i>=11 && i<=12)
        {
            tmp3[o]=str[i];
            o++;
            continue;
        }
    }
    tmp1[m]='\0';
    tmp2[n]='\0';
    tmp3[o]='\0';
    num1=atoi(tmp1);
    num2=atoi(tmp2);
    num3=atoi(tmp3);
    sum=num1+num2+num3;
    printf("%d\n",sum);

    sum=0;num1=0;num2=0;num3=0;


}



    return 0;

}