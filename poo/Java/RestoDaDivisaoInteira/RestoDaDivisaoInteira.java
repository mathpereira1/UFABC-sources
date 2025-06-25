import java.util.Scanner;

public class RestoDaDivisaoInteira {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int resto = a % b;
        System.out.println(resto);
        scanner.close();
    }
}