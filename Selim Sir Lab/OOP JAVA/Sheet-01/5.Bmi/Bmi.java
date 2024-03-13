import java.util.Scanner;

public class Bmi {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Do you want to calculate BMI?");
        System.out.println("Enter 1: (YES)");
        System.out.println("Enter 0: (NO EXIT)");

        while (true) {
            System.out.print("Enter option: ");
            int op = input.nextInt();

            if (op == 1) {
                System.out.print("Enter height in inch: ");
                float h = input.nextFloat();
                System.out.print("Enter Weight in Pound: ");
                float w = input.nextFloat();

                double bmi = (w * 0.45) / ((h * 0.0254) * 2);
                if (bmi <= 15.99)
                    System.out.println("Starvation\n");
                else if (bmi >= 16 && bmi <= 16.99)
                    System.out.println("Emaciation\n");
                else if (bmi >= 17 && bmi <= 18.49)
                    System.out.println("Underweight\n");
                else if (bmi >= 18.50 && bmi <= 22.99)
                    System.out.println("Normal,low range\n");
                else if (bmi >= 23 && bmi <= 24.99)
                    System.out.println("Normal high Range\n");
                else if (bmi >= 25 && bmi <= 27.49)
                    System.out.println("Overweight low range\n");
                else if (bmi >= 27.50 && bmi <= 29.99)
                    System.out.println("Overweight high range\n");
                else if (bmi >= 30 && bmi <= 34.99)
                    System.out.println("1st degree obesity\n");
                else if (bmi >= 35 && bmi <= 39.99)
                    System.out.println("2nd degree obesity\n");
                else if (bmi >= 40)
                    System.out.println("3rd degree obesity\n");

                System.out.println("Do you want to calculate BMI Again?");
                System.out.println("Enter 1: (YES)");
                System.out.println("Enter 0: (NO EXIT)");

            } else {
                System.out.println("Terminate");
                return;
            }
        }
    }
}
