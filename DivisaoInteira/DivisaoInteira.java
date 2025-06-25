import java.util.Scanner;

public class DivisaoInteira {
    public static void main(String[] args){
        int x, y;

        Scanner scan = new Scanner(System.in);

        x = scan.nextInt();
        y = scan.nextInt();

        System.out.println(x/y);

        scan.close();

    }
}