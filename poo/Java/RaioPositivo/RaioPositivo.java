import java.util.Scanner;

public class RaioPositivo {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double raio;
        final double PI = 3.1415;
        while (true) {
            System.out.print("Informe o raio: ");
            raio = scanner.nextDouble();
            if (raio > 0) {
                double area = PI * raio * raio;
                System.out.printf("A area eh: %.2f\n", area);
                break;
            }
        }
        scanner.close();
    }
}