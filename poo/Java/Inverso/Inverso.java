import java.util.Scanner;

public class Inverso {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        while (scanner.hasNext()) {
            String palavra = scanner.next();
            String reverso = new StringBuilder(palavra).reverse().toString();
            System.out.println(reverso);
        }
        scanner.close();
    }
}