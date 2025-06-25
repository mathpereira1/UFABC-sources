import java.util.Scanner;

public class Bissexto2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int ano = scanner.nextInt();
        if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
            System.out.println("ANO BISSEXTO");
        }
        scanner.close();
    }
}