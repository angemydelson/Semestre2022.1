# include <stdio.h>
# include <math.h>
double Binomial(int n, double p, int x) {
    int  n_x, i, j, multi = 1;
    double c, q, cCombinacao, nFactorial = 1, n_xFactorial = 1, xFactorial = 1, pDex, total = 0;
    n_x = n - x;
    q = 1 - p;

    for(i = n; i > 0; i--){
        nFactorial *= i;
        
    }
    for(i = n_x; i > 0; i--){
        n_xFactorial *= i;
        
    }
    for(i = x; i > 0; i--){
        xFactorial *= i;
        
    }
    cCombinacao = nFactorial / ((n_xFactorial) * xFactorial);
    pDex = cCombinacao * (pow(p,x)) * (pow(q,n_x));
    
    return pDex;
  
}
void BinomialAcumulada(int n, double p, int x){
    int i = x;
    double total = 0;
    for (int j=0; j <= i; j++){
        x = j;
        Binomial(n, p, x);
        printf("%.4lf\n",Binomial(n,p,x));
        total += Binomial(n, p, x);
    }
    printf("Total = %.4lf\n", total);
    printf("Total = %.2lf porcento\n", total * 100);
    
}
int main(){
    int n, x, choix;
    double p;
    
    for ( ; ; ){
        printf("\n=------------------------------------------------=\n");
        printf("Bem vindo á nossa empresa de software\n");
        printf("-------------------Superdel Tech-----------------------\n");
        printf("1- Probabilidade Binomial Individual – P = x\n2- Probabilidade Binomial Acumulada – P <= x\n0- Para sair: ");
        scanf("%d", &choix);
        if ( choix == 1 ){
            printf("\n=------------------------------------------------=\n");
            printf("Digite o valor n: ");
            scanf("%d", &n );
            printf("Digite o valor p: ");
            scanf("%lf", &p);
            printf("Digite o valor x: ");
            scanf("%d", &x);
            printf("P(x= %d) = %lf\n", x, Binomial(n,p,x));
            printf("P(x= %d) = %lf porcento\n", x, Binomial(n,p,x)*100);
            
        } else if (choix == 2){
            printf("\n=------------------------------------------------=\n");
            printf("Digite o valor n: ");
            scanf("%d", &n );
            printf("Digite o valor p: ");
            scanf("%lf", &p);
            printf("Digite o valor x: ");
            scanf("%d", &x);
            BinomialAcumulada(n,p,x);
            
        } else if (choix == 0){
            printf("\n=------------------------------------------------=\n");
            printf("Obrigado, Volte sempre.\n");
            break;
            
        } else {
            printf("\n=------------------------------------------------=\n");
            printf("Opps digitou errado!!!\nVoçê tem que escolher apenas 1 ou 2.\nSe voçê quiser sair só apertar 0\n");
        }
    }
    
    
    
    return 0;
}
