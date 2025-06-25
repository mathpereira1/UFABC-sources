import java.util.Scanner;
import java.lang.Math;

public class Eq2Plus {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double a = scanner.nextDouble();
        double b = scanner.nextDouble();
        double c = scanner.nextDouble();
        double delta = b * b - 4 * a * c;
        if (delta < 0) {
            System.out.println("nao ha raiz real");
        } else if (delta == 0) {
            double raiz = -b / (2 * a);
            System.out.printf("%.4f\n", raiz);
        } else {
            double raiz1 = (-b + Math.sqrt(delta)) / (2 * a);
            double raiz2 = (-b - Math.sqrt(delta)) / (2 * a);
            System.out.printf("%.4f %.4f\n", raiz1, raiz2);
        }
        scanner.close();
    }
}