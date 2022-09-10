/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package contanobanco;

public class ContaNoBanco {

    
    public static void main(String[] args) {
        ContaBanco p1 = new ContaBanco();
        p1.setNumConta(1111);
        p1.setDono("Saint Bert");
        p1.abrirconta("CC");
        p1.estadoAtual();
        
        ContaBanco p2 = new ContaBanco();
        p2.setNumConta(2222);
        p2.setDono("Angemydelson");
        p2.abrirconta("CP");
        p2.estadoAtual();
        
        
        
        p1.depositar(150000);
        p2.depositar(500000);
        
        p1.estadoAtual();
        p2.estadoAtual();
        
        p1.sacar(400);
        p1.estadoAtual();
        p1.fecharConta();
    }
    
}
