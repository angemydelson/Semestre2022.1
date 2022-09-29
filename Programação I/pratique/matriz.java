import java.util.Scanner;

public class matriz{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int matriz[][]= new int[4][4];
        int total = 0;
        for (int i=0; i<4; i++){
            for (int j=0; j<4; j++){
                matriz[i][j] = input.nextInt();
            }
        }
        for (int i=0; i<4; i++){
            for (int j=0; j<4; j++){
               System.out.print("" + matriz[i][j] +" ");
            }
            System.out.println("");
        }
        for (int i=0; i<4; i++){
            for (int j=0; j<4; j++){
                if (i>j){
                    total += matriz[i][j];
                }
            }
        }
        
        System.out.println(total);
        

    }
}