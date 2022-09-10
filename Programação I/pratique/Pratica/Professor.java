public class Professor extends Pessoa{
    private String especialidade;
    private double salario;

    public Professor(String nome, int idade, String sexo,String especcialidade, double salario){
        super(nome, idade, sexo);
        this.especialidade = especcialidade;
        this.salario = salario;
       
    }

    public void repeberAumento(double aumento){
        this.salario += aumento;
    }
    public void apresentarP(){
        System.out.println("Especialida: " + this.especialidade);
        System.out.println("Salário: " + this.salario + " R$");
        System.out.println("");
    }

    public void setEspecialidade( String especialidade){
        this.especialidade = especialidade;
    }
    public String getEpecialidade(){
        return this.especialidade;
    }
    public void setSalario( double salario){
        this.salario = salario;
    }
    public double getSalario(){
        return this.salario;
    }
}