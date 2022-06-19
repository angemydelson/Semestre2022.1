import java.util.Scanner;
public class Esfera {
    public static void main( String args[]) {
        Scanner input = new Scanner( System.in);
        
        double pi = 3.14159;
        double area;
        int raio;
        
        System.out.print("Digite o raio da esfera: ");
        raio = input.nextInt();

        area = (4.0/3) * pi * raio * raio * raio;

        System.out.printf("VOLUME = %.3f\n", area);
    }
}