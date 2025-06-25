import java.util.Scanner;

public class SubtracaoRepeticao {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int resultado = a;
        for (int i = 0; i < b; i++) {
            resultado--;
        }
        System.out.println(resultado);
        scanner.close();
    }
}