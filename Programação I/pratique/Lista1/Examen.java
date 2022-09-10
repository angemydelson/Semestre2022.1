public class Examen{
    public static void main(String args[]){
        Porta p1 = new Porta(true, "Marrom");
        p1.Apresentar();
        p1.estaAberta();
        p1.fecha();
        p1.estaAberta();
        p1.pinta("Vermelho");
        p1.Apresentar();
    }
}