import java.util.Scanner;

public class Subtracao {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);

        int x, y;

        x = scan.nextInt();
        y = scan.nextInt();

        System.out.println(x-y);

        scan.close();
    }
}
