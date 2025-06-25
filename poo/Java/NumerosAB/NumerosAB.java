import java.util.Scanner;

public class NumerosAB {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        for (int i = a; i <= b; i++) {
            System.out.print(i);
            if (i < b) {
                System.out.print(" ");
            }
        }
        System.out.println();
        scanner.close();
    }
}