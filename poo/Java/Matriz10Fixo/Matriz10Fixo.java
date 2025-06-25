import java.util.Scanner;

public class Matriz10Fixo {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                int valor = scanner.nextInt();
                System.out.print(valor * 10);
                if (j < 4) {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
        scanner.close();
    }
}