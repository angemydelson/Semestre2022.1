public class Porta{
    private boolean aberta;
    private String cor;
    private String dimensaoX;
    private String dimensaoY;
    private String dimensaoZ;

    public Porta (boolean aberta, String cor){
        this.aberta = aberta;
        this.cor = cor;
    }
    
    public void abre(){
        this.aberta = true;
    }
    public void fecha(){
        this.aberta = false;
    }
    public void pinta(String cor){
        this.cor = cor;
    }
    public void  estaAberta(){
        if (this.aberta == true){
            System.out.println("A porta está aberta!");
        } else{
            System.out.println("A porta não está aberta");
        }
    }
    public void Apresentar(){
        System.out.println("A cor da porta é :" + this.cor);
    }

    public void setAberta( boolean aberta){
        this.aberta = aberta;
    }
    public boolean getAberta(){
        return this.aberta;
    }
    public void setCor( String cor){
        this.cor = cor;
    }
    public String getCor(){
        return cor;
    }


}