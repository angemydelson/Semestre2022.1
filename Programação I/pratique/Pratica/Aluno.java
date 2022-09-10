public class Aluno extends Pessoa{
    private int matr;
    private String curso;

    public Aluno(String nome, int idade, String sexo,int matr, String curso){
        super(nome, idade ,sexo);
        this.matr = matr;
        this.curso = curso;
        
    }
    public void apresentarA(){
        System.out.println("Matŕicula: " + this.matr);
        System.out.println("Curso: " + this.curso);
        System.out.println(" ");
    }

    public void cancelarMatr(){
        System.out.println("Matrícula será cancelada");
    }

    public void setMatr(int matr){
        this.matr = matr;
    }
    public int getMatr(){
        return this.matr;
    }
    public void setCurso(String curso){
        this.curso = curso;
    }
    public String getCurso(){
        return this.curso;
    }
}