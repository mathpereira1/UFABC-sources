import java.util.Scanner;

public class Soma6 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long soma = 0;
        int valor;
        while (scanner.hasNextInt() && (valor = scanner.nextInt()) != 0) {
            soma += valor;
        }
        System.out.println(soma);
        scanner.close();
    }
}