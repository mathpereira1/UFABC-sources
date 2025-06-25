import java.util.Scanner;

public class Soma7 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        while (scanner.hasNextLine()) {
            String linha = scanner.nextLine();
            if (linha.trim().isEmpty()) {
                continue;
            }
            Scanner lineScanner = new Scanner(linha);
            long soma = 0;
            int valor;
            while (lineScanner.hasNextInt() && (valor = lineScanner.nextInt()) != 0) {
                soma += valor;
            }
            System.out.println(soma);
            lineScanner.close();
        }
        scanner.close();
    }
}