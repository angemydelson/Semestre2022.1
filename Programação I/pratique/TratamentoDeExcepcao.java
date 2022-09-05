public class TratamentoDeExcepcao {
    // public static void main(String[] args){
    //     if (args.length > 0){
    //         int j = Integer.parseInt(args[0]);
    //         while ( j >= 0) {
    //             System.out.println((j));
    //             j--;
    //         }
    //     } else {
    //         System.out.println("Falta um argumento inteiro");
    //     }
    // }

    // O uso de try e catch 1
    // public static void main(String[] args){
    //     try{
    //         int j = Integer.parseInt(args[0]);
    //         while ( j >= 0) {
    //             System.out.println((j));
    //             j--;
    //         }
    //     } catch(Exception e) {
    //         System.out.println("Argumento inválido.");
    //     }
    // }

    // O uso de try catch 2

    // public static void main(String[] args){
    //     try{
    //         int j = Integer.parseInt(args[0]);
    //         while ( j >= 0) {
    //             System.out.println((j));
    //             j--;
    //         }
    //     }catch (ArrayIndexOutOfBoundsException e){
    //         System.out.println(("Argumento não informado."));
    //     } catch(NumberFormatException e) {
    //         System.out.println("Argumento com tipo inválido.");
    //     }
    // }

    // Tratamento de exception múltipla

    // public static void main(String[] args){
    //     try{
    //         int j = Integer.parseInt(args[0]);
    //         while ( j >= 0) {
    //             System.out.println((j));
    //             j--;
    //         }
    //     }catch (ArrayIndexOutOfBoundsException | NumberFormatException e ){
    //         System.out.println(("Argumento não fornecido ou invalido"));
    //     }
    // }

    // O uso de Finally

    // public static void main(String[] args){
    //     int j = 'z';
    //     try{
    //         j = Integer.parseInt(args[0]);
    //     } catch (ArrayIndexOutOfBoundsException | NumberFormatException e ){
    //         System.out.println(("Argumento inválido ou ausente. Usando default"));
    //     } finally { 
    //        while ( j >= 0) {
    //             System.out.println((j));
    //             j--;
    //         }
    //     }
    // }

    // Tratamento de Exception nã monitoradas

    public static void main(String[] args){
        // int j = 'z';
        // try{
        //     j = Integer.parseInt(args[0]);
        // } catch (ArrayIndexOutOfBoundsException | NumberFormatException e ){
        //     System.out.println(("Argumento inválido ou ausente. Usando default"));
        // } finally { 
        //    while ( j >= 0) {
        //         System.out.println((j));
        //         j--;
        //     }
        // }
        
        try{
            int larg = Integer.parseInt(args[4]);
            int alt = Integer.parseInt(args[1]);
            Rectangulo rect = new Rectangulo(larg,alt);
        } catch (ArrayIndexOutOfBoundsException e){
            System.out.println("Número insuficiente de argumentos");
        } catch (NumberFormatException e) {
            System.out.println(("Argumentos inválidos."));
        } catch (Exception e) {
            System.out.println("Dimensões informadas são inválidas!");
        }
    }
}
