public class Aluno extends Pessoa {
    private String cursos;
    private double[] nota;

    // public Aluno(){
    //     super();
    // }

    public Aluno(String nome, String endereco, String telefone, String cpf, String curso, double[] nota){
        super(nome, endereco, telefone, cpf);
        this.cursos = curso;
        this.nota = nota;
    }


    // public double calcularMedia(){

    // }
    // public double verificarAprovado(){

    // }
    public void setCursos( String curso){
        this.cursos = curso;
    }
    public String getCursos(){
        return this.cursos;
    }
    public void setNome( double[] nota){
        this.nota = nota;
    }
    public double[] getNota(){
        return this.nota;
    }
    // @Override
    public String obterEtiquetaEndereco(){
        String s = "Endereço do professor: ";
        s += super.getEndereco();
        return s;
    }
}
