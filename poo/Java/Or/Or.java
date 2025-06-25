import java.util.Scanner;

public class DisjuncaoLogica {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        boolean p = scanner.nextBoolean();
        boolean q = scanner.nextBoolean();
        System.out.println(p || q);
        scanner.close();
    }
}