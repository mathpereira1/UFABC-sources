import java.util.Scanner;

public class SomaRepeticao {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int soma = a;
        for (int i = 0; i < b; i++) {
            soma++;
        }
        System.out.println(soma);
        scanner.close();
    }
}