import java.util.Scanner;

public class Soma4 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        for (int i = 0; i < n; i++) {
            int m = scanner.nextInt();
            long somaBloco = 0;
            for (int j = 0; j < m; j++) {
                somaBloco += scanner.nextInt();
            }
            System.out.println(somaBloco);
        }
        scanner.close();
    }
}