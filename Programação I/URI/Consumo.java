import java.util.Scanner;
public class Consumo {
    public static void main( String args[]){
        Scanner angemy = new Scanner( System.in);

        int distanciapercorrida;
        float gastoCombustivel;
        
        System.out.println("Digite a distância percorrida");
        distanciapercorrida = angemy.nextInt();
        System.out.println("Digite o total de gasto de combustível:");
        gastoCombustivel = angemy.nextFloat();

        float total = distanciapercorrida / gastoCombustivel;

        System.out.printf("%.3f km/l \n", total);




    }
}