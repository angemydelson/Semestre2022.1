package aula15;

public interface Imprimivel {
    public static final String INICIO = "<inicio>";
    public static final String FIM = "<fim>";
    public abstract void imprimir();
    public abstract void imprimirNoConsole();    
    default void imprimirQualquerCoisa() {
        System.out.println("Teste");
    }
}
