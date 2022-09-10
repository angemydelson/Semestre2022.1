package aula15;

public class Conversor {
    protected double kProp, kLin;
    
    public Conversor(double kProp, double kLin) {
        this.kProp = kProp;
        this.kLin = kLin;
    }
    
    public double getKProp() {
        return kProp;
    }
    
    public double getKLin() {
        return kLin;
    }
    
    public double converter(double valor) {
        return valor * kProp + kLin;
    }
    
    @Override
    public String toString() {
        return "Conversor[kProp=" + kProp + " kLin=" + kLin + "]";
    }
}
