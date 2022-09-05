import java.util.Scanner;
public class SubstituicaodeVetor {
    public static void main( String args[]) {
        Scanner angemy = new Scanner(System.in);
        int v[] = new int[10];
        int i = 0, valor ;

        while(i < 10) {
            System.out.println("Digite um valor: ");
            valor = angemy.nextInt();
            if (valor == 0 || valor < 0) {
                v[i] = 1;
            } else {
                v[i] = valor;

            }
            
            
            
            i++;

        }
        for(i = 0; i < 10; i++ ) {
            System.out.println("X[" + i + "] = " + v[i]);
        }
    }
}