import java.util.Scanner;
public class AcimadaDiagonalPrincipal {
    public static void main ( String args[]) {
        Scanner angemy = new Scanner(System.in);
        double matriz[][] = new double[12][12];
        int i, j, num;
        double soma = 0, media;
        char operacao;

        System.out.println("Digite M para fazer a média ou S parafazer sa soma: ");
        operacao = angemy.next().toUpperCase().charAt(0);

        for ( i = 0; i < matriz.length; i++) {
            System.out.println(" Digite os valores: ");
            for (j = 0; j < matriz.length; j++) {
                matriz [i][j] = angemy.nextDouble();
            }
        }

        for ( i=10; i >= 0; i--) {
            for ( j=11; j >= 1; j--) {
                if ( i == j || i > j){
                    continue;
                }
                soma += matriz[i][j];
            }
        }
        
        if ( operacao == 'M') {
            media = soma / (((M.length * M.length) - 12) / 2);
            System.out.printf("%.1f", media);
        }
        if (operacao == 'S') {
            System.out.printf("%.1f" , soma);
        }

        System.out.println();
        for ( i = 0; i < matriz.length; i++) {
            for (j = 0; j < matriz.length; j++) {
                System.out.print(matriz[i][j] + "\t");
            }
            System.out.println();
        }


        System.out.println(soma);
    }
}