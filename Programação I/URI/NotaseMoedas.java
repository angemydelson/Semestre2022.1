import java.util.Scanner;
public class NotaseMoedas {
    public  static void main ( String args[]) {
        Scanner angemy = new Scanner(System.in);
        float valor, E;
        int N ,a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p ,q ,r, s, t, u, D;
        valor = angemy.nextFloat();

        N = (int) valor;
        a = N / 100;
        b = N % 100;
        c = b / 50;
        d = b % 50;
        e = d / 20;
        f = d % 20;
        g = f / 10;
        h = f % 10;
        i = h / 5;
        j = h % 5;
        k = j / 2;
        l = j % 2;

        E = valor * 100;
        D = (int) E;
        m = D % 100;
        n = m / 50;
        o = m % 50;
        p = o / 25;
        q = o % 25;
        r = q / 10;
        s = q % 10;
        t = s / 5;
        u = s % 5;
        
        System.out.println("NOTAS:");

        System.out.printf("%d nota(s) de R$ 100.00\n",a);
        System.out.printf("%d nota(s) de R$ 50.00\n",c);
        System.out.printf("%d nota(s) de R$ 20.00\n",e);
        System.out.printf("%d nota(s) de R$ 10.00\n",g);
        System.out.printf("%d nota(s) de R$ 5.00\n",i);
        System.out.printf("%d nota(s) de R$ 2.00\n",k);
        
        System.out.println("MOEDAS:");

        System.out.printf("%d moeda(s) de R$ 1.00\n",l);
        System.out.printf("%d moeda(s) de R$ 0.50\n",n);
        System.out.printf("%d moeda(s) de R$ 0.25\n",p);
        System.out.printf("%d moeda(s) de R$ 0.10\n",r);
        System.out.printf("%d moeda(s) de R$ 0.05\n",t);
        System.out.printf("%d moeda(s) de R$ 0.01\n",u);
    }
}