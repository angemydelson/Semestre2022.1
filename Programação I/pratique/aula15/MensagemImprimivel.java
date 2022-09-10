/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package aula15;

/**
 *
 * @author aluno
 */
public class MensagemImprimivel extends Mensagem implements Imprimivel, Editavel {

    public MensagemImprimivel(String conteudo) {
        super(conteudo);
    }
    
    @Override
    public void imprimir() {
        imprimirNoConsole();
    }

    @Override
    public void imprimirNoConsole() {
        System.out.println(INICIO);
        System.out.println(getConteudo());
        System.out.println(FIM);
    }

    @Override
    public void editar(String conteudo) {
        setConteudo(conteudo);
    }
    
}
