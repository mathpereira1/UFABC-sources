import java.util.Scanner;

public class Espelho {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String a = scanner.next();
        String b = scanner.next();
        String aReversed = new StringBuilder(a).reverse().toString();
        if (aReversed.equals(b)) {
            System.out.println("espelho");
        } else {
            System.out.println("nao espelho");
        }
        scanner.close();
    }
}