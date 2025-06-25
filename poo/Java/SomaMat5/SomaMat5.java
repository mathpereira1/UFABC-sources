import java.util.Scanner;

public class SomaMat5 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        long somatorio = 0;
        for (int i = 0; i < n * m; i++) {
            somatorio += scanner.nextInt();
        }
        System.out.println("Somatorio da Matriz: " + somatorio);
        scanner.close();
    }
}