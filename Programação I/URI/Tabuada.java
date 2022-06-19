import java.util.Scanner;
public class Tabuada {
    public static void main( String args[]) {
        Scanner angemy = new Scanner( System.in);

        int valor = angemy.nextInt();
        int cont = 1 ;
        while ( cont <= 10 ) {
            System.out.println( cont + " x " + valor + " = " + cont * valor);
            cont ++;
        }

    }
}