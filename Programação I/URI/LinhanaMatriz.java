import java.util.Scanner;
public class LinhanaMatriz {
public static void main( String args[]) {
    Scanner angemy = new Scanner( System.in);
    int num, valor, i, j;
    char operacao;
    double vetor [][]= new double[12][12];
    double soma = 0, media;

    System.out.println("Digite um numero de coluna: ");
    num = angemy.nextInt();
    System.out.println("Informe a operaçao: ");
    operacao = angemy.next().toUpperCase().charAt(0);

    for ( i  = 0 ; i < vetor.length; i++) {
        System.out.println("Digite os valores: ");
        for ( j = 0; j < vetor[i].length ; j++) {
            
            vetor[i][j] = angemy.nextDouble();
           
        }
    }

    for ( j = 0; j < vetor.length ; j++) {
            soma += vetor[num][j];

    }
        
    if (operacao == 'M' ) {
        media = soma / vetor.length;
        System.out.printf("%.1f\n",media);

    } 
    
    if (operacao == 'S') {
        System.out.printf("%.1f\n",soma);

    }
   
    }
}