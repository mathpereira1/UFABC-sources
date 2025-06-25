import java.util.Scanner;

public class AprovadoExameReprovado {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double m = scanner.nextDouble();
        int f = scanner.nextInt();
        if (m < 4.0 || f > 30) {
            System.out.println("Reprovado!");
        } else if (m >= 6.0) {
            System.out.println("Aprovado!");
        } else {
            System.out.println("Exame Final!");
        }
        scanner.close();
    }
}