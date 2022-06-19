import java.util.Scanner;
public class SortSimple {
    public static void main( String args[]) {
        Scanner input = new Scanner( System.in);
        
        int valor1;
        int valor2;
        int valor3;

        System.out.print("Digite uma valor: ");
        valor1 = input.nextInt();
        System.out.print("Digite uma valor: ");
        valor2 = input.nextInt();
        System.out.print("Digite uma valor: ");
        valor3 = input.nextInt();

        if (valor1 > valor2 && valor1 > valor3 && valor2 > valor3) {
            System.out.println(valor3);
            System.out.println(valor2);
            System.out.println(valor1);
        }

        if (valor1 < valor2 && valor1 < valor3 && valor2 < valor3) {
            System.out.println(valor1);
            System.out.println(valor2);
            System.out.println(valor3);
        }

        if (valor1 < valor2 && valor1 > valor3 && valor2 > valor3) {
            System.out.println(valor3);
            System.out.println(valor1);
            System.out.println(valor2);
        }

        if (valor1 > valor2 && valor1 > valor3 && valor2 < valor3) {
            System.out.println(valor2);
            System.out.println(valor3);
            System.out.println(valor1);
        }

        if (valor1 < valor2 && valor1 < valor3 && valor2 > valor3) {
            System.out.println(valor1);
            System.out.println(valor3);
            System.out.println(valor2);
        }

        if (valor1 > valor2 && valor1 < valor3 && valor2 < valor3) {
            System.out.println(valor2);
            System.out.println(valor1);
            System.out.println(valor3);
        }

        System.out.println("");
        System.out.println(valor1);
        System.out.println(valor2);
        System.out.println(valor3);

        
    }
}