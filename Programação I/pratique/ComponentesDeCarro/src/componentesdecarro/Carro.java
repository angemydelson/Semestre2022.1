/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package componentesdecarro;


public class Carro {
    private String marca;
    private String modelo;
    private String cor;
    private boolean freio;
    private boolean acclerador;
    private String tipoMotor;
    private boolean tetoSolar;
  
    
    
    public void comprarCarro() {
        
    }
    public void accelerar(){
        
    }
    
    public void freiar(){
        
    }
    
    public void apresentar(){
        System.out.println("A marca desse é " + this.getMarca());
        System.out.println("De modelo " + this.getModelo());
        System.out.println("A cor dele é " + this.getCor());
        System.out.println("Esse carro tem um motor de tipo " );
    }

    public Carro(String mar, String mod, String cor, boolean fre, boolean acc) {
        this.marca = mar;
        this.modelo = mod;
        this.cor = cor;
        this.freio = fre;
        this.acclerador = acc;
       
    }

    public String getMarca() {
        return marca;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public String getModelo() {
        return modelo;
    }

    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    public String getCor() {
        return cor;
    }

    public void setCor(String cor) {
        this.cor = cor;
    }

    public boolean isFreio() {
        return freio;
    }

    public void setFreio(boolean freio) {
        this.freio = freio;
    }

    public boolean isAcclerador() {
        return acclerador;
    }

    public void setAcclerador(boolean acclerador) {
        this.acclerador = acclerador;
    }
    
    
    
    
}
