import java.util.Scanner;
public class ParOuImpar {
    public static void main( String args[]) {
        Scanner angemy = new Scanner(System.in);
        int N, valor;

        System.out.println("Quantidade de laço: ");
        N = angemy.nextInt();

        for(int i=1; i<=N; i++) {
            System.out.println("Digite um número: ");
            valor = angemy.nextInt();
            
            if (valor % 2 == 0 && valor < 0) {
                System.out.println("EVEN NEGATIVE");
            }   else if (valor % 2 == 0 && valor > 0){
                System.out.println("EVEN POSITIVE");
            } else if (valor % 2 != 0 && valor < 0 ) {
                System.out.println("ODD NEGATIVE");
            } else if (valor % 2 != 0 && valor > 0) {
                System.out.println("ODD POSITIVO");
            } else if (valor == 0){
                System.out.println("NULL");
            }
        }
    }
}