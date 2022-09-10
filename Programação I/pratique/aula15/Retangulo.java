/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package aula15;

/**
 *
 * @author aluno
 */
public class Retangulo extends Forma {
    public Retangulo(double altura, double largura) {
        super(2);
        setMedida(0, altura);
        setMedida(1, largura);
    }
    
    @Override
    public double area() {
        return getMedida(0) * getMedida(1);
    }
}

