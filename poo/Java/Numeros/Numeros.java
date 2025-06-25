import java.util.Scanner;

public class Numeros {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n;
        while (scanner.hasNextInt() && (n = scanner.nextInt()) >= 0) {
            int somaDivisores = 0;
            for (int i = 1; i <= n / 2; i++) {
                if (n % i == 0) {
                    somaDivisores += i;
                }
            }
            if (somaDivisores > n) {
                System.out.println("abundante");
            } else if (somaDivisores < n) {
                System.out.println("deficiente");
            } else {
                System.out.println("perfeito");
            }
        }
        scanner.close();
    }
}