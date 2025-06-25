public class NumerosPares100 {
    public static void main(String[] args) {
        for (int i = 2; i <= 100; i += 2) {
            System.out.print(i);
            if (i < 100) {
                System.out.print(" ");
            }
        }
        System.out.println();
    }
}