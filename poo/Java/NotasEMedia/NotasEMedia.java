import java.util.Scanner;

public class NotasEMedia {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double soma = 0.0;
        double nota;
        for (int i = 1; i <= 10; i++) {
            System.out.print("Informe a " + i + "a. nota: ");
            nota = scanner.nextDouble();
            soma += nota;
        }
        double media = soma / 10.0;
        System.out.printf("Sua Media Final dos Trabalhos (NFT) foi %.2f\n", media);
        scanner.close();
    }
}