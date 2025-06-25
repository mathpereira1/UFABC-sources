import java.util.Scanner;
import java.util.Locale;

public class SomaVetorial {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in).useLocale(Locale.US);
        
        while (scanner.hasNextInt()) {
            int n = scanner.nextInt();
            
            if (n == 0) {
                break;
            }
            
            double[] v = new double[n];
            double[] u = new double[n];
            double[] w = new double[n];
            
            for (int i = 0; i < n; i++) {
                v[i] = scanner.nextDouble();
            }
            
            for (int i = 0; i < n; i++) {
                u[i] = scanner.nextDouble();
            }
            
            for (int i = 0; i < n; i++) {
                w[i] = v[i] + u[i];
            }
            
            for (int i = 0; i < n; i++) {
                System.out.printf(Locale.US, "%.2f%s", w[i], (i == n - 1 ? "" : " "));
            }
            System.out.println();
        }
        
        System.out.println();
        scanner.close();
    }
}