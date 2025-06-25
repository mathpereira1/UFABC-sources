import java.util.Scanner;

public class HelloFulano {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String nome = scanner.next();
        System.out.println("Ola " + nome + ", seja bem-vindo!");
        scanner.close();
    }
}