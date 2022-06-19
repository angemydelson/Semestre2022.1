import java.util.Scanner;
public class Area {
     public static void main( String args[]) {
        Scanner ler = new Scanner( System.in);

        float A,B,C;
        double pi = 3.14159;
        double areaT, areaC, areaTra, areaQ, areaR;

        System.out.println("Digite o primeiro lado: ");
        A = ler.nextFloat();
        System.out.println("Digite o segundo lado: ");
        B = ler.nextFloat();
        System.out.println("Digite o terceiro lado: ");
        C = ler.nextFloat();
        
        areaT = (A * C)/2;
        areaC = pi * C * C;
        areaTra = ((A + B)*C)/2;
        areaQ = B * B;
        areaR = A * B;

        System.out.printf("TRIANGULO: %.3f\n", areaT );
        System.out.printf("CIRCULO: %.3f\n", areaC);
        System.out.printf("TRAPEZIO: %.3f\n", areaTra);
        System.out.printf("QUADRADO: %.3f\n", areaQ);
        System.out.printf("RETANGULO: %.3f\n", areaR);
        
    }
}