import java.util.Scanner;
public class Salario {
    public static void main( String args[]) {
        Scanner input = new Scanner( System.in);

        int numero ;
        float valor ;
        float totals ;
        float horas ;

        System.out.println("Digite o numero: ");
        numero = input.nextInt();
        System.out.println("Digite o valor por hora: ");
        valor = input.nextInt();
        System.out.println("Digite a quantidade de horas trabalhadas: ");
        horas = input.nextInt();

        totals = valor * horas ;


        System.out.println("NUMBER = " + numero);
        System.out.printf("SALARY = %.2f\n", totals);
    }
}
