import java.util.Scanner;

public class VetorX3 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        for (int i = 0; i < n; i++) {
            int valor = scanner.nextInt();
            System.out.print(valor * 3);
            if (i < n - 1) {
                System.out.print(" ");
            }
        }
        System.out.println();
        scanner.close();
    }
}