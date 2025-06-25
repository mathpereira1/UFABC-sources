import java.util.Scanner;

public class Esquerda {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        String comandos = scanner.next();
        char[] direcoes = {'N', 'L', 'S', 'O'};
        int direcaoAtual = 0; 
        for (char comando : comandos.toCharArray()) {
            if (comando == 'D') {
                direcaoAtual = (direcaoAtual + 1) % 4;
            } else if (comando == 'E') {
                direcaoAtual = (direcaoAtual + 3) % 4;
            }
        }
        System.out.println(direcoes[direcaoAtual]);
        scanner.close();
    }
}