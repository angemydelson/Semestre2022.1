
public class MinhaCalculadora {
    private double num1;
    private double num2;
    public final static double max = 10;
    public static int min =6;

    public MinhaCalculadora (double num1, double num2){
        this.num1 = num1;
        this.num2 = num2;
    }

    double Multiplicao (){
        double total = getNum1() + getNum2();
        return total;
    }
    double Adicao (){
        double total = getNum1() * getNum2();
        return total;
    }
    double Divisao (){
        double total = getNum1() / getNum2();
        return total;
    }
    double DivisaoResto (){
        double total = getNum1() % getNum2();
        return total;
    }

    public void setNum1(double num1){
        this.num1 = num1;
    }
    public double getNum1 (){
        return this.num1;
    }
    public void setNum2( double num2){
        this.num2 = num2;
    }
    public double getNum2(){
        return this.num2;
    }


}
