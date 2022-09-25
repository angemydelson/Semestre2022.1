public class JavaAtrapalhaMuitaGente{
    public static void main(String args[]){
        String word = "atrapalha";
        for (int i=1; i<=10; i++){
            System.out.printf("Java " + word +  " muita gente\n");
            word += " atrapalha ";
        }
    }
}