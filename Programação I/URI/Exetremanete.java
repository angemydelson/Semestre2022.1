import java.util.Scanner;
public class Exetremanete
{
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        int number1;
        int number2;
        int sum;

        //System.out.println();
        number1 = input.nextInt();
        //System.out.println();
        number2 = input.nextInt();

        sum = number1 + number2;

        System.out.printf("X =  %d\n" ,sum);
    }
}