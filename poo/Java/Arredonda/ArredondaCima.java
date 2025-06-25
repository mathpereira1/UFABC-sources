import java.util.Scanner;

public class ArredondaCimaNativo {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double n = scanner.nextDouble();

        double resultado = Math.ceil(n);

        System.out.printf("%.4f\n", resultado);
        
        scanner.close();
    }
}