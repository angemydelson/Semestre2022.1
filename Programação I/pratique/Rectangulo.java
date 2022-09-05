// Exception não monitorada

// public class Rectangulo {
//     private int altura;
//     private int largura;
//     public Rectangulo(int altura, int largura){
//         this.setTamanho(altura, largura);
//     }

//     public void setTamanho(int altura, int largura){
//         if ( largura >= 0 && altura >=0){
//             this.altura = altura;
//             this.largura = largura;
//         } else {
//             throw new RuntimeException("Dimensões inválidas!");
//         }
//     } 
// }


public class Rectangulo {
    private int altura;
    private int largura;
    public Rectangulo(int altura, int largura) throws Exception{
        this.setTamanho(altura, largura);
    }

    public void setTamanho(int altura, int largura) throws Exception{
        if ( largura >= 0 && altura >=0){
            this.altura = altura;
            this.largura = largura;
        } else {
            throw new RuntimeException("Dimensões inválidas!");
        }
    } 
}
