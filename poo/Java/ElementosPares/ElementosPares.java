import java.util.Scanner;
import java.util.ArrayList;

public class ElementosPares {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        ArrayList<Integer> pares = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            int valor = scanner.nextInt();
            if (valor % 2 == 0) {
                pares.add(valor);
            }
        }
        for (int i = 0; i < pares.size(); i++) {
            System.out.print(pares.get(i) + " ");
        }
        System.out.println(pares.size());
        System.out.println();
        scanner.close();
    }
}