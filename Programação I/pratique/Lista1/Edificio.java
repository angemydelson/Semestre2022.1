public class Edificio extends Imovel{
   private int totalAndares;

   public Edificio(String cor, int numPortas, int numAndares){
       super(cor, numPortas);
       this.totalAndares = numAndares;
   }
   public void setPorta(int idx, Porta p){
       portas[idx] = p;

   }

   public void adicionarAndar(){
       this.totalAndares ++;
   }

   public int getTotalAndares(){
       return this.totalAndares;
   }

   
}