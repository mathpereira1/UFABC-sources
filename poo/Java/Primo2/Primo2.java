import java.util.Scanner;
import java.util.ArrayList;

public class Primo2 {
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
        int s = scanner.nextInt();
        int f = scanner.nextInt();
        
        System.out.print("Primos entre " + s + " e " + f + ":");
        
        for (int i = s; i <= f; i++) {
            if (ehPrimo(i)) {
                System.out.print(" " + i);
            }
        }
        System.out.println();
        scanner.close();
    }
}