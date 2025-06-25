import java.util.Scanner;

public class Soma3 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long soma = 0;
        while (scanner.hasNextInt()) {
            soma += scanner.nextInt();
        }
        System.out.println(soma);
        scanner.close();
    }
}