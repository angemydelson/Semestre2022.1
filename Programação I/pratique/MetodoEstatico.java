

public class MetodoEstatico {
    public static void main (String args[]){
        MinhaCalculadora p1 = new MinhaCalculadora(10, 5);
        System.out.println(p1.Multiplicao());
        System.out.println(p1.Adicao());
        System.out.println(p1.Divisao());
        System.out.println(p1.DivisaoResto());
        Teste.print();
        System.out.println((MinhaCalculadora.max));
        System.out.println((MinhaCalculadora.min));
        
    }
}