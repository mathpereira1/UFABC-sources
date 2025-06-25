import java.util.Scanner;

public class Fatorial1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        long fatorial = 1;
        for (int i = 2; i <= n; i++) {
            fatorial *= i;
        }
        System.out.println(fatorial);
        scanner.close();
    }
}