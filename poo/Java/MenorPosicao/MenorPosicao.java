import java.util.Scanner;

public class MenorPosicao {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] x = new int[n];
        int menorValor = 0;
        int posicao = 0;
        for (int i = 0; i < n; i++) {
            x[i] = scanner.nextInt();
            if (i == 0 || x[i] < menorValor) {
                menorValor = x[i];
                posicao = i;
            }
        }
        System.out.println("Menor valor: " + menorValor);
        System.out.println("Posicao: " + posicao);
        System.out.println();
        scanner.close();
    }
}