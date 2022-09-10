
public class Heranca{
    public static void main(String[] args){
       Aluno p1 = new Aluno("Angemy",21, "Masculino", 2121101002, "Ciência da Computação");
       p1.apresentar();
       p1.apresentarA();
       p1.fazerAniv();
       p1.apresentar();
       p1.apresentarA();

       Professor l1 = new Professor("Samuel", 40, "Masculino", "Desenvolvedor", 10000.0);
       l1.apresentar();
       l1.apresentarP();
       l1.repeberAumento(560.0);
       l1.apresentar();
       l1.apresentarP();

       Funcionario n1 = new Funcionario("Midelta", 19, "Feminino", "Secretaria", true);
        n1.apresentar();
        n1.apresentarF();
        n1.mudarTrabalho(true);
        n1.apresentar();
        n1.apresentarF();
        n1.mudarTrabalho(true);
        n1.apresentar();
        n1.apresentarF();
        n1.mudarTrabalho(true);
        n1.apresentar();
        n1.apresentarF();
    }
}