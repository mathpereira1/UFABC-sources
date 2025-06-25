import java.util.Scanner;

public class Lua2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        for (int i = 0; i < n; i++) {
            int m1 = scanner.nextInt();
            int m2 = scanner.nextInt();
            if (m2 >= 0 && m2 <= 2) {
                System.out.println("Nova");
            } else if (m2 >= 97 && m2 <= 100) {
                System.out.println("Cheia");
            } else if (m2 > m1) {
                System.out.println("Crescente");
            } else {
                System.out.println("Minguante");
            }
        }
        scanner.close();
    }
}