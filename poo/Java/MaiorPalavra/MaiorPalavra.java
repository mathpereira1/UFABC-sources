import java.util.Scanner;

public class MaiorPalavra {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String maiorPalavra = "";
        boolean primeira = true;

        while (scanner.hasNext()) {
            String palavra = scanner.next();
            if (primeira) {
                maiorPalavra = palavra;
                primeira = false;
            } else {
                if (palavra.length() > maiorPalavra.length()) {
                    maiorPalavra = palavra;
                }
            }
        }

        if (primeira) {
            System.out.println("Nenhuma palavra foi informada");
        } else {
            System.out.println("A maior palavra informada foi " + maiorPalavra);
        }
        scanner.close();
    }
}