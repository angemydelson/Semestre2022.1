public class Imovel {
    private String cor;
    protected Porta portas[];
    
    public Imovel(String cor, int numPortas){
        this.cor = cor;
        this.portas = new Porta[numPortas];
    }

    public void pinta(String cor){
        this.cor = cor;
    }

    public int quantasPortasEstaoAberta(){
        int cont =0;
        for (Porta porta: portas){
            if (porta.estaAberta()){
                cont ++;
            }
        }
        return cont;
    }
    public int getTotalPortas(){
        return this.portas.length;
    }
    
}