import java.util.Scanner;
public class PositivoeMedia {
    public static void main( String args[]) {
        Scanner angemy = new Scanner( System.in );

        float valor;
        float media = 0;
        int contV = 0;
        int cont = 1;
        float total = 0;
        while(cont <= 6) {
            System.out.print("Digite um valor: ");
            valor = angemy.nextFloat();
            if (valor > 0) {
                contV ++;
                total += valor;
                
            }

            cont ++;

        } 
        
        if (contV > 1) {
            System.out.println(contV + " valores positivos" );
            media = total / contV;
            System.out.printf("%.1f\n",media);

        } else {
            System.out.println(contV + " valor positivo" );
            media = total / contV;
            System.out.println(media);

        }



    }
}