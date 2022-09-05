import java.util.Scanner;
public class PreenchimentodeVetor {
    public static void main ( String args[]) {
        int v[] = new int[10];
        Scanner angemy = new Scanner( System.in);
        System.out.println("Informe um valor: ");
        int valor = angemy.nextInt();
        v[0] = valor;
        for (int i = 1; i<=9; i++){
            
            valor *= 2;
            v[i] = valor;

        }
    
        for (int i = 0; i < v.length; i++) {
            System.out.println("N[" + i + "] = " + v[i]);
        }
        angemy.close();
    }
}
