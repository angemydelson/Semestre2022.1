import java.util.Scanner;
public class numero_primo2{
    public static void main(String[] args){
        for (int j = 2; j <= 48; j++){
            boolean verificador = true;
            for( int i = 2; i < j ; i++){
                if(j % i == 0){
                    verificador = false;
                }
            }
            if (verificador == true){
                System.out.println(j);
            } 
        }
        
    }
}
   