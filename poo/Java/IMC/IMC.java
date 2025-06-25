import java.util.Scanner;

public class IMC {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double altura = scanner.nextDouble();
        double peso = scanner.nextDouble();
        double imc = peso / (altura * altura);

        if (imc < 16) {
            System.out.println("Magreza grave");
        } else if (imc < 17) {
            System.out.println("Magreza moderada");
        } else if (imc < 18.5) {
            System.out.println("Magreza leve");
        } else if (imc < 25) {
            System.out.println("Saudavel");
        } else if (imc < 30) {
            System.out.println("Sobrepeso");
        } else if (imc < 35) {
            System.out.println("Obesidade Grau I");
        } else if (imc < 40) {
            System.out.println("Obesidade Grau II (severa)");
        } else {
            System.out.println("Obesidade Grau III (morbida)");
        }
        scanner.close();
    }
}