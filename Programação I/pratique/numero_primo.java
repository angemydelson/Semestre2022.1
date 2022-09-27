import java.util.Scanner;
public class numero_primo{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        System.out.println("Digite um numero");
        boolean verificador = true;
        int valor = input.nextInt();
        
        for( int i = 2; i < valor ; i++){
            if(valor % i == 0){
                verificador = false;
            }
        }
        if (verificador == true){
            System.out.println("esse numero é primo!");
        }else{
            System.out.println("esse numro não é primo!");
        }
    }
}