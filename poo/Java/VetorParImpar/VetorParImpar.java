import java.util.Scanner;

public class VetorParImpar {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n;
        while ((n = scanner.nextInt()) != 0) {
            for (int i = 0; i < n; i++) {
                int valor = scanner.nextInt();
                System.out.print(valor % 2);
                if (i < n - 1) {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
        scanner.close();
    }
}