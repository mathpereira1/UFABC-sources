import java.util.Scanner;

public class AprovadoReprovado {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double m = scanner.nextDouble();
        int f = scanner.nextInt();
        if (m >= 6.0 && f <= 30) {
            System.out.println("Aprovado!");
        } else {
            System.out.println("Reprovado!");
        }
        scanner.close();
    }
}