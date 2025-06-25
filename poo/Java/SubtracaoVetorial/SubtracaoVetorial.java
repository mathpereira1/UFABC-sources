import java.util.Scanner;
import java.util.ArrayList;

public class SubtracaoVetorial {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n;
        while ((n = scanner.nextInt()) != 0) {
            double[] v = new double[n];
            double[] u = new double[n];
            for (int i = 0; i < n; i++) v[i] = scanner.nextDouble();
            for (int i = 0; i < n; i++) u[i] = scanner.nextDouble();

            for (int i = 0; i < n; i++) {
                System.out.printf("%.2f", v[i] - u[i]);
                if (i < n - 1) {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
        scanner.close();
    }
}