import java.util.Scanner;

public class ManipulandoArrays {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        long[] diff = new long[n + 1];
        for (int i = 0; i < m; i++) {
            int a = scanner.nextInt();
            int b = scanner.nextInt();
            long k = scanner.nextLong();
            diff[a - 1] += k;
            if (b < n) {
                diff[b] -= k;
            }
        }
        long maxVal = 0;
        long currentVal = 0;
        for (int i = 0; i < n; i++) {
            currentVal += diff[i];
            if (currentVal > maxVal) {
                maxVal = currentVal;
            }
        }
        System.out.println(maxVal);
        System.out.println();
        scanner.close();
    }
}