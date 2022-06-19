import java.util.Scanner;
public class Multiplo {
    public static void main( String args[]) {
        Scanner input = new Scanner( System.in);
        int valor1;
        int valor2;
        float divisao;
        float div;

        System.out.println("Digite um valor1: ");
        valor1 = input.nextInt();
        System.out.println("Digite um valor2: ");
        valor2 = input.nextInt();

        divisao = valor1 % valor2;
        div = valor2 % valor1;

        if (divisao == 0 || div == 0){
            System.out.println("São Múltiplos");
        } else {
            System.out.println("Não são múltiplos");
        }

    



    }    
}