import java.util.Scanner;

public class IndicesPares {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] v = new int[n];
        int paresCount = 0;

        for (int i = 0; i < n; i++) {
            v[i] = scanner.nextInt();
            if (v[i] % 2 == 0) {
                paresCount++;
            }
        }

        boolean primeiroImpresso = false;
        for (int i = 0; i < n; i += 2) {
            if (primeiroImpresso) {
                System.out.print(" ");
            }
            System.out.print(v[i]);
            primeiroImpresso = true;
        }
        
        System.out.println(" " + paresCount);
        System.out.println();
        scanner.close();
    }
}