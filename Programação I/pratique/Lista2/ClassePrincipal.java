public class ClassePrincipal{
    interface Media {
        double CalculodaMedia(int nota1, int nota2, int nota3);
    }
    public static void main(String[] args){
        Estudante media = new  Estudante("Angemydelson", 10, 9, 10);
        media.calcularMedia();
        media.apresentar();
        media.atribuirPontoExtra();
        media.apresentar();
        int N1 = media.getNota1();
        int N2 = media.getNota2();
        int N3 = media.getNota3();
        Media calculo = (N1,N2,N3) -> {
            (N1 + N2 + N3)/3;
        }
    }
}