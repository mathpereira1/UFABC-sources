import java.util.Scanner;

public class Primo {
    public static boolean ehPrimo(int k) {
        if (k <= 1) {
            return false;
        }
        for (int i = 2; i * i <= k; i++) {
            if (k % i == 0) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int k = scanner.nextInt();
        if (ehPrimo(k)) {
            System.out.println("PRIMO");
        } else {
            System.out.println("COMPOSTO");
        }
        scanner.close();
    }
}