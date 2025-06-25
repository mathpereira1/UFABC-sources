import java.util.Scanner;

public class Inversao {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        long x = scanner.nextLong();

        long oposto = -x;

        System.out.println(oposto);

        scanner.close();
    }
}