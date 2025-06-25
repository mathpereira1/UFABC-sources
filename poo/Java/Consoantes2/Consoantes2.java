import java.util.Scanner;

public class Consoantes2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        char letra = scanner.next().charAt(0);
        boolean ehVogal = (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
                           letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U');
        if (Character.isLetter(letra) && !ehVogal) {
            System.out.println("SIM");
        }
        scanner.close();
    }
}