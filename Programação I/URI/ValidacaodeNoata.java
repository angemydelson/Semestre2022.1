import java.util.Scanner;

import javax.print.attribute.standard.Media;
public class ValidacaodeNoata {
    public static void main( String args[]) {
        Scanner angemy = new Scanner( System.in);
        
        float nota = 0, media = 0 ,total = 0;
        int cont = 1;
        while (cont <= 2) {
            System.out.print("Digite nota do aluno: ");
            nota = angemy.nextFloat();

            if (nota <= 10 && nota > 0){
                total += nota;

            } else {
                System.out.println("nota invalida");
                continue;
            }
            
            cont++;
        }

        media = total/2;
        System.out.printf("media = %.2f\n" ,media);
        


    }
}