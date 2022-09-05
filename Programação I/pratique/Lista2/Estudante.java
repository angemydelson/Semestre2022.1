public class Estudante {
    private String nome;
    private int nota1;
    private int nota2;
    private int nota3;

    public Estudante(String nome, int nota1, int nota2, int nota3){
        this.nome = nome;
        this.nota1 = nota1;
        this.nota2 = nota2;
        this.nota3 = nota3;
    }

    public void atribuirPontoExtra(){
        setNota1(nota3+1);
    }
    public double calcularMedia(){
        double media = (getNota1() + getNota2() + getNota3())/3;
        return media;
    }
    public void apresentar(){
        System.out.println("Nome : " + getNome() + "\nMedia : " + calcularMedia()) ;
    }
    public void setNome(String nome){
        this.nome = nome;
    }
    public String getNome(){
        return this.nome;
    }
    public void setNota1(int nota1){
        this.nota1 = nota1;
    }
    public int getNota1(){
        return this.nota1;
    }
    public void setNota2(int nota2){
        this.nota2 = nota2;
    }
    public int getNota2(){
        return this.nota2;
    }
    public void setNota3(int nota3){
        this.nota3 = nota3;
    }
    public int getNota3(){
        return this.nota3;
    }

}
