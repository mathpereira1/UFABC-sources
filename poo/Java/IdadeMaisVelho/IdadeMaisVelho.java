import java.util.Scanner;

public class IdadeMaisVelho {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int id1 = scanner.nextInt();
        int id2 = scanner.nextInt();
        System.out.println(Math.max(id1, id2));
        scanner.close();
    }
}