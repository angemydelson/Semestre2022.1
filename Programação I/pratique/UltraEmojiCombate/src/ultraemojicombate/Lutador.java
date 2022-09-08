/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package ultraemojicombate;


public class Lutador {
    //Atributos 
    private String nome;
    private String nacionalidade;
    private int idade;
    private float altura;
    private float peso;
    private String categoria;
    private int vitorias, derrotas, empates;
//    Métodos Público
    public void apresentar() {
        System.out.println( "=-----------------------------------------------------------------------------=");
        System.out.println("Chegou a hora de apresentar o lutador " + this.getNome());
        System.out.println("Diretamente de " + this.getNacionalidade());
        System.out.println("Com " + this.getIdade() + " anos e " + this.getAltura());
        System.out.println("Pesando " + this.getPeso() + " kg ");
        System.out.println(this.getVitorias() + " vitórias");
        System.out.println(this.getDerrotas() + "derrotas e");
        System.out.println(this.getEmpates() + "empates!");
}
    public void status() {
        System.out.println(this.getNome() + " é um peso " + this.getNacionalidade());
        System.out.println("Ganhou " + this.getVitorias() + "vezes"); 
        System.out.println("Perdeu " + this.getDerrotas() + "vezes");
        System.out.println("Empatatou " + this.getEmpates() + "vezes");
    }
    public void ganharLutar() {
        this.setVitorias(this.getVitorias() + 1);
        
    }
    public void perderLuta() {
        this.setDerrotas(this.getDerrotas() + 1);
    }
    public void empatarLuta() {
        this.setEmpates(this.getEmpates() + 1);
    }
//    Método Especial

    public Lutador(String nome, String na, int id, float al, float pe, int vi, int de, int em) {
        this.nome = nome;
        this.nacionalidade = na;
        this.idade = id;
        this.altura = al;
        this.peso = pe;
        this.vitorias = vi;
        this.derrotas = de;
        this.empates = em;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getNacionalidade() {
        return nacionalidade;
    }

    public void setNacionalidade(String nacionalidade) {
        this.nacionalidade = nacionalidade;
    }

    public int getIdade() {
        return idade;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }

    public float getAltura() {
        return altura;
    }

    public void setAltura(float altura) {
        this.altura = altura;
    }

    public float getPeso() {
        return peso;
//        this.setCategoria();
    }
 
    public void setPeso(float peso) {
        this.peso = peso;
    }

    public String getCategoria() {
        return categoria;
    }

    private void setCategoria() {
        
       if (this.peso <  52.2) {
           this.categoria = "Inválida";
       } else if ( this.peso <= 70) {
           this.categoria = "Leve"; 
       } else if (this.peso <= 83.9) {
           this.categoria = "Médio";
       } else if (this.peso <= 120){
           this.categoria = "Pesado";
       } else {
           this.categoria = "Inválida";
       }
    }

    public int getVitorias() {
        return vitorias;
    }

    public void setVitorias(int vitorias) {
        this.vitorias = vitorias;
    }

    public int getDerrotas() {
        return derrotas;
    }

    public void setDerrotas(int derrotas) {
        this.derrotas = derrotas;
    }

    public int getEmpates() {
        return empates;
    }

    public void setEmpates(int empates) {
        this.empates = empates;
    }

    
     
    
}
