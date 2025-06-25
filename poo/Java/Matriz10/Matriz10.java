import java.util.Scanner;

public class Matriz10 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int valor = scanner.nextInt();
                System.out.print(valor * 10);
                if (j < m - 1) {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
        scanner.close();
    }
}