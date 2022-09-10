import java.util.Random;
public class Baralho{
    private Carte[] cartas;
    private int tetoBaralho;

        public Baralho() throws Exception {
        cartas = new Carte[52];
        tetoBaralho = 51;

        String naipe[] = {"copas","paus","ouros","espadas"};

        for (int i=0; i<52; i++){
            cartas[i] = new Carte( ((i%13) + 1), naipe[i/13]);
            }
        }

        public int carteRemanescente(){
            return this.tetoBaralho + 1;
        }
        public Carte getCarta(){
            Carte carta = tetoBaralho >= 0 ? cartas[tetoBaralho] : null;
            --tetoBaralho;
            return carta;
        }
        public void embalahar(){
            Random generator = new Random();
            int index1 = 0;
            int index2 = 0;
            for (int i = 0; i<150; i++){
                index1 = generator.nextInt(52);
                index2 = generator.nextInt(52);
                 Carte troca = cartas[index1];
                 cartas[index1] = cartas[index2];
                 cartas[index2] = troca;
            }
        }
        public void resetar() {
            tetoBaralho = 51;
            embalahar();
        }
        
        @Override
        public String toString(){
            String str = "***** Ordem das Cartas *****\n";
            for ( int i = 0; i < 52; i++){
                    str = str.concat("[" + (i + 1) + "] " + cartas[i] + "\n");
                }
            return str;
        }
}