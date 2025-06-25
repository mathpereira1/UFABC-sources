import java.util.Scanner;

public class Fatorial2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n;
        while (scanner.hasNextInt() && (n = scanner.nextInt()) >= 0) {
            long fatorial = 1;
            for (int i = 2; i <= n; i++) {
                fatorial *= i;
            }
            System.out.println(fatorial);
        }
        scanner.close();
    }
}