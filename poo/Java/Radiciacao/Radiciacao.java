import java.util.Scanner;

public class RadiciacaoNativa {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long a = scanner.nextLong();

        double resultado = Math.sqrt(a);

        System.out.printf("%.4f\n", resultado);
        
        scanner.close();
    }
}