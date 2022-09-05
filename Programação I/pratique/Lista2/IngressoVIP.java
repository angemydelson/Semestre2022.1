public class IngressoVIP extends Ingresso {
    private float valorAd;
    public IngressoVIP(float valor, float valorAd){
        super(valor);
        this.valorAd = valorAd;
    }
    @Override
    public float retornaValor (){
        float valor = getValor()+getValorAd();
        return valor;
    }

    public void setValorAd(float valorAd){
        this.valorAd = valorAd;
    }
    public float getValorAd(){
        return this.valorAd;
    }
}
