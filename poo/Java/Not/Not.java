import java.util.Scanner;

public class NegacaoLogica {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        boolean p = scanner.nextBoolean();
        System.out.println(!p);
        scanner.close();
    }
}