import java.util.Scanner;

public class Cedula {
    public static void main( String args[]) {
        Scanner input = new Scanner( System.in);
        int reste;

        System.out.print("Digite um valor: ");
        int valor = input.nextInt();
        System.out.println(valor);
        System.out.println(valor / 100 + " nota(s) de R$ 100,00");
        reste = valor % 100;
        System.out.println(reste / 50 + " nota(s) de R$ 50,00");
        reste = reste % 50;
        System.out.println(reste / 20 +" nota(s) de R$ 20,00");
        reste = reste % 20;
        System.out.println(reste / 10 + " nota(s) de R$ 10,00");
        reste = reste % 10;
        System.out.println(reste / 5 + " nota(s) de R$ 5,00");
        reste = reste % 5;
        System.out.println(reste / 2 + " nota(s) de R$ 2,00");
        reste = reste % 2;
        System.out.println(reste / 1 + " nota(s) de R$ 1,00");





    }
}
