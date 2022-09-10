public class Pessoa{
    private String nome;
    private int idade;
    private String sexo;

    // Métodos
    public Pessoa(String nome, int idade, String sexo){
        this.nome = nome;
        this.idade = idade;
        this.sexo = sexo;
    }
    public void apresentar(){
        System.out.println("=-----------------------------------------------=");
        System.out.println("Nome: " + this.nome);
        System.out.println("Idade: " + this.idade + " anos");
        System.out.println("Sexo: " + this.sexo);
    }

    public void fazerAniv(){
        this.idade++;

    }
    public void setNome(String nome){
        this.nome = nome;
    }
    public String getNome(){
        return this.nome;
    }
    public void setIdade(int idade){
        this.idade = idade;
    }
    public int getIdade(){
        return this.idade;
    }
    public void setSexo(String sexo){
        this.sexo = sexo;
    }
    public String getSexo(){
        return this.sexo;
    }
}