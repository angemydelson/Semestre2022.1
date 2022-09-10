/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package aula15;

/**
 *
 * @author aluno
 */
public class Circulo extends Forma {
    public Circulo(double raio) {
        super(1);
        setRaio(raio);
    }
    @Override
    public double area() {
        return Math.PI * Math.pow(getMedida(0), 2);
    }
    public void setRaio(double raio) {
        setMedida(0, raio);
    }
}
