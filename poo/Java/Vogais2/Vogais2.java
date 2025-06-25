import java.util.Scanner;

public class Vogais2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        char letra = scanner.next().charAt(0);
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
            letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
            System.out.println("SIM");
        }
        scanner.close();
    }
}