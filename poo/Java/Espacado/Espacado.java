import java.util.Scanner;

public class Espacado {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        while (scanner.hasNextLine()) {
            String palavra = scanner.nextLine();
            if (palavra.isEmpty()) continue;
            for (int i = 0; i < palavra.length(); i++) {
                System.out.print(palavra.charAt(i));
                if (i < palavra.length() - 1) {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
        scanner.close();
    }
}