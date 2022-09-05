import java.util.Scanner;
public class Extremamente
{
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        int number1;
        int number2;
        int sum;

        System.out.print("A = ");
        number1 = input.nextInt();
        System.out.print("B = ");
        number2 = input.nextInt();

        sum = number1 + number2;

        System.out.printf("X =  %d\n" ,sum);
    }
}