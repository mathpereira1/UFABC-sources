import java.util.Scanner;

public class SomaVet {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        long soma = 0;
        for (int i = 0; i < n; i++) {
            soma += scanner.nextInt();
        }
        System.out.println(soma);
        scanner.close();
    }
}