
public class Funcionario extends Pessoa{
    private String setor;
    private boolean trabalhando;

    public Funcionario(String nome, int idade, String sexo,String setor, boolean trabalhando){
        super(nome, idade, sexo);
        this.setor = setor;
        this.trabalhando = trabalhando;
        
    }

    public void mudarTrabalho(boolean trabalhando){
        this.trabalhando = !this.trabalhando;
    }
    public void apresentarF(){
        System.out.println("Setor: " + this.setor);
        if (this.trabalhando == true){
            System.out.println("Trabalhando: Sim");
            System.out.println("");
        } else {
            System.out.println("Trabalhando: Nom");
            System.out.println("");
        }
        
    }

    public void setSetor(String setor){
        this.setor = setor;
    }
    public String getSetor(){
        return this.setor;
    }
    public void setTrabalhando(Boolean trabalhando){
        this.trabalhando = trabalhando;
    }
    public boolean getTrabalhando(){
        return this.trabalhando;
    }
}