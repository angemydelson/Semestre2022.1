import java.util.Scanner;
public class TrocaemVetor {
    public static void main( String args[]) {
        Scanner angemy = new Scanner(System.in);
        int vetor[] = new int[20];
        int vetor2[] = new int[20];
        int i = 0 , valor, j = 0;
        while ( i < 20) {
           
            valor = angemy.nextInt();
            vetor[i] = valor;

            i++;
        }


        for ( i = 19; i >= 0; i--) {

            vetor2 [j] = vetor[i];
            j ++;

        }
        for ( i = 0; i < 20; i++) {

            System.out.println("N[" + i + "] = " + vetor2[i]);

        }
        


        
    }
}