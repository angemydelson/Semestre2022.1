public class Teste {
    public static void main(String[] args) throws Exception{
        // Carte carta = new Carte(1, "ouros");
        // System.out.println(carta);
        // Baralho baralhar = new Baralho();
        // System.out.println(baralhar);
        // baralhar.embalahar();
        // System.out.println(baralhar);
        // baralhar.resetar();
        // System.out.println(baralhar);
        try{
            Carte carta = new Carte(3, "paus");
            Baralho baralhar = new Baralho();
            System.out.println(baralhar);
            baralhar.embalahar();
            System.out.println(baralhar);
            baralhar.embalahar();
            System.out.println(baralhar);
            // baralhar.resetar();
            // System.out.println(baralhar);
        } catch (RuntimeException e){
            System.out.println((e.getMessage()));
        } 
    }
}
