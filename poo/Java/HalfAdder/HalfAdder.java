import java.util.Scanner;

public class HalfAdder {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        boolean p = scanner.nextBoolean();
        boolean q = scanner.nextBoolean();
        boolean vaiUm = p && q;
        boolean soma = p ^ q;
        System.out.println(vaiUm + " " + soma);
        scanner.close();
    }
}