public class Teste1{
    public static void main(String [] args){
        Pessoa pessoa = new Pessoa("Angemydelson", "Rua Inambu", "3425346536", "4364578986");
        Pessoa aluno = new Pessoa("Angemydelson", "Rua Inambu", "3425346536", "4364578986");
        Pessoa professor = new Pessoa("Angemydelson", "Rua Inambu", "3425346536", "4364578986");
        aluno.setEndereco("Rua 12");
        System.out.println(aluno.getEndereco());

        professor.setEndereco("Rua 14");
        System.out.println(professor.getEndereco());
        
        System.out.println(aluno.obterEtiquetaEndereco());
        System.out.println(professor.obterEtiquetaEndereco());
    }
}