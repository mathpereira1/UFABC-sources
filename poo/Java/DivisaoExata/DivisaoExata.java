import java.util.Scanner;

public class DivisaoExata {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long x = scanner.nextLong();
        long y = scanner.nextLong();
        if (y != 0 && x % y == 0) {
            System.out.println("a divisao de " + x + " por " + y + " eh exata.");
        }
        scanner.close();
    }
}