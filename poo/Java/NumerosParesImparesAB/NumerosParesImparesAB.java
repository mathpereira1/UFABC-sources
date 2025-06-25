import java.util.Scanner;

public class NumerosParesImparesAB {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        boolean primeiroImpresso = false;

        for (int i = a; i <= b; i++) {
            if (i % 2 == 0) {
                if (primeiroImpresso) {
                    System.out.print(" ");
                }
                System.out.print(i);
                primeiroImpresso = true;
            }
        }
        System.out.println();
        
        primeiroImpresso = false;
        
        for (int i = a; i <= b; i++) {
            if (i % 2 != 0) {
                if (primeiroImpresso) {
                    System.out.print(" ");
                }
                System.out.print(i);
                primeiroImpresso = true;
            }
        }
        System.out.println();
        
        scanner.close();
    }
}