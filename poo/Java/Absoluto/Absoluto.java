import java.util.Scanner;

public class Absoluto {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        long n = scanner.nextLong();

        long absoluto = Math.abs(n);

        System.out.println(absoluto);

        scanner.close();
    }
}