import java.util.Scanner;
public class ParesentreCincoNumeros {
    public static void main( String args[]) {
        Scanner angemy = new Scanner( System.in);

        int cont = 1, valor = 0, total = 0;
        while( cont <= 5) {
            System.out.print("Digite um valor:");
            valor = angemy.nextInt();

            if(valor % 2 == 0) {
                total ++;
    
            }
            cont ++;
        }
        System.out.println(total + " valores pares");

    }
}