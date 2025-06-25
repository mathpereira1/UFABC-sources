import java.util.Scanner;

public class Primo3 {
    public static boolean ehPrimo(int n) {
        if (n <= 1) {
            return false;
        }
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n;
        while (scanner.hasNextInt() && (n = scanner.nextInt()) >= 0) {
            if (ehPrimo(n)) {
                System.out.println("SIM");
            } else {
                System.out.println("NAO");
            }
        }
        scanner.close();
    }
}