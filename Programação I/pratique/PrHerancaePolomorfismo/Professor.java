public class Professor extends Pessoa  {
    private String departamento;
    private String nomeCurso;
    private double salario;

    // // public Professor(){
    // //     super();
    // }
    public Professor(String nome, String endereco, String telefone, String cpf, String departamento, String nomeCurso, double salario){
        super(nome, endereco, telefone, cpf);
        this.departamento = departamento;
        this.nomeCurso = nomeCurso;
        this.salario = salario;
    }

    // public double calcularSalario(){

    // }
    public void setDepartamento( String departamento){
        this.departamento = departamento;
    }
    public String getDepartamento(){
        return this.departamento;
    }
    public void setNomeCurso( String nome){
        this.nomeCurso = nome;
    }
    public String getNome(){
        return this.nomeCurso;
    }
    public void setSalario( double salario){
        this.salario = salario;
    }
    public double getSalario(){
        return this.salario;
    }
    // @Override
    public String obterEtiquetaEndereco(){
        String s = "Endereço do aluno: ";
        s += super.getEndereco();
        return s;
    }
}
