import java.util.Scanner;

public class DivisaoReal {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        double resultado = (double) a / b;
        System.out.printf("%.4f\n", resultado);
        scanner.close();
    }
}