import java.util.Scanner;
public class Animal {
    public static void main( String args[]) {
        Scanner input = new Scanner( System.in );

        String nome1;
        String nome2;
        String nome3;

        System.out.print("Digite um nome: ");
        nome1 = input.nextLine();
        System.out.print("Digite um nome: ");
        nome2 = input.nextLine();
        System.out.print("Digite um nome: ");
        nome3 = input.nextLine();


         if ((nome1.equals("vertebrado")) && (nome2.equals("ave")) && (nome3.equals("carnivoro"))) {
            System.out.println("aguia");
        }

        if ((nome1.equals("vertebrado")) && (nome2.equals("ave")) && (nome3.equals("onivoro"))) {
            System.out.println("pomba");
        }

        if ((nome1.equals("vertebrado")) && (nome2.equals("mamifero")) && (nome3.equals("onivoro"))) {
            System.out.println("homem");
        }

        if ((nome1.equals("vertebrado")) && (nome2.equals("mamifero")) && (nome3.equals("herbivoro"))) {
            System.out.println("vaca");
        }

        if ((nome1.equals("invertebrado")) && (nome2.equals("inseto")) && (nome3.equals("hematofago"))) {
            System.out.println("pulga");
        }

        if ((nome1.equals("invertebrado")) && (nome2.equals("inseto")) && (nome3.equals("herbivoro"))) {
            System.out.println("lagarta");
        }

        if ((nome1.equals("invertebrado")) && (nome2.equals("anelideo")) && (nome3.equals("hematofago"))) {
            System.out.println("sanguessuga");
        }

        if ((nome1.equals("invertebrado")) && (nome2.equals("anelideo")) && (nome3.equals("onivoro"))) {
            System.out.println("minhoca");
        }

        // else {
        //     System.out.println("Erro! Voçê digitou uma coisa errada.");
        // }
           

        
    }
}