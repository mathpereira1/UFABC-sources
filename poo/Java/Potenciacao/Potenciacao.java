import java.util.Scanner;

public class PotenciacaoNativa {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double a = scanner.nextDouble();
        double n = scanner.nextDouble();

        double resultado = Math.pow(a, n);

        System.out.printf("%.4f\n", resultado);

        scanner.close();
    }
}