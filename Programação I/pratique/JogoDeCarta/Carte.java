import javax.management.RuntimeErrorException;

public class Carte {
    private int valor;
    private String naipe;

    public Carte (int valor, String naipe) throws Exception{
        if (valor < 1 || valor > 13){
            throw new RuntimeErrorException(null, "Valores da entrada inválida");
        } else if ( naipe != "copas" && naipe != "espadas" && naipe != "ouros" && naipe != "paus" ){
            throw new RuntimeErrorException(null, "Valores da entrada inválida");
        } else {
            this.valor = valor;
            this.naipe = naipe;
        }
        // if ((valor > 1 || valor < 13) && ( naipe != "copas" && naipe != "espadas" && naipe != "ouros" && naipe != "paus" )){
        //     this.valor = valor;
        //     this.naipe = naipe;
        // } else {
        //     throw new RuntimeErrorException(null, "Valores da entrada inválida");
        // }
        
    }
    public void setValor( int valor){
        this.valor = valor;
    }
    public int getValor(){
        return this.valor;
    }
    public void setNaipe( String naipe){
        this.naipe = naipe;
    }
    public String getNaipe(){
        return this.naipe;
    }
    @Override
    public String toString(){
        String[] nomes = {"none","ás","dois","três","quatro", "cinco","seis","sete","oito","nove","dez","vallete","dama","rei",};

        return nomes[valor] + " de " + naipe;
    }
}